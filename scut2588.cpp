#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long i,n,k,j;
	 while(cin>>n){
	  k=static_cast<long long>(sqrt(n));
	  j=0;
	  for(i=2;i<=k;i++)
	  if(n%i==0){
	  	j=1;
	  	break;
	  }	
	  if(j==0&&n!=1)
	   cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	 }
}
