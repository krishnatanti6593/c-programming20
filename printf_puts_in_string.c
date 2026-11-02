#include<stdio.h>
int main(){
    char name[15];
    printf("enter the name");
    scanf("%s",name);
    printf("%.5s",name);
    printf("%10.5s",name);
    puts(name);
    puts(name);
    return 0;
}