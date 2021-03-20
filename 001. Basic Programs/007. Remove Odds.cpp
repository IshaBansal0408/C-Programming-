#include<iostream>
using namespace std;

int remove_odd(int arr[200],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(i+1%2==0){
            arr2[j]=arr[i];
        }
        j+=1;
    }
    return j;
}
int main(){
    int n,arr[200],arr2[200];
    cin>>n;
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    cout<<endl<<"Original Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int x=n;
    while(x!=1){
        x=remove_odd(arr,n);
        cout<<endl<<"Current Array:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"Captain is :"<<arr[0];
}
