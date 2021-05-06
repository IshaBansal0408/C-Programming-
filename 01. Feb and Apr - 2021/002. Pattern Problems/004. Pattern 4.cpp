#include<iostream>
using namespace std;

void space1(int cur, int mid,int n1){
    int val;
    if(cur==mid){
        val=0;
    }
    else{
        val=(abs(mid-cur));
    }
    for(int i=0;i<val;i++){
        cout<<" ";
    }
}
void stars(int cur,int mid,int n1){
    int val;
    if(cur<mid){
        val=2*cur+1;
    }
    else if(cur==mid){
        val=n1;
    }
    else{
        val=n1-cur;
    }
    for(int i=0;i<val;i++){
        cout<<"*";
    }
}
void space2(int cur, int mid,int n1){
    int val;
    if(cur==mid){
        val=0;
    }
    else{
        val=(abs(mid-cur));
    }
    for(int i=0;i<val;i++){
        cout<<" ";
    }
}
void pattern(int n){
    int mid=n/2;
    for(int i=0;i<n;i++){
            int x=i;
            if(i>mid){
                x=n-(x+1);
            }
            space1(x,mid,n);
            stars(x,mid,n);
            space2(x,mid,n);
            cout<<endl;
    }
}
int main(){
    int n;cin>>n;
    pattern(n);
}
