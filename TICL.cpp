#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[100][2];
int tag[2500000];
int s[100];
int n;
  int dalao(int j,int m){
  	int i;
  	i=0;
  	while(m>0){
  		i++;
  		if(i==j)
  		   return m%2;
  		m=m/2;
  	 }
  	 return 0;
  }
  int pp(int k,int dps,int j){
  	int i,q,q1;
  	q=0x7fffffff;
    if(j==n+1)
  	    return 0;
  	else
  	  if(tag[k]==-1){
  	  	for(i=0;i<=n-1;i++){
			if(dalao(i+1,k)!=1){
                q1=pp(k+(1<<i),dps-a[i+1][0],j+1)+dps*a[i+1][1];
				if(q1<q) 
				  q=q1; 	  		
  	  	   }
  	  }
  	  	 tag[k]=q;  
  	  }
  	return tag[k];
  }
int main(){
	int i,j,k,dps;
	while(scanf("%d",&n)!=EOF){
		memset(tag,-1,sizeof(tag));
	    dps=0;
				for(i=1;i<=n;i++){
     		scanf("%d%d",&a[i][0],&a[i][1]);
		   dps+=a[i][0];}
		 printf("%d\n",pp(0,dps,1));
	}
} 
