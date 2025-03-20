#include<stdio.h>
void multi(char name[],int age){
    printf("hello my name is %s and i am %d year old",name,age);
}
int main(){
    char name[50];
    int age;
    printf("enter  the name and age ");
    scanf("%s %d",name,&age);
    multi(name,age);
}