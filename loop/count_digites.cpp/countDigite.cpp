// #include<iostream>
// using namespace std;
// void digit(int n){
//     int count=0;
//   for(int i=0;i<=n;i++)
// {
// if(n==0){

//     break;
// }
// else{
//     n = n/10;
//    count +=1;
// }

// }
// cout<<"the total  is = "<<count;
// }
// int main(){
//     int n;
//     cout<<"enter digites = ";
//     cin>>n;
//     digit(n);
// }


#include<iostream>
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