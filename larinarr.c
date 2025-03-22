#include<stdio.h>
int main(){
    int arr[]={1,4,55,6,7};
    int large=arr[0];
    for(int i=0;i<=4;i++){
        if(arr[i]>large){
            large=arr[i];
        }

    }
    printf("%d",large);
    return 0;
}