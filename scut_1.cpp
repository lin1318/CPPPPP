#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t,i,n;
	cin>>t;
	while(t--){
		long double c=0,ans=0;
		cin>>n;
		for(i=1;i<=n;i++){
			long double a=1.0/i-c;
			long double t=ans+a;
			c=(t-ans)-a;
			ans=t;
		   }
	cout<<fixed<<setprecision(14)<<ans<<endl;}
}
