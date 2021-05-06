#include<iostream>
using namespace std;

int cal(int x,int n){
    int r=1;
    for(int i=1;i<=n;i++)
        r*=x;
    return r;
}
int main(){
    int x,n;cin>>x>>n;
    int y=cal(x,n);
    cout<<y;
}
