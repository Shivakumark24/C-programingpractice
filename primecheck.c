#include<stdio.h>
#include<math.h>
int main(){
int num,is_prime=1;
scanf("%d",&num);
if (num<=1){
    printf("%d is not aprime number",num);
    return 0;
}
for(int i=2;i*i<=num;i++){
    if(num%i==0){
        is_prime=0;
        break;
    }
}
if(is_prime){
    printf("%d is a prime number",num);
}
   else{
    printf("%d is not a prime number",num);
   }
return 0;
}
