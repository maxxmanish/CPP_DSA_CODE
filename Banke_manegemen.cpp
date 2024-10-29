#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class banke_manegment{
     string name;
    string last;
    double balance;
    public:
   
    void open_acount(){
        string name1;
        string last1;
        cout<<"enter your name = ";
        cin>>name1,
        this->name = name1;
        cout<<"enter your last name =";
        cin>>last1;
        this->last = last1;
         
        
        this->name = name1;
        float balan;
        cout<<" enter your balance ";
        cin>>balan;
        this->balance = balan;

    }
    void check_balance(){
        if(balance==0){
            cout<<"your current balance is empty "<<balance<<endl;
        }
        else{
            cout<<"your current balance is ="<<balance<<endl;
        }
        
    }
    void deposite(){
        float amount;
        cout<<"enter how much money you want to deposite";
        cin>>amount;
        if(balance == 0){
            balance += amount;
            cout<<"now you have some money "<<amount;
        }
        else{
            balance += balance;
        }
        
    }
    void withdraw(){
        float value;
        cout<<"enter how much money you want to withdraw";
        cin>>value;
        if(balance == 0){
            cout<<"you dont have that money for withdraw = "<<balance<<endl;
        }
        else if(balance<value){
             cout<<" you dont have  that much money  for withdraw  = "<<balance<<endl;
        
        }
        else if(balance>value){
         balance = balance-value; 
    }
    }
    banke_manegment(){
        cout<<" Welcome to my first programe banke manegment project"<<endl;
  int num;
  cout<<"                        !! guid line of banke!!          "<<endl;
  cout<<"for open acount press 1"<<endl;
  cout<<"for check the balance press 2"<<endl;
  cout<<"for deposite the money press 3 "<<endl;
  cout<<"for withdraw press 4"<<endl;
  cin>>num;
  switch (num){
    case 1:
    open_acount();
    break;
    case 2:
    check_balance();
    break;
    case 3:
    deposite();
    break;
    case 4:
    withdraw();
    break;
    default:
    cout<<"invalide number";
    break;


  }
     reapite();


    }
    void reapite(){

int num;
//   cout<<"for open acount press 1"<<endl
  cout<<"for check the balance press 2"<<endl;
  cout<<"for deposite the money press 3 "<<endl;
  cout<<"for withdraw press 4"<<endl;
  cin>>num;
    switch (num){
 
    case 2:
    check_balance();
    break;
    case 3:
    deposite();
    break;
    case 4:
    withdraw();
    break;
    default:
    cout<<"invalide number";
    break;

    }
    reapite();
    }
    //  


    
   

};

int main(){
   banke_manegment user1;

}
