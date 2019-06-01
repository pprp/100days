#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i < n+1 ; i++){
        for(int j = 0 ; j < (n-i)*2; j++){
            printf(" ");
        }
        for(int j = 0 ; j < n-2+2*i ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
