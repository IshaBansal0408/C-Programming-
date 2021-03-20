#include<iostream>
#include<string.h>
using namespace std;

string Toggle_case(string t,int l){
    string res="";
    for(int i=0;i<l;i++){
        if(islower(t[i]))
            t[i]=toupper(t[i]);
        else if(isupper(t[i]))
            t[i]=tolower(t[i]);
    }
    return t;
}

int main(){
    string s;cin>>s;
    int l=s.length();
    string s1=Toggle_case(s,l);
    cout<<s1;

}
