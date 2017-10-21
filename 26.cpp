//
//  main.c
//  26
//
//  Created by Ju Yuanmao on 2017/2/22.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef struct{
    int x;
    int h;
}object;
object ob[MAX];
inline bool cmp(object, object);
bool cmp(object A, object B)
{
    return A.x<B.x;
}
int main()
{
    int n,t,a,i,ans;
    double tanAn,hight,maxHight;
    while (scanf("%d",&n)==1 && n!=0)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d",&ob[i].x);
            scanf("%d",&ob[i].h);
        }
        scanf("%d%*c%d",&t,&a);
        tanAn=(double)t/a;
        sort(ob, ob+n, cmp);
        maxHight=0;
        ans=n;
        for (i=0; i<n; i++)
        {
            hight=ob[i].x*tanAn+ob[i].h;
            if (maxHight<hight)
                maxHight=hight;
            else
                ans--;
        }
        cout << ans << endl;
    }
    return 0;
}
