#include<iostream>
using namespace std;
int main(){
	long long x,y,k,z;
	while(cin>>x>>y>>k){
		z=100000;
		x=x*y*k;
		if(x>=100000)
		  cout<<1<<endl;
		else
		 cout<<0<<endl;
	}
} 
