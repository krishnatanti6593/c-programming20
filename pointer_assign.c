#include<stdio.h>
int main(){
    int a=5;
    int *p;
    p=&a;
    printf("pointer varilabe p holding address of a is%u\n",p);
    printf("address of a variable a is %u\n",&a);
    printf("value of a is %d",*p);
    return 0;
}