#include<bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[200],int l){
    int i,j;
    for(i=0;i<l-1;i++){
        int min_indx=i;
        for(j=i+1;j<l;j++){
            if(arr[j]<arr[min_indx])
                min_indx=j;
        }
        swap(arr[i],arr[min_indx]);
    }
}

int main(){
    int arr[200],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Selection_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

