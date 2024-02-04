#include<bits/stdc++.h>
using namespace std;
int main(){
	long double a,b,c; cin>>a>>b>>c;
	long double x1=(-b-sqrt(b*b-4*a*c))/(2*a),
				x2=(-b+sqrt(b*b-4*a*c))/(2*a);
	if(x1<x2){
		cout<<x1<<" "<<x2;
	}else{
		cout<<x2<<" "<<x1;
	}
	return 0;
}
