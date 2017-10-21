//
//  main.cpp
//  167
//
//  Created by Ju Yuanmao on 2017/2/26.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
long func(long a, long b);
void intToStr(int num, char str[], int n);
int main()
{
    int t,i;
    long a,b;
    char str[5];
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        scanf("%ld%ld",&a,&b);
        intToStr(func(a, b)%10000, str, 4);
        printf("%s\n",str);
    }
    return 0;
}

long func(long a, long b)
{
    a%=10000;
    if (b==0)
        return 1;
    else
    {
        int temp=func(a, b/2)%10000;
        if (b%2==0)
            return temp*temp;
        else
            return a*temp*temp;
    }
}

void intToStr(int num, char str[], int n)
{
    int i;
    str[n]='\0';
    for (i=n-1; i>=0; i--)
    {
        str[i]=num%10+'0';
        num/=10;
    }
}
