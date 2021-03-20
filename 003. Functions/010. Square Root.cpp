#include<iostream>
using namespace std;

int cal(int x,int p){
    //get integer part
    int start=0,stop=x,mid;
    float ans;
    while(start<=stop){
        mid=(start+stop)/2;
        if(mid*mid==x){ans=mid;break;}
        if(mid*mid<x){start=mid+1;ans=mid;}
        else{stop=mid-1;ans=mid;}
    }

    //get decimal part
    float inc=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=x){ans+=inc;}
    ans-=inc;
    inc=inc/10;
    }

    return ans;
}
int main(){
    int x,p;cin>>x>>p;
    int y=cal(x,p);
    cout<<y;
}

