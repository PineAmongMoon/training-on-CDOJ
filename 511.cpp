//
//  main.cpp
//  511
//
//  Created by Ju Yuanmao on 2017/2/23.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>

void change(char str[], int array[]);

int main()
{
    int num;
    int a[51];
    char string[51];
    int t,i,j;
    
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",string);
    
        change(string, a);
        
        j=0;
        num=0;
        while (a[j]!=0&&a[j+1]!=0)
        {
            if (a[j]!=a[j+1])
            {
                num++;
            }
            j++;
        }
    
        printf("Case #%d: %d\n",i+1,num);
    }
    
    return 0;
}

void change(char str[], int array[])
{
    int i=0;
#define ch str[i]
#define num array[i]
    while (ch)
    {
        if ('A'<=ch&&ch<='C') num=2;
        else if ('D'<=ch&&ch<='F') num=3;
        else if ('G'<=ch&&ch<='I') num=4;
        else if ('J'<=ch&&ch<='L') num=5;
        else if ('M'<=ch&&ch<='O') num=6;
        else if ('P'<=ch&&ch<='S') num=7;
        else if ('T'<=ch&&ch<='V') num=8;
        else if ('W'<=ch&&ch<='Z') num=9;
        i++;
    }
    num=0;
#undef ch
#undef num
}
