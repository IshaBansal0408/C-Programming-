#include<iostream>
using namespace std;

string cal(string str1){
    int l=str1.length();
    string res=" ";
    for(int i=0;i<l;i+2){
        if(i==l-1){
            res+=str1[i];
        }
        else{
            res+=str1[i];
            int x = abs(int(str1[i])-int(str1[i+1]));
            res+=str1[i+1];
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    string t=cal(s);
    cout<<t;
}
