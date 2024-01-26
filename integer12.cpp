#include<bits/stdc++.h>
using namespace std;int main(){
	ostringstream ss;string s;long long n;
	cin>>n;ss<<n;s=ss.str();
	reverse(s.begin(), s.end());
	cout<<s;
}
