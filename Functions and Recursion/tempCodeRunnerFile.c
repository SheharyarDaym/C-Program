#include<stdio.h>

void v(int x){
       printf("%d", &x);
}

int main(){
    int i=65;
    

    printf("%d\n", &i);
    v(i);
    
    
    return 0;   
}