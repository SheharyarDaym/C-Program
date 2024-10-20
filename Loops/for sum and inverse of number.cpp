#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter";
    cin>>n;
    for(int a=1; a<=n; a++){      
        sum= sum +a;
    }
        cout<<sum<<endl;

    for (int a=n; a>=1; a--){
        cout<<a<<endl;
    }

    return 0;
}