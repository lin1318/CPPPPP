#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,m,t;
	int a[105];
	while(cin>>n){
		if(n==0) break;
      k=0;j=0;
	  for(i=1;i<=n;i++)
	    {
	    	 cin>>a[i];
	    	 k=a[i];		
	    j=j+k/100;
	   k=k%100;
	   j=j+k/50;
	   k=k%50;
	   j=j+k/10;
	   k=k%10;
	   j=j+k/5;
	   k=k%5;
	   j=j+k/2;
	   k=k%2;
	   j=j+k;
	   	}
	  cout<<j<<endl;}
} 
