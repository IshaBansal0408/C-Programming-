#include<iostream>
using namespace std;

void pattern(int n){
    int mid=n/2;
    for(int i=1;i<=n;i++){
        if(i<mid){
            int stars=2*i - 1;
            for (int s=0;s<stars;s++)
                cout<<"*"<<" ";
            cout<<endl;
        }
        else if(i==mid){
            for (int s=0;s<n;s++)
                cout<<"*"<<" ";
            cout<<endl;
        }
        else{
            int stars = n-i+1;
            for (int s=0;s<stars;s++)
                cout<<"*"<<" ";
            cout<<endl;
        }
    }
}
int main(){
    int n;cin>>n;
    pattern(n);
}
