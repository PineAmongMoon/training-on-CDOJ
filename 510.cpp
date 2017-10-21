//
//  main.cpp
//  510
//
//  Created by Ju Yuanmao on 2017/5/26.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <cstdio>
#include <cstring>
using namespace std;
int mark[102];
struct Node {
    int l, r, info;
}tree[102 << 2];

int tl(int);
int tr(int);
void build(int, int, int);
int query(int, int, int);

inline int tl(int x) {
    return 2*x;
}
inline int tr(int x) {
    return 2*x+1;
}

void build(int x, int l, int r) {
    tree[x].l = l;
    tree[x].r = r;
    if (l == r) {
        tree[x].info = mark[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(tl(x), l, mid);
    build(tr(x), mid+1, r);
    tree[x].info = tree[tl(x)].info + tree[tr(x)].info;
}
int query(int x, int l, int r) {
    if (tree[x].l == l && tree[x].r == r) {
        return tree[x].info;
    }
    int mid = (tree[x].l + tree[x].r) >> 1;
    if (r <= mid) {
        return query(tl(x), l, r);
    }
    if (l > mid) {
        return query(tr(x), l, r);
    }
    return query(tl(x), l, mid) + query(tr(x), mid+1, r);
}

int main(int argc, const char * argv[]) {
    int t, n, m, a, b, c, i;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        memset(mark, 0, sizeof(mark));
        for (i = 0; i < n; i++) {
            scanf("%d",&c);
            mark[c+1]++;
        }
        build(1, 1, 101);
        scanf("%d",&m);
        for (i=0; i<m; i++) {
            scanf("%d%d",&a,&b);
            printf("%d\n",query(1, a+1, b+1));
        }
        printf("\n");
    }
    return 0;
}
