//
//  main.cpp
//  521
//
//  Created by Ju Yuanmao on 2017/5/29.
//  Copyright © 2017年 Ju Yuanmao. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
using namespace std;
void cheak(int&,int&);
void output(int);

const char table[11][16] = {"+-+| |+ +| |+-+","  +  |  +  |  +","+-+  |+-+|  +-+","+-+  |+-+  |+-+","+ +| |+-+  |  +","+-+|  +-+  |+-+","+-+|  +-+| |+-+","+-+  |  +  |  +","+-+| |+-+| |+-+","+-+| |+-+  |+-+","               "};
void cheak(int&a, int&b) {
    vector<vector<char>> v;
    char ch0, ch1, ch2, mark;
    int i, j, n;
    do {
        scanf("%c%c%c%c",&ch0,&ch1,&ch2,&mark);
        v.push_back(vector<char>{ch0,ch1,ch2});
    } while (mark != '\n');
    n = (int)v.size();
    for (i=1; i<5; i++) {
        for (j=0; j<n; j++) {
            scanf("%c%c%c%*c",&ch0,&ch1,&ch2);
            v[j].push_back(ch0);
            v[j].push_back(ch1);
            v[j].push_back(ch2);
        }
    }
    for (i=0; i<n; i++) {
        v[i].push_back('\0');
    }
    a = b = 0;
    mark = 'a';
    for (i=0; i<n; i++) {
        for (j=0; j<=10; j++) {
            if (strcmp(&v[i][0], table[j]) == 0) {
                break;
            }
        }
        if (j == 10) {
            mark++;
            continue;
        }
        if (mark == 'a') {
            a = a*10+j;
        }else {
            b = b*10+j;
        }
    }
}
void output(int x) {
    deque<int> dq;
    int i, j, k, n, b;
    do {
        dq.push_front(x%10);
        x /= 10;
    } while (x != 0);
    n=(int)dq.size();
    for (i=0; i<5; i++) {
        for (j=0; j<n; j++) {
            b = dq.front();
            dq.pop_front();
            for (k=0; k<3; k++) {
                printf("%c",table[b][i*3+k]);
            }
            if (j < n-1) {
                printf(" ");
            }else{
                printf("\n");
            }
            dq.push_back(b);
        }
    }
}
int main(int argc, const char * argv[]) {
    int a,b;
    cheak(a, b);
    output(a+b);
    return 0;
}
