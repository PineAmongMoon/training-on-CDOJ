//
//  main.cpp
//  145
//
//  Created by Ju Yuanmao on 2017/5/2.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

struct X {
    int a,b,c;
    X(int a, int b, int c):a(a), b(b), c(c) {}
};
bool operator > (const X&x1, const X&x2){
    return x1.c > x2.c;
}

const int MAXN=1000;
int set[MAXN+1];

int findSet(int);
void unionSet(int, int);

int findSet(int x)
{
    if (set[x] == -1) {
        return x;
    }
    return set[x] = findSet(set[x]);
}

void unionSet(int x, int y)
{
    int fx = findSet(x);
    int fy = findSet(y);
    if (fx != fy) {
        set[fx] = fy;
    }
}

int main() {
    int t,n,m,a,b,c,i,ans;
    X x=X(0,0,0);
    scanf("%d",&t);
    while (t--) {
        priority_queue<X,vector<X>,greater<X>> pq;
        scanf("%d%d",&n,&m);
        memset(set, -1, sizeof(set));
        while (m--) {
            scanf("%d%d%d",&a,&b,&c);
            pq.push(X(a, b, c));
        }
        ans = 0;
        i = 0;
        while (i<n-1 && !pq.empty()) {
            x = pq.top();
            pq.pop();
            if (findSet(x.a) != findSet(x.b)) {
                unionSet(x.a, x.b);
                ans += x.c;
                i++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
