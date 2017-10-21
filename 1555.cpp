//
//  main.cpp
//  1555
//
//  Created by Ju Yuanmao on 2017/5/23.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
const long long p = 1e11+3;
long long ans[5];
struct mark {
    int i;
    long long n;
    mark(int i, long long n): i(i), n(n) {}
};
struct cmp {
    bool operator () (const mark&a, const mark&b) {
        return a.n > b.n;
    }
};
int main() {
    int t, i;
    long long n, now;
    mark temp(0,0);
    priority_queue<mark,vector<mark>,cmp> pq;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld", &n);
        pq.push(mark(i, n));
    }
    now =1;
    n = 1;
    temp = pq.top();
    while (true) {
        now = (now * n) % p;
        if (n == temp.n) {
            ans[temp.i] = now;
            pq.pop();
            if (pq.empty()) {
                break;
            }
            temp = pq.top();
        }
        n++;
    }
    for (i = 0; i < t; i++) {
        printf("%lld\n", ans[i]);
    }
    return 0;
}
