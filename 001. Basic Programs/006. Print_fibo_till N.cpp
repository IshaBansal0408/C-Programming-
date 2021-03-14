#include<iostream>
using namespace std;

void nth_fibo(int n){
    cout<<0<<" ";
    int a=0,b=1,t;
    for(int i=1;i<n;i++){
        cout<<b<<" ";
        t=a+b;
        a=b;
        b=t;
    }
}

int main(){
    int n;cin>>n;
    nth_fibo(n);
}
