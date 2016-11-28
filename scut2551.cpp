#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,m;
	while(cin>>n){
		m=0x7ffffff;
		for(i=1;i<=n;i++)
		 {
		 	cin>>k;
		 	if(k<m)
		 	 m=k;
		 } 
		cout<<m<<endl;
	}
}
