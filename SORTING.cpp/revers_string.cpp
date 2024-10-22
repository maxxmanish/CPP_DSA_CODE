// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
// string name = "manish";
// string str = "";
// int n = name.size();
// for(int i=n;i>=0;i--){
//   str.push_back(name[i]);
// }
// for(int i=0;i<=n;i++){
//  cout<<str[i]<<" ";
// }
// }


#include<iostream>
// #include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string name = "AADXXXSYYZZZ";
    string str = "";
    
    for(int i=0;i<name.size();i++){
        if(name[i]>='X'){
            str.push_back(name[i]);
        }
    }
    
    int n = str.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<str;
}

