#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i,j,k,n;
	int a[100];
	n=10;
	  while(cin>>a[1]){
	  	for(i=2;i<=n;i++)
	  	  cin>>a[i];
	  	  sort(a+1,a+n+1);
	  	  cout<<a[n]<<" "<<a[n-1]<<endl;
	  }
}
