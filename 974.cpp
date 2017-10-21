//
//  main.cpp
//  974
//
//  Created by Ju Yuanmao on 2017/2/24.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <cstdio>
#include <ctime>
using namespace std;

unsigned long long func(int, int);

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int m, n;
        scanf("%d%d",&m,&n);
        printf("%llu\n",func(m, n));
    }
    return 0;
}

unsigned long long func(int m, int n)
{
    if (n == 0)
    {
        return 1;
    } else
    {
        unsigned long long temp=func(m, n/2);
        if (n%2==0)
            return temp*temp;
        else
            return m*temp*temp;
    }
}
