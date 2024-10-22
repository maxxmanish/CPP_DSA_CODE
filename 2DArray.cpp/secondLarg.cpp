// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10000];
//     int n;
//     int  M = INT_MIN;
//     cout<<"enter the size";
//     cin>>n;
//     cout<<"enter the element";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     for(int i=0;i<n;i++){
//       if(arr[i]>M) M = arr[i];  
//     }
//     cout<<"the largest number is = "<<M<<endl;
//     int h = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=M && arr[i]>h) h = arr[i];
//     }
//     cout<<" second large = "<<h;

// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>  v(5);
  for(int i=0;i<5;i++){
    cin>>v[i];
  }
sort(v.rbegin(),v.rend());
for(int i=0;i<5;i++){
  cout<<v[i]<<" ";
}

}