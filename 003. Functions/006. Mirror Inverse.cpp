#include<iostream>
using namespace std;

int reverse_no(int n,int *cn){
    int i=0;
    while(n!=0){
        int d=n%10;
        *cn=*cn*10+d;
        n=n/10;
        i+=1;
    }
    return i;
}
void get_inverse(int x,int n,int arr[200]){
    int i=n-1;
    while(i>=0){
        int d=x%10;
        // d is at i+1 position : i+1 is at d-1 position
        arr[d-1]=i+1;
        x=x/10;
        i-=1;
    }
}
int main(){
    int n;
    cin>>n;
    int cn=0;
    int no=reverse_no(n,&cn),arr[200];
    get_inverse(cn,no,arr);
    int fn=0;
    for(int i=0;i<no;i++)
        fn = fn*10+arr[i];
    int dn=0;
    int x=reverse_no(fn,&dn);
    if(dn==cn)
        cout<<"True";
    else
        cout<<"False";
}
