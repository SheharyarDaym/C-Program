// Prime number in range.
#include<stdio.h>
int main(){
    int a;
    printf("Enter number here!  ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
         if(i==2 || i==3 || i==5 || i==7 ){
            printf("\nPrime Number! ");
        }
        else if(i%2==0 || i%3==0 || i%5==0 || i%7==0 || i==1 ){   

            // printf("\nNot prime number! ");
            continue;
        }
         else{
            printf("\nPrime NUmber! ");
        }
        printf("%d", i);
    }

    return 0;
}