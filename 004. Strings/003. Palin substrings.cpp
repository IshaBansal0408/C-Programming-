#include<iostream>
using namespace std;

bool palindrome(string str){
    int i,j;
    for(i=0,j=str.length()-1;i<str.length()&& j>=0;i++,j--){
        if(str[i]!=str[j]){
            return false;
        }
    }
    return true;
}

int get_all_sub(string sub[200],string str){
    int pos=0,n=str.length();
    for (int len = 1; len <= n; len++){
            for (int i = 0; i <= n - len; i++){
                int j = i + len - 1;
                string s="";
                for (int k = i; k <= j; k++)
                    s+=str[k];
                sub[pos]=s;
                pos+=1;
      }
   }
   return pos;
}
int main(){
    string str,sub[200];
    cin>>str;
    int x=get_all_sub(sub,str);
    int cnt=0;
    for(int i=0;i<x;i++){
            if(palindrome(sub[i])){
                    cnt+=1;
            }
    }
    cout<<cnt;
}

