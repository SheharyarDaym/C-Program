#include<stdio.h>
#include<math.h>

// Function Declaration
int square(int x);

int main(){
    int n;
    printf("Enter here! ");
    scanf("%d", &n);
    square(n);          // Function Call

    return 0;
}

// Function Definition
int square(int x){
    double sqrt;
    sqrt = pow(x,2);
    printf("%lf", sqrt);
    return 0;
}