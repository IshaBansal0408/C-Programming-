#include <bits/stdc++.h>
using namespace std;
int C_to_F(float n)
{
    return((5*(n-32))/9);
}
int main()
{
    float st,ed,step;
    cin>>st>>ed>>step;
    for(int i=st;i<=ed;i+=step){
        cout<<i<<" "<<C_to_F(i)<<endl;
    }
}
