#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct coin{
	int p,w;
}x;
int s[15000];
int main(){
	int i,j,k,n,m,p,e,f,t;
	cin>>t;
	while(t--){
		cin>>e>>f;
		cin>>m;
		f=f-e;
		fill(s,s+f+1,-1);
		s[0]=0;
		for(i=1;i<=m;i++){
			cin>>x.p>>x.w;
			for(j=x.w;j<=f;j++)
			  if(s[j-x.w]!=-1)
			     if(s[j]==-1)
			       s[j]=s[j-x.w]+x.p;
			    else
			      s[j]=min(s[j-x.w]+x.p,s[j]);
		}
		if(s[f]!=-1)
		cout<<"The minimum amount of money in the piggy-bank is "<<s[f]<<"."<<endl;
		else
		 cout<<"This is impossible."<<endl;
	}
} 
