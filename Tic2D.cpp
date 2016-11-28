#include<iostream>
#include<cstring>
using namespace std;
int tag[2000],tag1[2000];
int a[1050][1050];
int tot;
int x,n;
  void pp(int x){
  	int i;
  	  for(i=1;i<=n;i++)
  	    if(a[x][i]==1&&tag1[i]==0){
  	    	tag1[i]=1;
  	    	pp(i);
  	    }
  }
int main(){
	int m,sum,i,z,x,y;
	while(cin>>n){
		memset(a,0,sizeof(a));
		memset(tag1,0,sizeof(tag1));
		if(n!=0) cin>>m;
		else
		 break;
		 memset(tag,0,sizeof(tag));
		for(i=1;i<=m;i++)
		 {
		 	cin>>x>>y;
		 	tag[x]++;tag[y]++;
			 a[x][y]=1;a[y][x]=1;
			 }
		 sum=0;
		for(i=1;i<=n;i++)
		 if(tag[i]%2==1) 
		  sum++;
		pp(1);tot=0;
		for(i=1;i<=n;i++)
		  if(tag1[i]==1)
		   tot++;
		if((sum==0)&&(tot==n)){
			cout<<1<<endl;
		}
		else
		  cout<<0<<endl;}
} 
