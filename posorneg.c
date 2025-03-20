#include<stdio.h>
int main(){
int num;
printf("enter the number");
scanf("%d",&num);
if(num==0){
    printf("the enterd number is zero");
}
else if(num>0){
    printf("the entered number is positve");
}
else{
    printf("the enterd numbeer is negetive");
}
return 0;
}