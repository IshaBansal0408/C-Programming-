#include<bits/stdc++.h>
using namespace std;

int get_pos(int arr[200],int l,int x){
    for(int i=0;i<l;i++){
        if(arr[i]==x)
            return i;
    }
    return -1;
}

int main(){
    int arr[200],n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    int ans= get_pos(arr,n,x);
    cout<<ans;
}
