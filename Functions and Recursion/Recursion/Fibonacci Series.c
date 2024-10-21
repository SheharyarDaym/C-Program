// 0,1,1,2,3,5,8,13,21 ...
// Write function to print nth number of Fibonacci Series

#include<stdio.h>

// Funtion Declaration
int fib(int n);

int main(){
    int x;
    printf("Enter number here! ");
    scanf("%d", &x);
    printf("%d", fib(x));       // Call
    
    return 0;
}

// Funciton Definition
int fib(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    // F(n) = F(n-1) + F(n-2)
    int fibNm1 = fib(n-1);  
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    
    return fibN; 
}