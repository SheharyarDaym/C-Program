/*Write a program in C to display the cube of the number up
 to an integer.*/
#include<iostream>
using namespace std;
int main(){

    int i,j;
    cout<<"Enter number! ";
    cin>>j;
    for(i=1; i<=j; i++){
        cout<<"Cube of "<<i<<" is "<<i*i*i<<endl;
    }

    return 0;
}