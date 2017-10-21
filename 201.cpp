//
//  main.cpp
//  201
//
//  Created by Ju Yuanmao on 2017/6/3.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <cstdio>
#include <queue>
using namespace std;
const int MAXN = 1000000;
int a[MAXN];
typedef int* int_ptr;
struct comp1 {
    bool operator() (const int_ptr &x, const int_ptr &y)
    {   return *x<*y;   }
};
struct comp2 {
    bool operator() (const int_ptr &x, const int_ptr &y)
    {   return *x>*y;   }
};
int main(int argc, const char * argv[]) {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    priority_queue<int_ptr, vector<int_ptr>, comp1> maxpq;
    priority_queue<int_ptr, vector<int_ptr>, comp2> minpq;
    for (auto it = a; it < a+k; it++) {
        minpq.push(it);
        maxpq.push(it);
    }
    printf("%d",*minpq.top());
    for (auto l = a+1, r = a+k; r<a+n; l++, r++) {
        minpq.push(r);
        while (minpq.top() < l) {
            minpq.pop();
        }
        printf(" %d",*minpq.top());
    }
    printf("\n%d",*maxpq.top());
    for (auto l = a+1, r = a+k; r<a+n; l++, r++) {
        maxpq.push(r);
        while (maxpq.top() < l) {
            maxpq.pop();
        }
        printf(" %d",*maxpq.top());
    }
    printf("\n");
    return 0;
}
