// #include<iostream>
// using namespace std;
// void digit_sum(int n){
//     int rem = 0;
//     int  sum =0;

//     for(int i=0;i<=n;i++){
//         if(n!=0){
//             rem = n%10;
//             sum = sum+rem;
//             n /=10;
         
//         }
//     }
//     cout<<sum;
// }
// int main(){
//     int n;
//     cout<<"enter digits for sum";
//     cin>>n;
//     digit_sum(n);
// }

#include<iostream>
using  namespace std;
void sum_digit(int n){
int rem = 0;
int sum = 0;
while(n>0){
    rem = n%10;
    sum +=rem;
    n /=10;
}
cout<<"the sum of digit is ="<<sum;
}
int main(){
    int n;
    cout<<"enter the digit =";
    cin>>n;
    sum_digit(n);
}