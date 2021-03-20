#include<iostream>
using namespace std;

int decimal_to_octal(int n,int res[200]){
    int i=0;
    while(n>=8){
        res[i]=n%8;
        n=n/8;
        i+=1;
    }
    res[i]=n;
    return i;
}

int main(){
    int d,arr[200];cin>>d;
    int n=decimal_to_octal(d,arr);
    for(int i=n;i>=0;i--)
        cout<<arr[i];
}
