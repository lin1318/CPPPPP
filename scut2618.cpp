#include<iostream>
using namespace std;
int main(){
	int k,i,j,n,p;
	string s;
	  while(cin>>s){
	  	k=1;n=s.length();p=0;
	  	for(i=n-1;i>=0;i--){
	  		p=p+(s[i]-48)*k;
	  		k=k*2;
	  	}
	  	cout<<p<<endl;
	  }
} 
