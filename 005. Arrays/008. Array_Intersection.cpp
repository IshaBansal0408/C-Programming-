#include<bits/stdc++.h>
using namespace std;

int* Find_intersection(int arr1[200],int arr2[200],int l){
    int arr3[200],k=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(arr1[i]==arr2[j]){
                arr3[k]=arr1[i];
                k++;
            }
        }
    }
    return arr3;
}

int main(){
    int arr1[200],n,arr2[200];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<endl;
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    int *p=Find_intersection(arr1,arr2,n);
    for ( int i = 0; i < 2; i++ ) {
          cout << "*(p + " << i << ") : ";
          cout << *(p + i) << endl;
       }
}


