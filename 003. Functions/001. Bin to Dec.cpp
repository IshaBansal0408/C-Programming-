#include<iostream>
#include<math.h>
using namespace std;

int binary_to_decimal(int n){
    int i=0,res=0,d;
    while(n!=0){
        d=n%10;
        res+=d*pow(2,i);
        n=n/10;
        i+=1;
    }
    return res;
}

int main(){
    int b;cin>>b;
    int x = binary_to_decimal(b);
    cout<<x;
}
