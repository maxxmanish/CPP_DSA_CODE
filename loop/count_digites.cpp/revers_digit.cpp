#include<iostream>
using namespace std;
void revers_digit(int n){
    int last = 0;
    int revers = 0;
    while(n>0){
        revers  = revers*10;
        last = n%10;
        revers +=last;
        n/=10;
    }
    cout<<revers;
}
int main(){
    int  n;
    cout<<"enter digit =";
    cin>>n;
    revers_digit(n);
}