#include<iostream>        
using namespace std;
// void pattern(){
//     for(int i=0;i<=4;i++){
//     for(int j=0;j<4;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

void patternr(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern1(int n){

    int a = 4;
    for(int i=0;i<n;i++){
      for(int j=0;j<=n-i-1;j++){
        cout<<"*";
      }
      cout<<endl;
}
}

void pattern2(int n){
    for(int i=0;i<=n;i++){
        // space
for(int j=0;j<n-i;j++){
    cout<<" ";
}
        // sta
        for(int k=0;k<(2*i-1);k++){
            cout<<"* ";
        }

        // space
        for(int s =0;s<n-i;s++){
            cout<<" ";
        }
        cout<<endl;
    }
    

}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    patternr(n);
    pattern1(n);
}