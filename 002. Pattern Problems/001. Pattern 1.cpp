#include<iostream>
using namespace std;

void pattern(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
}
int main(){
    int n;cin>>n;
    pattern(n);
}
