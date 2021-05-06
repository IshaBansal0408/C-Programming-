#include<iostream>
using namespace std;

int nth_fibo(int n){
    if(n==0){
        return 0;
    }
    int a=0,b=1,t;
    for(int i=1;i<n;i++){
        t=a+b;
        a=b;
        b=t;
    }
    return b;
}

int main(){
    int n;cin>>n;
    cout<<nth_fibo(n);
}
