#include<bits/stdc++.h>
using namespace std;int main(){
	long long n,n1,n2,n3;cin>>n;
	n1=n/100;n3=n%10;n2=n/10%10;
	cout<<n1+n2+n3<<endl;
	cout<<n1*n2*n3;
}
