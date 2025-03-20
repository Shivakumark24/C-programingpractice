#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a,b&c\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if(a>c){
            printf("%d is gratest amoung three number\n",a);
        }
      }
      else if(b>c){
        printf("%d is gretest amoung thre number\n",b);
      }
      else{
        printf("%d is greatest number\n",c);
      }
    }