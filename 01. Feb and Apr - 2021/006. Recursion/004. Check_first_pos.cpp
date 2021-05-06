#include<iostream>
using namespace std;

void check_ele(int arr[200],int l,int m,int temp){
    if(l==0){
        cout<<temp;return;
    }
    if(arr[l-1]==m){
        temp=l;
    }
    check_ele(arr,l-1,m,temp);
}
int main(){
    int n,arr[200];cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Your array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int m;cin>>m;
    check_ele(arr,n,m,-1);
}

