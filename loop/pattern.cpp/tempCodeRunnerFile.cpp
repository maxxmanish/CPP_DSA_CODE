 for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 

        for(int j =0;j<(2*i+1);j++){
            cout<<"*";
        }

        for(int k=0;k<=n-i-1;k++){
            cout<<" ";
        }
        cout<<endl;
    }