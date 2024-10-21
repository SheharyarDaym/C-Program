// Write a function that prints Asslamualikum if user is Pakistani and
// Bonjour if user is French

#include<stdio.h>
// declaration
void Pakistani(); //
void French();

int main(){
    char ch;
    printf("Enter p for Pakistani & f for French: ");
    scanf("%c", &ch);
    if(ch=='p'){
        Pakistani();   // call
    }
    else if (ch=='f'){
        French();   // call
    }
    else{
        printf("Enter wrong character! ");
    }
    return 0;
}
// Function definition
void Pakistani(){
    printf("Asslamualikum!\n ");
}
void French(){
    printf("Bonjour! ");
}
