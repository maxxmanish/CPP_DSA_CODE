#include<iostream>
using namespace std;
// void sum(int n){
//     int sum = 0;
//     int rem =0;
//     for(int i=0;i<=n;i++){
//         rem = n%10;
//         sum +=rem;
//         n /=10;
//     }
//     cout<<sum;
// }
//  void sum1(int n){
//     int sum = 0;
//     int last = 0;
//     while(n!=0){
//         last = n%10;
//         if(last%2==0) sum +=last;
    
//         n /=10;
//     }
//     cout<<sum;
//  }
//  void count_digit(int n){
//     int count = 0;
//     while(n!=0){
//         n /=10;
//         count++;
//     }
//     cout<<count;
//  }
//  void revers(int n){
//     int last =0;
//     int rever = 0;
//     while(n){
//         last = n%10;
//         rever = (rever*10)+last;
//         n /=10;
//     }
//     cout<<rever;
//  }
//  int main(){
//     int n;
//     cout<<"enter n number";
//     cin>>n;
//     revers(n);
// }
 #include<iostream>
 using namespace std;
 

 void print(int n)
{
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
    
    

}
int main(){
int n;
cout<<" enter  the number";
cin>>n;
    print(n);
}