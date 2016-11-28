#include<iostream>
#include<cstdio>
using namespace std;
int fa[105];
 int finding(int x){
 	if(fa[x]==x) 
	  return x;
 	else
  	 return finding(fa[x]);
 }
int main(){
	int i,j,k,n,m,x,y;
     while(scanf("%d",&n)!=EOF){
     	if(n==0) 
		   return 0;
		   else
		    scanf("%d",&m);
     	for(i=1;i<=n;i++)
     	  fa[i]=i;
     	for(i=1;i<=m;i++)
     	  {
     	  	 scanf("%d%d",&x,&y);
     	  	 x=finding(x);
     	  	 y=finding(y);
     	  	 fa[x]=y;
     	  }
     	  k=0;
     	  for(i=1;i<=n;i++)
     	    if(fa[i]==i)
     	      k++;
     	 k--;
     	 printf("%d\n",k);
     }
} 
