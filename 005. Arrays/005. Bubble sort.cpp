#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[200],int l){
    int flag;
    for(int j=0;j<l;j++){
        flag=0;
        for(int i=0;i<l-i+1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag=1;
            }
        }
        if(!flag){
            return;
        }
    }
}

int main(){
    int arr[200],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Bubble_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
