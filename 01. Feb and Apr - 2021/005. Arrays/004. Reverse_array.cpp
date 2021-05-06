#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[200],int l,int arr1[200]){
    for(int i=l-1,j=0;i>=0;i--,j++){
        arr1[j]=arr[i];
    }
}

int main(){
    int arr[200],n,arr1[200];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse_array(arr,n,arr1);
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
}

