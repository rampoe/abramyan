#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	float f=1,s=1;
	for(int i=1;i<=n;i++){
		f*=(float)i;
		s+=1/f;
	}
	cout<<s;
}
