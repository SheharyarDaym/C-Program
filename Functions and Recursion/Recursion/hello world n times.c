#include<stdio.h>
// Declaration
void printHW(int count);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printHW(n);     // call

    return 0;
}

// recursive function
void printHW(int count){
    if (count==0){
        return;
    }
    printf("Hello World!\n");
    printHW(count-1);
}