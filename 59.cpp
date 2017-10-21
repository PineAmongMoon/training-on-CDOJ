//
//  main.cpp
//  59
//
//  Created by Ju Yuanmao on 2017/3/15.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    int n,i;
    char str[201], temp[10], *p, *q;
    cin >> n;
    for (i=0; i<n; i++)
    {
        scanf("%s",str);
        p=str;
        while (*p)
        {
            if (isdigit(*p))
            {
                q=temp;
                while (isdigit(*p))
                {
                    *q=*p;
                    p++;
                    q++;
                }
                *q='\0';
                cout << atoi(temp) << ' ';
            }
            p++;
        }
        cout << endl;
    }
    return 0;
}
