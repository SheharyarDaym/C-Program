// Write a function to calculate force of attraction on body of mass m exerted by
// Earth. (g=9.8 m/s2)

#include<stdio.h>
int main(){
    double F,g=9.8,G,m1,m2;
    printf("Enter value of G,m1,m2 : ");
    scanf("%lf%lf%lf", &G,&m1,&m2);
    F = (G*m1*m2)/g;
    printf("%lf", F); 

    return 0;
}
//Fg=Gm1m2