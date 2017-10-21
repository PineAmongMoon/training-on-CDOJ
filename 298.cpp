//
//  main.cpp
//  298
//
//  Created by Ju Yuanmao on 2017/2/26.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
char* change(long num, char str[]);
void output(char *p);
int main()
{
    int t,i;
    long num;
    char str[15];
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        scanf("%ld",&num);
        output(change(num, str));
        printf("\n");
    }
    return 0;
}

char* change(long num, char str[])
{
    int i;
    char *p=str;
    *p='\0';
    p++;
    if (num==0)
    {
        *p='0';
        return p;
    }
    i=0;
    while (num!=0)
    {
        *p=num%10+'0';
        num/=10;
        i++;
        p++;
        if (i==3&&num!=0)
        {
            i=0;
            *p=',';
            p++;
        }
    }
    return p-1;
}

void output(char *p)
{
    while (*p)
    {
        printf("%c",*p);
        p--;
    }
}
