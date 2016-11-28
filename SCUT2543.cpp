#include<iostream>
using namespace std;
int main(){
	long long a,b,c,i,j,k,t;
	while(cin>>a>>b>>c){
		k=1;
	   while(b>0){
	   	  a=a%c;
	     if(b%2==1) 
	      k=k*a%c;
	      b=b/2;
	      a=a*a%c;
	    }
	   cout<<k<<endl;
	}
}
