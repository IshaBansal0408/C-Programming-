#include<bits/stdc++.h>
using namespace std;

int get_max(int arr[200],int l){
    int temp=arr[0];
    for(int i=1;i<l;i++){
        if(temp<arr[i])
            temp=arr[i];
    }
    return temp;
}

int main(){
    int arr[200],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans= get_max(arr,n);
    cout<<ans;
}
