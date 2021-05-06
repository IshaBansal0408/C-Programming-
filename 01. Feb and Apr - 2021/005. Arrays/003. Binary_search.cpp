#include<bits/stdc++.h>
using namespace std;

int get_pos(int arr[200],int l,int h,int x){
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            h=mid-1;
        else if(arr[mid]<x)
            l=mid+1;
    }
    return -1;
}

int main(){
    int arr[200],n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    int ans= get_pos(arr,0,n-1,x);
    cout<<ans;
}
