//
//  main.cpp
//  528
//
//  Created by Ju Yuanmao on 2017/6/8.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

/*#include <iostream>
#include <map>
using namespace std;
int main() {
    map<long, long, greater<long>> mp;
    map<long, long, greater<long>>::iterator it;
    long n, m, a, i;
    ios::sync_with_stdio(false);
    while (cin >> n >> m) {
        mp.clear();
        for (i=0; i<n; i++) {
            cin >> a;
            mp[a]++;
        }
        it = mp.begin();
        while (m > 0) {
            n = min(it->second, m);
            for (i=0; i < n; i++) {
                cout << it->first << ' ';
            }
            m -= n;
            it++;
        }
        cout << endl;
    }
    return 0;
}*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<long> v;
    long n, m, i;
    ios::sync_with_stdio(false);
    while (cin >> n >> m) {
        v.resize(n);
        for (i=0; i<n; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (i=0; i<m; i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
