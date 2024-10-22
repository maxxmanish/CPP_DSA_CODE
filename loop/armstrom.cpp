#include<iostream>
using namespace std;
bool arem(int n){
    int last = 0;
    int re = 0;
    int org = n;
    while(n>0){
         
        last = n%10;
        n /=10;
        re = re + (last*last*last);

    }
    if(re==org)  return true;
    else return false;
}
int main(){
int n;
cout<<"enter number";
cin>>n;
cout<<arem(n);
}