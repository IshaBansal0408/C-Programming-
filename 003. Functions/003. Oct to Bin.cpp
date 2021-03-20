#include<iostream>
using namespace std;

string oct_to_binary(string x){
    int n=x.length();
    string res="";
    for(int i=0;i<n;i++){
        switch(x[i]){
            case '1':res+="000";break;
            case '2':res+="001";break;
            case '3':res+="011";break;
            case '4':res+="100";break;
            case '5':res+="101";break;
            case '6':res+="110";break;
            case '7':res+="111";break;
            default:cout<<"Invalid Octal digit";return "Error!";break;
        }
    }
    return res;
}
int main(){
    string n;
    cin>>n;
    string x=oct_to_binary(n);
    cout<<x;
}
