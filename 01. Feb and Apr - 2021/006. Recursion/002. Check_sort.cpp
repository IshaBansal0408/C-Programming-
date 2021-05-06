#include<iostream>
using namespace std;

void check_sort(int arr[200],int l){
    if(l==1 || l==0){
        cout<<"True";return;
    }
    if(arr[l-1]<arr[l-2]){
        cout<<"False";return;
    }
    check_sort(arr,l-1);
}
int main(){
    int n,arr[200];cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Your array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    check_sort(arr,n);
}
