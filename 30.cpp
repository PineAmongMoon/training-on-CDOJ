//
//  main.cpp
//  30
//
//  Created by Ju Yuanmao on 2017/5/19.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 100;
const long long inf = 0xFFFFFFFFFFFFFFF;
long long graph[MAXN+2][MAXN+2];
int f[MAXN+2];
long long dis[MAXN+2];
int main() {
    int m, n, a, b, i, j;
    long long c;
    while (scanf("%d%d",&n,&m)==2 && (m != 0 || n != 0)) {
        for (i=0; i<MAXN+2; i++) {
            for (j=0; j<MAXN+2; j++) {
                if (i == j) {
                    graph[i][j] = 0;
                }else{
                    graph[i][j] = inf;
                }
            }
        }
        
        for (i=0; i<m; i++) {
            scanf("%d%d%lld",&a,&b,&c);
            graph[a][b] = graph[b][a] = c;

        }
        
        memset(f, 0, sizeof(f));
        dis[1] = 0;
        for (i=2; i<=n; i++) {
            dis[i] = inf;
        }
        for (i=0; i<n; i++) {
            a = 0;
            c = inf;
            for (j=1; j<=n; j++) {
                if (!f[j] && dis[j] <= c) {
                    a = j;
                    c = dis[j];
                }
            }
            f[a] = 1;
            for (j=1; j<=n; j++) {
                dis[j] = min(dis[j], dis[a]+graph[a][j]);
            }
        }
        printf("%lld\n",dis[n]);
    }
    return 0;
}
