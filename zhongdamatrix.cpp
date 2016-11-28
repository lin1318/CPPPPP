#include<iostream>
#include<cstring>
using namespace std;
int a[1000][2];
int s[1000][3];
int tag[1000];
int q;
int nc,nr,n,nc1,nr1;
  int trying(int x,int z,int y){
  	nc=0;nr=0;nc1=0;nr1=0;
  	  if(x==a[y][0]){
  	  	 nr=x;
  	   	 nc=z+a[y][1];
  	  }
      if(x==a[y][1])
        if(nc==0){
  	  	   nr=x;
  	  	   nc=z+a[y][0];}
  	  	 else
  	  	   {
  	  	   	 nr1=x;
  	  	   	 nc1=z+a[y][0];
  	  	   	 return 1;
  	  	   }
	  	  if(z==a[y][0])
	  	  	if(nc==0){ 
  	     	 nr=z;
  	   	     nc=x+a[y][1];
			}
			else{
  	  	   	 nr1=z;
  	  	   	 nc1=x+a[y][1];
  	  	   	 return 1;
  	  	   }
	    if(z==a[y][1])
		 if(nc==0){
  	  	   nr=z;
  	  	   nc=x+a[y][0];
  	     }
  	    else
  	      {
  	        nr1=z;
  	        nc1=x+a[y][0];
  	        return 1;
  	      }
  	  if(nc==0) 
		 return 0;
  	    else
  	     return 1;
  }
 int pp(int k){
 	int j,i;
 	if(k==3) {
 		q=1;
 	return 1;
  }
   else
      for(j=1;j<=n;j++)
	    if((tag[j]==0)&&(trying(s[k][0],s[k][1],j))){
      	   s[k+1][0]=nr;
      	   s[k+1][1]=nc;
      	   s[k+1][2]=j;
      	   tag[j]=1;
      	   if(pp(k+1)) return 1;
      	    tag[j]=0;
      	   if(nr1!=0){
			 s[k+1][0]=nr1;
      	     s[k+1][1]=nc1;
      	     s[k+1][2]=j;
      	     tag[j]=1;
      	     if(pp(k+1)) return 1;
      	      tag[j]=0;
      	   }
        }
     return 0;   
 }
int main(){
	int i,j,k,t;
	cin>>t;
	while(t--){
		cin>>n;
		q=0;
		for(i=1;i<=n;i++)
		  cin>>a[i][0]>>a[i][1];
		for(i=1;i<=n;i++){
		  s[1][0]=a[i][0];
		  s[1][1]=a[i][1];
		  s[1][2]=i;
		  memset(tag,0,sizeof(tag));
		  tag[i]=1;	
		  if(pp(1)){
		   cout<<"Yes"<<endl;
		   break;}
		 }
		  if(q==0)
		   cout<<"No"<<endl;  
	}
}
