#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){
    int d;
    d=n-1;
    while(d>1){
        if(n%d==0){
            return false;
        }
        d--;
    }
    if(d==1){
        return true;
    }
 
}

int main(){
    int n=2, count=1, var;

    while(count<=5){
        
        var=isPrime(n);
        if(var==true){
            printf(" %d ", n);
            count++;
        }
        n++;
        
    }
    



    return 0;
}