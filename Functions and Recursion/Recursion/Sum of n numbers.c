// Sum of n numbers using Recursion

#include<stdio.h>

// Function Declaration
int sum(int n);

int main(){
    int i;
    printf("Enter any number! ");
    scanf("%d", &i);
    printf("%d", sum(i));   // Function Call

    return 0;
}

// Function Definition
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);        //  n(5)= 1+2+3+4+5
    int sumN = sumNm1 + n;        //       ------
    return sumN;                  // n(1)= 1
}