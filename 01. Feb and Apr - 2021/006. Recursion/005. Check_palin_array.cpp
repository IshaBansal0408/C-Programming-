#include<iostream>
using namespace std;

void check_palin(int arr[200],int endi,int start){
    if(endi=0){
        cout<<"True";return;
    }
    if(arr[start]!=arr[endi]){
        cout<<"False";return;
    }
    cout<<start<<" "<<arr[start]<<" "<<endi-1<<" "<<arr[endi]<<endl;
    check_palin(arr,endi-1,start+1);
}
int main(){
    int n,arr[200];cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Your array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"index  ele  index  ele"<<endl;
    check_palin(arr,n-1,0);
}

