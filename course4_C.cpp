#include<iostream>
using namespace std;
int main(){
	long long i,j,k,n;
	while(cin>>k){
		for(i=1;i<=9;i++)
		  {
		  	cin>>j;
		  	if(k<j)
		  	  k=j;
		  }
		cout<<k<<endl;
	}
}
