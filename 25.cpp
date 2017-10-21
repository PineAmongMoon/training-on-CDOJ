//
//  main.c
//  25
//
//  Created by Ju Yuanmao on 2017/4/29.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int judge(char str[]);
int main(int argc, const char * argv[]) {
    int n,time=3,i,score;
    char str[105];
    while (scanf("%d%*c",&n) && n)
    {
        if (time==3)
        {
            printf("1 2 3 Score\n");
        }
        else
        {
            printf("1 2 3 4 5 Score\n");
        }
        for (i = 0, score = 0; i<time; i++)
        {
            gets(str);
            if (judge(str))
            {
                printf("O ");
                score++;
            }
            else
                printf("X ");
        }
        printf("%d\n",score);
        for (i = 0, score = 0; i<n-time; i++)
        {
            gets(str);
            if (judge(str))
            {
                printf("O ");
                score++;
            }
            else
                printf("X ");
        }
        for (i=0; i<2*time-n; i++) {
            printf("- ");
        }
        printf("%d\n",score);
        if (time==3) {
            time=5;
        }
    }
    return 0;
}

int judge(char str[])
{
    const int len=(int)strlen(str);
    if (len >= 8)
    {
        if (str[len-8]==' ' &&
            str[len-7]=='n' &&
            str[len-6]=='o' &&
            str[len-5]==' ')
        {
            return 1;
        }
        else
            return 0;
    }
    else
        return 1;
}
