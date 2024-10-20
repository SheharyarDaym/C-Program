#include<iostream>
using namespace std;
int main(){
    
    int i,j,sum=0;
    cout<<"Enter any number";
    cin>>j;
    for(i=1; i<=j; i++){
        sum = sum + i;

    }
    cout<<sum;
    return 0;
}