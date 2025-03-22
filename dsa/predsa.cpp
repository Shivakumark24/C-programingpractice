// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cout<<"enter the value of a and b"<<endl;
//   cin>>a>>b;
//     int sum=a+b;
//     cout<<"the sum of a and b is "<<sum<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     if(num==0){
//         cout<<"the entred number is zero"<<endl;
//     }
//     else if(num>0){
//         cout<<"the entered num is positive"<<endl;
//     }
//     else{
//         cout<<"the entred num is negetiv"<<endl;
//     }
// }
//swaping without using third variable

// #include<iostream>
// using namespace std;
// int main(){
//     int a=2;
//     int b=4;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"a="<<a<<endl<<"b="<<b<<endl;
// return 0;
// }
// largest of three
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>b&&a>c){
//         cout<<"largest of 3 is "<<a<<endl;
//     }
//     else if(b>a&&b>>c){
//         cout<<"the largest num is "<<b<<endl;
//     }
//     else{
//         cout<<"tre largest num is "<<c<<endl;
//  
// #include<iostream>  
// using namespace std;
// int main(){
//  for(int i=0;i<=10;i++){
//     cout<<i<<endl;
//  }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num,sum=0;
//     cout<<"enter the number"<<endl;
//     cin>>num;
//     for(int i=0;i<=num;i++){
//         sum+=i;
//     }
//     cout<<"the sum of natural num "<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter the number for multiplication table";
//     cin>>num;
//     for(int i=1;i<=10;i++){
//        int mul=num*i;
//         cout<<num<<"*"<<i<<"="<<mul<<endl;
   
// }
// return 0;
// }
//factorial
// #include<iostream>
// using namespace std;
// int main(){
//     int num,fact=1;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         fact*=i;
//     }
//     cout<<fact<<endl;
    
// }
#include<iostream>
using namespace std;
int main(){
    int num;
    bool isprime=true;
    cin>>num;
    if(num==0||num==1){
        cout<<"not a prime number";
    return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            isprime=false;
            break;
        } }
    if(isprime){
      cout<<num <<"is a prime number";
    }
    else{ 
       cout<<num<<"is not a prime number";
        }
    }

