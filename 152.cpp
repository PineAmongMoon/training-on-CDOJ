//
//  main.cpp
//  152
//
//  Created by Ju Yuanmao on 2017/2/25.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
double func(int a);
int main()
{
    int n,i;
    int c,s;
    int sumofc;
    double sum;
    scanf("%d",&n);
    for (i=0, sumofc=0, sum=0; i<n; i++)
    {
        scanf("%d%d",&c,&s);
        sumofc+=c;
        sum+=c*func(s);
    }
    printf("%.2lf\n",sum/sumofc);
    return 0;
}

double func(int a)
{
    if (90<=a&&a<=100)
        return 4;
    else if (80<=a&&a<=89)
        return 3;
    else if (70<=a&&a<=79)
        return 2;
    else if (60<=a&&a<=69)
        return 1;
    else
        return 0;
}
