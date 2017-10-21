//
//  main.cpp
//  1595
//
//  Created by Ju Yuanmao on 2017/6/4.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <cstdio>
#include <set>
using namespace std;
int main() {
    set<long long> s;
    int n;
    long long a, b;
    scanf("%d",&n);
    while (n--) {
        scanf("%lld",&a);
        s.insert(a);
    }
    while (true) {
        a = *s.rbegin();
        b = a;
        do {
            b >>= 1;
        } while (s.find(b) != s.end());
        if (b != 0) {
            s.erase(a);
            s.insert(b);
        } else {
            break;
        }
    }
    printf("%lld\n",*s.rbegin());
    return 0;
}
