//print all odd numbers from 5 to 50
#include<iostream>
using namespace std;
int main(){
    int n;
    for(n=5; n<=50; n++){
        if(n%2==0){
            continue;
        }
        cout<<n<<endl;
    }
    return 0;
}