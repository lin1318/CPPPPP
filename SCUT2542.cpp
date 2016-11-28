#include<iostream>
#include<cstring>
using namespace std;
int a[10000];
int tag[10000];
int s[10000][2];
int l;
int main(){
	int n,m,i,j,k,p,sn;
	l=1;a[1]=2;
	for(i=3;i<=10000;i++){
		k=1;
		for(j=1;j<=l;j++)
		 if(i%a[j]==0){
		 	k=0;
		 	break;
		 }
		 if(k==1){
		 	l++;
		 	a[l]=i;
		 }
      }
 while(cin>>n>>m){
 	int q=0; 
 	memset(tag,0,sizeof(tag));
    for(i=1;i<=l;i++)
      tag[a[i]]=1;
 	 p=1;sn=1;s[1][0]=n;s[1][1]=0;
 	 tag[n]=0;
 	 while(p<=sn){
 	   if(s[p][0]==m){
 	   	  j=p;k=0;q=1;
 	   	  while(j>0){
 	   	  	j=s[j][1]; 
 	   	  	k++;
 	   	  }
 	   	cout<<k-1<<endl;
 	   }
 	else
 	   for(i=1;i<=4;i++)
 	   	for(j=0;j<=9;j++){
 	   	  if(i==1&&j!=0){
 	   	  	k=s[p][0];
 	   	  	k=k%1000+j*1000;
 	   	  }	if(i==2){
 	   	  	k=s[p][0];
 	   	  	k=k/1000*1000+k%100+j*100;
 	   	  }	if(i==3){
 	   	  	k=s[p][0];
 	   	  	k=k/100*100+j*10+k%10;
 	   	  }	if(i==4){
 	   	  	k=s[p][0];
 	   	  	k=k/10*10+j;
 	   	  }	
 	     	if(tag[k]==1){
 	   	     	sn++;
 	   	    	s[sn][0]=k;
 	   	    	s[sn][1]=p;
 	   	    	tag[k]=0;
 	     	 }
 	   	}
 	   p++;
	 }
    if(q==0) cout<<"Impossible"<<endl;	 
   }
} 
