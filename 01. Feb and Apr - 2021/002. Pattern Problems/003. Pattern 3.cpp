#include<iostream>
using namespace std;

void pattern(int n){
    int a=0,b=1,t;
    cout<<a<<endl;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<b<<" ";
            t=a+b;
            a=b;
            b=t;
        }
        cout<<endl;
    }
}
int main(){
    int n;cin>>n;
    pattern(n);
}

