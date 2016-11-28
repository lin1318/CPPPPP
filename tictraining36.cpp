#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;
int s[105];
struct real{
	int p,l,x;
};
struct instead{
	int t,v;
};
int m;
vector<instead> b[105];
real q[105];
int pp(int k){
	int i,j,t;
	if(q[k].x==0)
	   s[k]=q[k].p;
	else
	  if(s[k]==-1){
	  	 t=q[k].p;
	  	 for(i=0;i<b[k].size();i++)
	  	 if(abs(q[b[k][i].t].l-q[1].l)<=m)
	  	     {
	  	     	j=b[k][i].v+pp(b[k][i].t);
	  	     	if(j<t) t=j;
	  	     }  
	  	s[k]=t;
	  }
	  return s[k];
}
int main(){
	int he,i,j,k,n,p,max1;
	instead x;
	while(cin>>m>>n){
	   for(i=1;i<=n;i++){
	   	cin>>q[i].p>>q[i].l>>q[i].x;
		   for(j=1;j<=q[i].x;j++){
		     	cin>>k>>p;
		     	x.t=k;x.v=p;
				 b[i].push_back(x);
				 }	
           }
        memset(s,-1,sizeof(s));
         cout<<pp(1)<<endl;
         for(i=1;i<=n;i++)
           b[i].clear();
	 }
}
