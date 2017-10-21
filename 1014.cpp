//
//  main.cpp
//  1014
//
//  Created by Ju Yuanmao on 2017/4/26.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int f[10001][10001];
int a[10000];
int dp(int i, int p);
int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",a+i);
        a[i] %= n;
    }
    if (dp(n, n)==0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
int dp(int i, int p)
{
    if (i==1) {
        if (a[i]==p) {
            f[i][p]=0;
        } else {
            f[i][p]=-1;
        }
    }else{
        f[i][p]=dp(i-1,p-a[i]);
    }
    return f[i][p];
}
