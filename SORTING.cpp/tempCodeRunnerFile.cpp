void selecton(int  arr[],int n){
  int  i = 0;
  int j = n-1;
   
  while(i<j){
   int min = INT_MAX;
   int mindex = 0;
    for(int k=i;k<n;k++){
        if(arr[k]<min){
             min = arr[k];
             mindex = k;
        }
    }
     swap(arr[i],arr[mindex]);
    i++;
  }
  
}