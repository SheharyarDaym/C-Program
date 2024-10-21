// Write a function to calculate percentage of a student from marks in science, math, urdu.

#include<stdio.h>

// Function Declaration
int Subjects(int science, int math, int urdu);

// Main Function
int main(){
    int science, math, urdu;
    printf("Enter Marks here! ");
    scanf("%d%d%d", &science, &math, &urdu);
    printf("%d", Subjects(science, math, urdu));

    return 0;
}

// Function Definition
int Subjects(int science, int math, int urdu){
    return (science + math + urdu)/3;
}