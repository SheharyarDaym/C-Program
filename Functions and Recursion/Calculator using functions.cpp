#include<iostream>
using namespace std;

// Function Declaration
int sum(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int division(int x, int y);
void wrong();

int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
   
    cout<<"Enter value of b: ";
    cin>>b;

    char op;
    cout<<"Enter operator here: ";
    cin>>op;


    switch(op){
        case '+' :
            sum(a,b);               // Function call
            sum = a+b;
            printf("%d", sum);
            
            break;
        case '-' :
            difference(a,b);
            break;
        case '*' :
            product(a,b);
            break;
        case '/' :
            division(a,b);
            break;
        default:
            wrong();
            break;


    }

    return 0;
}

// Function Definition
int sum(int x, int y){
    cout<<x+y;
    return 0;
}

int difference(int x, int y){
    cout<<x-y;
    return 0;
}

int product(int x, int y){
    cout<<x*y;
    return 0;
}
int division(int x, int y){
    cout<<x/y;
    return 0;
}

void wrong(){
    printf("Choose from +-*/");
}