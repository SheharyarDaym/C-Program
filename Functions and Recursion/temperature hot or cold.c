// Write a Function either the temperature is hot or cold.

#include<stdio.h>

// Declaration
void temp(int x);

int main(){
    int n;
    printf("Enter temperature! ");
    scanf("%d", &n);
    temp(n);        //Call

    return 0;
}

// Definition
void temp(int x){
    if(x<=20){
        printf("Cold Weather! ");
    } else{
        printf("Hot weather");
    }
}