#include<iostream>
#include<cstring>
using namespace std;
int main(){
	long long a[100];
	long long i,j,k,n,m,t;
	cin>>t;
	  while(t--){
	  	cin>>n>>m;
	  	memset(a,0,sizeof(a));
	  	a[n]=1;
	  	a[n-1]=0;
	  	for(i=n+1;i<=m;i++)
	  	   a[i]=a[i-1]+a[i-2];
	  	cout<<a[m]-a[n]+1<<endl;
	  }
}
