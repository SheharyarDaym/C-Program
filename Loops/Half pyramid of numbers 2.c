// This program prints
// 1
// 22
// 333
// 4444
// 55555

#include<stdio.h>
int main(){
    int i,j,count;
    for (i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d", count);
            count++;

            // printf("\n");
        }
        printf("\n");
    }

    return 0;
}