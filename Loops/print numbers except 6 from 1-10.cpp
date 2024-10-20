//print all numbers except 6
#include<iostream>
using namespace std;
int main(){

    int n;
    for(n=1; n<=10; n++){
        if(n==6)
        continue;
        cout<<n<<endl;
    }
    
    return 0;
}