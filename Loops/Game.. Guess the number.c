#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, n;
    
    srand(time(0));
    n = rand()%100+1;
    printf("%d",n);

    do{
    printf("Enter number less than 100! ");
    scanf("%d", &number);
    
    if(n<number){
        printf("Too Large! ");
    }
    if(n>number){
        printf("Too Small! ");
    }
    if(n==number){
        printf("Correct! ");
    }

    }while(number!=n);
    return 0;
}