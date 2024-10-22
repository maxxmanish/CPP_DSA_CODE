#include<iostream>
using namespace std;
int main(){
    // 11001101
    int arr[] = {1,1,0,0,1,1,0,1};
    int n = sizeof(arr)/4;
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i +=1;
            j -=1;
        }
        else if(arr[i]==1) i +=1;
        else j -=1;
    }
}