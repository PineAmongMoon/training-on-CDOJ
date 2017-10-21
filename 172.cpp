//
//  main.cpp
//  172
//
//  Created by Ju Yuanmao on 2017/3/1.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
int fun(int, int);
int main()
{
    int a,b;
    while (true)
    {
        scanf("%d%d",&a,&b);
        if (a==0&&b==0)
            break;
        printf("%d\n",fun(a,b));
    }
    return 0;
}
int fun(int a, int b)
{
    while (b%3!=0)
        --b;
    while (a%3!=0)
        ++a;
    return (b-a)/3+1;
}
