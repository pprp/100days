#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;
const int maxn = 1e5+100;
int arr[maxn];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int tmax = -1e9;
        int tmin = 1e9;
        for(int i = 0 ; i < n ; i++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp<tmin){
                tmin = tmp;
            }
            if(tmp>tmax){
                tmax = tmp;
            }
        }
        printf("%d %d\n",tmax,tmin);
    }
    return 0;
}
