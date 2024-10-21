//Write a Function to convert Celsius to Fahrenheit 
#include<stdio.h>

// Function Declaration
float ConvertFar(float cel);

//Main Function
int main(){
    float cel;
    printf("Enter Temperature here! ");
    scanf("%f", &cel);
    printf("%f", ConvertFar(cel));    //Fucntion Call

    return 0;
}

// Function Definition
float ConvertFar(float cel){
    float far = (9.0/5.0) * cel + 32;       // Formula
    return far;
}