#include<iostream>
using namespace std;
void palin(string str,string ans){
    int i,j;
    for(i=0,j=str.length()-1;i<str.length()&& j>=0;i++,j--){
        if(str[i]!=str[j]){
            ans="False";
            break;
        }
    }
    cout<<ans;
}
int main(){
    string str,ans="True";
    cin>>str;
    palin(str,ans);
}
