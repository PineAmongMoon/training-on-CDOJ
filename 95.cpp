//
//  main.cpp
//  95
//
//  Created by Ju Yuanmao on 2017/3/8.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
const double pi=acos(-1.0);
int main()
{
    int i,t;
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        int n, r, i, *a, b, sum;
        scanf("%d%d",&n,&r);
        a=(int*)calloc(n, sizeof(int));
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sum=0;
        for (i=0; i<n-1; i++)
        {
            b=a[i]-a[i+1];
            if(b>0)
                sum+=b;
        }
        if(a[n-1]-a[0]>0)
            sum+=a[n-1]-a[0];
        if (sum==0)
        {
            printf("Inf\n");
        } else
        {
            printf("%.3lf\n",2*pi*r/sum);
        }
        free(a);
    }
    return 0;
}
