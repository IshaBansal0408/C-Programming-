#include<iostream>
using namespace std;

int get_nth(int n){
    if(n==1){
        return 1;
    }
    int r = n + get_nth(n-1);
    return r;
}

int main(){
    int n;cin>>n;
    int x= get_nth(n);
    cout<<x;
}
