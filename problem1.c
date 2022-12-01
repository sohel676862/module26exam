#include<stdio.h>
int main(){
   float a,b;
    float *p1,*p2;
    scanf("%f%f",&a,&b);
    p1=&a;
    p2=&b;
    float avatrage=(*p1+*p2)/2;
    printf("%.3f",avatrage);
}
