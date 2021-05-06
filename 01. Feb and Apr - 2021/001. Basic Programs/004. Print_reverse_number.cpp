#include<iostream>
using namespace std;

int reverse_number(int n){
    int cn,r;
    while(n!=0){
        r=n%10;
        cn=cn*10+r;
        n=n/10;
    }
    return int(cn);
}

int main(){
    int n;cin>>n;
    cout<<reverse_number(n);
}
