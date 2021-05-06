#include <bits/stdc++.h>
using namespace std;

string remove_dup(string s){
    int l=s.length(),i;
    char ch=s[0];
    string answer="";
    for(i=1;i<l;i++){
        if(s[i]!=ch){
            answer+=ch;
            ch=s[i];
        }
    }
    answer+=s[-1];
    return answer;
}

int main(){
    string str;cin>>str;
    string ans=remove_dup(str);
    cout<<ans;
}
