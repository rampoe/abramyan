#include<bits/stdc++.h>
using namespace std;
int main(){
	long double a1,b1,c1,a2,b2,c2,d;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	d=a1*b2-a2*b1;
	cout<<"x="<<(c1*b2-c2*b1)/d<<"\ny="<<(a1*c2-a2*c1)/d;
	return 0;
}
