include<iostream>
using namespace std;
void digit(int n){
    int count =0;
    while(n!=0){
        n /=10;
        count++;
    }
    cout<<"total digite is = "<<count;
}
int main(){
    int n;
    cout<<"enter digite = ";
    cin>>n;
    digit(n);
}