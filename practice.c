// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter the age");
//     scanf("%d",&age);
//     printf("the entered age is %d\n",age);
//     return 0;
// }
#include<stdio.h>
// int main(){
//    int  a=2;
//    float b =a;
//    printf("%.2f",b);
// // }
// int main(){
//     float a=2.5;
//     int b=(int)a;
//     printf("%d",b);
//     return 0;
// // }
// int main(){
//     int a=2,b=4;
//     int min=(a<b)?a:b;
//     printf("%d",min);
// }
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int max=(a>b)?a:b;
//     printf("%d",max);
// }
int main(){
    int num;
    printf("enter the number between 1 to 3");
    scanf("%d",&num);
    switch(num){
        case 1:
         printf("you have chosen the number one");
         break;
         case 2:
         printf("you have chooen number 2");
         case 3:
         printf("you have chosen number 3");
    }
}
