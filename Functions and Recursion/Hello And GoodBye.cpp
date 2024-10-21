#include<iostream>
using namespace std;
void Hello();   // declaration f1
void GoodBye(); // declaration f2

int main(){
    Hello();
    // GoodBye();
    return 0;
}

void Hello(){
    printf("Hello!\n");
}

void GoodBye(){
    printf("GoodBye! ");
}