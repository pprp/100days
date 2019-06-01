#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int maxn = 1000;


struct stu{
    int stuno;
    int score;
};

stu arr[maxn];

bool cmp(stu s1, stu s2){
    if(s1.score != s2.score)
        return s1.score < s2.score;
    else
        return s1.stuno < s2.stuno;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d%d",&arr[i].stuno,&arr[i].score);
    }
    sort(arr,arr+n,cmp);
    for(int i = 0 ; i < n ; i++){
        printf("%d %d\n",arr[i].stuno,arr[i].score);
    }

    return 0;
}
