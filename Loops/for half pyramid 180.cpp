// This program is used to print
/*  *
   **
  ***
 ****
*/
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
           if (j<=5-i)
            cout<<" ";
           else    
                cout<<"*";    // with cout<<"* "; we can see new pattern
        
        }
        cout<<endl;
    }

    return 0;
}
