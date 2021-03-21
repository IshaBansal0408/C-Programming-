#include <bits/stdc++.h>
using namespace std;

char get_max_occ(string str){
    unordered_map<char,int> d;
    int l=str.length();
    for(int i=0;i<l;i++){
        d[str[i]]++;
    }
    int max_o = d[str[0]];
    char ch=str[0];
    for(int i=1;i<l;i++){
            if(max_o<d[str[i]]){
                max_o=d[str[i]];
                ch=str[i];
            }
    }
    return ch;
}
int main(){
    string st;cin>>st;
    char ch = get_max_occ(st);
    cout<<ch;

}
