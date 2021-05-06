#include<iostream>
using namespace std;

bool check_arms(int n){
    int cn=n,cn1=0;
    while(n!=0){
        int d=n%10;
        cn1+=d*d*d;
        n=n/10;
    }
    if(cn1==cn)
        return true;
    else
        return false;
}

int main(){
    int n;cin>>n;
    if(check_arms(n))
        cout<<"True";
    else
        cout<<"False";
}
