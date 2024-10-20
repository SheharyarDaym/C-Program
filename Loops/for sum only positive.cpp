#include<iostream>
using namespace std;
int main(){

    int a,n,sum=0;
    cout<<"Enter";
    cin>>n;
    for(a=1; a<=n; a++) {
         if(a>=1){
            sum = sum + a;            
         }
    }
    cout<<"Sum is "<<sum<<endl;

    return 0;
}