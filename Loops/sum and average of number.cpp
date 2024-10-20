#include<iostream>
using namespace std;
int main(){

    int a,n,sum=0; float  average;
    cout<<"Enter number";
    // cin>>n;
    for(a=1; a<=10; a++){
        sum += a;
    }
    cout<<sum<<endl;
    average = sum/10;
    cout<<"Average = "<< average<< endl;

    return 0;
}