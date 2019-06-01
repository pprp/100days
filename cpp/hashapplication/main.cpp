#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
const int maxn = 1000;

int hash[maxn];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n != 0){
        for(int i = 0 ; i < maxn ; i++){
            hash[i] = 0;
        }
        for(int i = 0 ; i < n ; i++){
            int tmp = 0;
            scanf("%d",&tmp);
            hash[tmp]++;
        }
        int tmp2 = 0;
        scanf("%d",&tmp2);
        printf("%d\n",hash[tmp2]);
    }
    return 0;
}
