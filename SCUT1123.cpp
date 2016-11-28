#include<iostream>
#include<cstring>
using namespace std;
int n;
int s[5][1005000];
int pp(int k,int tot){
	int i,j;
	if(tot==n) return 1;
      else{
      	if(s[k][tot]==-1){
      	if(k==1) j=pp(3,tot+1)%7654321;
		if(k==2) j=pp(4,tot+1)%7654321;
		if(k==3) j=(pp(1,tot+1)+pp(4,tot+1))%7654321;
		if(k==4) j=(pp(3,tot+1)+pp(2,tot+1))%7654321;
		 s[k][tot]=j; }
	  } 
	return s[k][tot];
}
int main(){
	while(cin>>n){
		memset(s,-1,sizeof(s));
	 cout<<pp(1,1)<<endl;}
}
