//
//  main.cpp
//  60
//
//  Created by Ju Yuanmao on 2017/2/25.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
int func(char*);
void input(char str[], int);
bool judge(char);
int main()
{
    char str[201];
    int i;
    int n;
    
    scanf("%d",&n);
    getchar();
    for (i=0; i<n; i++)
    {
        input(str, 201);
        printf("%d\n",func(str));
    }
    return 0;
}

int func(char *str)
{
    int num=0;
    char *p=str;
    while (p[1])
    {
        if (judge(*p)&&!judge(p[1]))
        {
            num++;
        }
        p++;
    }
    if (judge(*p))
        return num+1;
    else
        return num;
}

void input(char str[], int n)
{
    int i;
    char ch;
    for (i=0; i<n; i++)
    {
        ch=getchar();
        if (ch=='\n')
        {
            str[i]='\0';
            return;
        }
        str[i]=ch;
    }
}

bool judge(char ch)
{
    return ('a'<=(ch)&&(ch)<='z')||('A'<=(ch)&&(ch)<='Z');
}
