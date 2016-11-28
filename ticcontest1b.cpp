#include<iostream>
using namespace std;
int main(){
	long long a,b,c,d,e,f,t,ans1,ans2,ans3,k;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d>>e>>f;
		ans3=c+f;
		k=ans3/60;
		ans3=ans3%60;
		ans2=b+e+k;
		k=ans2/60;
		ans2=ans2%60;
		ans1=a+d+k;
		cout<<ans1<<' '<<ans2<<' '<<ans3<<endl;
	}
}
