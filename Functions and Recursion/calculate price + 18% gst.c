#include<stdio.h>

// Declaration
void calculatePrice(float value);

int main(){
    float value = 100.00;
    calculatePrice(value);


    return 0;
}

// Definition
void calculatePrice(float value){
    // float value;
    value = value + (0.18 * value);
    printf("The amount is %f", value);
}