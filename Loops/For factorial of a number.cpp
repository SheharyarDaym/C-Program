#include<iostream>
using namespace std;
int main(){
    int i,j,factorial=1;
    cout<<"Enter any number! ";
    cin>>j;
    for(i=1; i<=j; i++){
        factorial = factorial * i;
    }
    cout<<"Factorial of "<<j<<" is = "<<factorial;


    return 0;
}