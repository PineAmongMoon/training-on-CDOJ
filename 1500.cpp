//
//  main.cpp
//  1500
//
//  Created by Ju Yuanmao on 2017/5/28.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <cstdio>
using namespace std;
const int MAXN = 100000;
int a[MAXN+2][27];
int c[MAXN+2];
char str[MAXN+2];
int main() {
    int n, i, j;
    long long ans, temp;
    char *p;
    scanf("%d%*c",&n);
    for (i = 1; i <= n; i++) {
        scanf("%s",str);
        p = str;
        while (*p) {
            a[i][(*p++)-'a'+1]++;
        }
    }
    for (i = 1; i <= n; i++) {
        scanf("%d",&c[i]);
    }
    ans = 0;
    for (i = 1; i <= 26; i++) {
        temp = 0;
        for (j = 1; j <= n ; j++) {
            temp += c[j]*a[j][i];
        }
        if (ans < temp) {
            ans = temp;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
