#include<stdio.h>
int main(){
    int i=10;
    int *p,*q;
    p=&i;
    q=p;
    printf("%d\n%d",*p,*q);
    return 0;

}