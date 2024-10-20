//taking number input from user until enter odd number
#include<iostream>
using namespace std;
int main(){

    int n;
    do{
        cout<<"Enter Number! "<<endl;
        cin>>n;
        cout<<n<<endl;
        if(n%2!=0){
            break;
        }
    } while(1);
    cout<<"Thank You"<<endl;
    return 0;
}