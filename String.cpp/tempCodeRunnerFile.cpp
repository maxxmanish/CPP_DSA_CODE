#include<iostream>
using namespace std;
void print(string  &name){
    int n = name.length();
    int cnt =0;
    for(int  i=0;i<n;i++){
      if(name[i]=='a' ||name[i]=='e'||name[i]=='i' ||name[i]=='o'||name[i]=='u'){

      }
      else{
        cnt +=1;
      }
    }
    cout<<"total constant is = "<<cnt;
}
int main(){
    string name;
    cout<<"enter your name";
    cin>>name;
    print(name);
}