// Function to find square root of a number.

#include<stdio.h>
#include<math.h>

// Function declaration
double my_sqrt(double x);

int main(){
    int n;
    printf("Enter number! ");
    scanf("%d", &n);
    printf("%lf", my_sqrt(n));      // Funtion Call

    return 0;
}

// Definiton
double my_sqrt(double x){
    double square_root = sqrt(x);
    return square_root;
}