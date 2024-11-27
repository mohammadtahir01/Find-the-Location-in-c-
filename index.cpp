#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the Location:";
    cin>>n;
    if(n == 1){
        cout<<"Choose your destination:";
        cin>>n;
        if(n == 2){
            cout<<"Enter destination:";
            cin>>n;
             if(n == 3){
                cout<<"reached";
            }else{
                cout<<"input wrong";
            }
        }
    }
    else if(n==3){
        cout<<"reached";
       
    }else{
        cout<<"wrong";
    }
} 