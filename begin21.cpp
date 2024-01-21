#include<bits/stdc++.h>
using namespace std;
int main(){
long double x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
long double a=sqrt(pow(x2-x1,2)+pow(y2-y1,2)),
			b=sqrt(pow(x3-x2,2)+pow(y3-y2,2)),
			c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
long double p=(a+b+c)/2;
cout<<"S="<<sqrt(p*(p-a)*(p-b)*(p-c));
return 0;
}
