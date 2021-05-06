#include<iostream>
using namespace std;

bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;cin>>n;
    if(n==1){
        cout<<"Neither Prime nor composite";
    }
    else{
        if(prime(n)==true){
            cout<<"Prime";
        }
        else{
            cout<<"Not Prime";
        }
    }
}
