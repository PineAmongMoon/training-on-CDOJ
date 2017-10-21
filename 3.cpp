//
//  main.cpp
//  3
//
//  Created by Ju Yuanmao on 2017/3/15.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
using namespace std;
int x,y,s;
double fun(double pres);
int main()
{
    int t,i;
    cin >> t;
    for (i=0; i<t; i++)
    {
        int t;
        double ans=1;
        scanf("%d%d%d%d", &x, &y, &t, &s);
        ans=fun(t*y);
        printf("Case #%d: %.3lf\n", i+1, ans);
    }
    return 0;
}
double fun(double pres)
{
    double ans=0;
    if((double)s/x > (double)(s-pres)/y)
        return (double)s/x;
    else
    {
        ans=pres/(x-y);
        return ans+fun(ans*y+pres);
    }
}
