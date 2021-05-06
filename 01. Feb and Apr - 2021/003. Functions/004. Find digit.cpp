#include<iostream>
using namespace std;

int return_count(int no,int digi){
    int cnt=0;
    while(no!=0){
        int d=no%10;
        if(d==digi)
            cnt+=1;
        no=no/10;
    }
    return cnt;
}
int main(){
    int n,d;
    cin>>n>>d;
    int x = return_count(n,d);
    cout<<x;
}
