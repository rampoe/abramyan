#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    a=fabs(a),b=fabs(b);
    cout<<"|a|+|b|="<<a+b<<endl;
    cout<<"|a|-|b|="<<a-b<<endl;
    cout<<"|a|*|b|="<<a*b<<endl;
    cout<<"|a|/|b|="<<a/b;
    return 0;
}
