// pocket money and go outside
#include<iostream>
using namespace std;
int main(){
   int date,pocket_money=600;
   for (date=1; date<=30; date++){
    if(date%2==0){
        continue;
    }
    if(pocket_money==0){
        break;
    }
    cout<<"Go out today"<<date<<endl;
    pocket_money = pocket_money - 300;
   }
   
  

    return 0;
}