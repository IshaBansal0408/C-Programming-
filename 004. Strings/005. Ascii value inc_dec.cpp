#include<iostream>
using namespace std;

string cal(string str1){
    int l=str1.length(),z;
    char t;
    for(int i=0;i<l;i++){
            char c=str1[i];
            if((i+1)%2==0){
                z=int(str1[i])-1;
                t=char(z);
                str1[i]=t;
            }
            else{
                z=int(str1[i])+1;
                t=char(z);
                str1[i]=t;
            }
    }
    return str1;
}
int main(){
    string s;
    cin>>s;
    string t=cal(s);
    cout<<t;
}
