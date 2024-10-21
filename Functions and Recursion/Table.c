#include<stdio.h>
// Declaration
int Table(int n);

int main(){
    int n;
    printf("Enter number! ");
    scanf("%i", &n);    // %i is also format specifier of int.
    Table(n);   // argument or actual parameter. "FUNCTION CALL"
    return 0;
}

// Defination
int Table(int n){    // parameter or formal parameter.
    for(int b=1; b<=10; b++){
        printf("%d * %d = %d\n", n, b, n*b);
    }

}