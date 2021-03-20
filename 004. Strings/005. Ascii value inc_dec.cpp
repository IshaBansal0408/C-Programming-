#include<iostream>
using namespace std;

string cal(string str){
    int l=str.length();
    for(int i=0;i<l;i++){
        char c=str[i];
        str[i]=char(int(str[i]));
    }
    return str;
}
int main(){
    string s;cin>>s;
    string t=cal(s);
    cout<<t;
}
