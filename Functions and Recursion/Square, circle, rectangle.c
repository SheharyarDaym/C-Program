// Write a funtion to find Area of square, circle, rectangle.

#include<stdio.h>

// Function Declaration
int squareArea(float side);
int circleArea(float rad);
int rectangleArea(float x, float y);

int main(){

    int n=4;
    printf("%d", squareArea(n));
    return 0;
}


// Function Definition
int squareArea(float side){
    return side * side;
}

int circleArea(float rad){
    return 3.14 * rad * rad;
}

int rectangleArea(float x, float y){
    return x*y;
}