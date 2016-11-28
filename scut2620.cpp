#include<iostream>
#include<algorithm>
using namespace std;
long long  a[3];
int main(){
	while(cin>>a[0]>>a[1]>>a[2]){
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
		  cout<<"true"<<endl;
		else
		 cout<<"false"<<endl;
	}
}
