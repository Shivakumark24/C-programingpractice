#include<stdio.h>
int main(){
    char ch;
    printf("enter a charector");
    scanf("%c",&ch);
    if(ch=='a'|ch=='e'|ch=='i'|ch=='o'|ch=='u'|ch=='A'|ch=='E'|ch=='I'|ch=='O'|ch=='U'){
        printf("the entered charector is vowel\n");

    }
    else{
        printf("the enterd charector is consonent\n");
    }
return 0;
}