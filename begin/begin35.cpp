#include<bits/stdc++.h>
using namespace std;
int main(){
    long double t1,t2,s,s1,s2,v,v2,u;
    cin>>v>>u>>t1>>t2;
    v2=v-u;
    s1=t1*v;s2=t2*v2;
    s=s1+s2;
    cout<<"s="<<s<<endl;
    return 0;
}
