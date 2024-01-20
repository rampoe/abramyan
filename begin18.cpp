#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,ac,bc;
	cin>>a>>b>>c;
	ac=fabs(c-a);bc=fabs(b-c);
	cout<<ac*bc;
	return 0;
}
