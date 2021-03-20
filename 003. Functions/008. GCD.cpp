#include<iostream>
using namespace std;

int Get_GCD(int a, int b) {
   if (b==0)
   return a;
   return Get_GCD(b,a%b);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int x=Get_GCD(n1,n2);
    cout<<x;
}
