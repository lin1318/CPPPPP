#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,m,p;
	int a[1050];
	while(cin>>n){
		if(n==0) break;
		a[0]=0;
		for(i=1;i<=n;i++)
		cin>>a[i];
		p=0;
		for(i=1;i<=n;i++){
			if(a[i-1]<=a[i])
			 p=p+(a[i]-a[i-1])*6+5;
			else
			 p=p+(a[i-1]-a[i])*4+5;
		}
		cout<<p<<endl;
	}
}
