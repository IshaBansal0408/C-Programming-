#include<iostream>
using namespace std;

void Reverse_array(int arr[200],int l,int brr[200],int x){
    if(l==0){
        brr[x]=arr[l-1];
        return;
    }
    brr[x]=arr[l-1];
    Reverse_array(arr,l-1,brr,x+1);

}
int main(){
    int n,arr[200],brr[200];cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Your array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    Reverse_array(arr,n,brr,0);
    cout<<"Your array is: ";
    for(int i=0;i<n;i++)
        cout<<brr[i]<<" ";
    cout<<endl;
}

