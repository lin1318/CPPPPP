#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[105][105];
int main(){
	int i,j,k,n,m,x,y,t,jt,min1;
	while(cin>>n){
		if(n==0) return 0; 
		memset(a,0x3f,sizeof(a));
		t=a[0][0];
		for(i=1;i<=n;i++){
			cin>>m;
		  for(j=1;j<=m;j++)
		    {
		    	cin>>x>>y;
		    	a[i][x]=y;
		    }
		}
	for(k=1;k<=n;k++)	
	  for(i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
	        if(a[i][k]+a[k][j]<a[i][j])
	           a[i][j]=a[i][k]+a[k][j];
	  jt=0;min1=0x7ffffff;
	   for(i=1;i<=n;i++){
	   	k=-1;
	    for(j=1;j<=n;j++)
	      if(i!=j) k=max(a[i][j],k);
	       if(k<min1){
	       	jt=i;
	       	min1=k;
	       }
	   }
	  if(min1==0x7ffffff||min1==t)
	     cout<<"disjoint"<<endl;
	    else
	      cout<<jt<<' '<<min1<<endl;
	}
}
