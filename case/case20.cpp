#include<bits/stdc++.h>
using namespace std;int main(){
int d,m; cin>>d>>m; switch(m){
case 1:if (d >= 20)cout<<"vodoley";else cout<<"kozerog"; break;
case 2:if (d >= 19)cout<<"ryby";else cout<<"vodoley";break;
case 3:if (d >= 21)cout <<"oven";else cout <<"ryby";break;
case 4:if (d >= 20)cout<<"telets";else cout<<"oven";break;
case 5:if(d>=21)cout<<"bliznetsy";else cout<<"telets";break;
case 6:if(d>=22)cout<<"rak";else cout<<"bliznetsy";break;
case 7:if(d>=23)cout<<"lev";else cout<<"rak";break;
case 8:if(d>=23)cout<<"deva";else cout<<"lev";break;
case 9:if(d>=23)cout<<"vesy";else cout<<"deva";break;
case 10:if(d>=23)cout<<"skorpion";else cout<<"vesy";break;
case 11:if(d>=23)cout<<"strelets";else cout<<"skorpion";break;
case 12:if(d>=22)cout<<"kozerog";else cout<<"strelets";break;
}}
