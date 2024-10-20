#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    int j;
    cout<<"Enter";
    cin>>n;
    for (int i=1,j=n; i<=n && j>=1; i++,j--){
        sum = sum + i;
        cout<<j<<endl;

    }
    cout<<"Sum is "<<sum<<endl;
    

    return 0;
}