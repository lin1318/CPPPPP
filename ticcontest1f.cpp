#include<iostream>
#include<cstring>
#include<algorithm>
#include<ctime>
using namespace std;
int s[3000000];
int lt,rt,st,cp;
void building(int l,int r,int j){
	if(l<r){
		building(l,(l+r)/2,j*2);
		building((l+r)/2+1,r,j*2+1);
		s[j]=s[j*2]+s[j*2+1];
	}
}	
int finding(int l,int r,int j){
	 int i=0,k=0,mid;
  if(lt<=l&&rt>=r)
     i=s[j];
else{
	 mid=(l+r)/2;                                                 
   if((l<=lt&&mid>=lt)||(l<=rt&&mid>=rt)||lt<=l&&rt>=mid)
    i=finding(l,mid,j*2);
	mid++;                                         
  if((mid<=lt&&r>=lt)||(mid<=rt&&r>=rt)||lt<=mid&&rt>=r)
    k=finding(mid,r,j*2+1);
  }
  return i+k;
}
void chg(int k){
	if(k!=0)
	  {
	  	s[k]=s[k]-1;
	  	chg(k/2);
	  }
}
 int soso(int l,int r,int j,int x){
 	int mid;
 	mid=(l+r)/2;
 	if((x==1)&&(j>=st)) return j-st+1;
 	  else
 	    if(s[j*2]<x)
 	       return soso(mid+1,r,j*2+1,x-s[j*2]);
 	    else
 	      return soso(l,mid,j*2,x);
  } 
int main(){
   int gg,i,j,k,n,m,p,sb,nn;
    // while(cin>>n>>m>>sb){
    cin>>n>>m>>sb; 
	time_t now;
	now=time(0);
	char *dt=ctime(&now);
	cout<<dt<<endl;
     //	if(n==0&&m==0&&sb==0)
     //	  break;
      st=1;
      if(m==1){
      	if (sb==1) 
		  sb=n+1;
      	cout<<sb-1<<endl;
     // 	continue;
      }
       while(st<n)
         st=st*2;
        memset(s,0,sizeof(s));
    for(i=st;i<=st+n-1;i++)
          s[i]=1;	  
      building(1,st,1); 
	  nn=n;  
           while(nn>1){
            chg(sb+st-1);
           	k=m;
           	lt=sb;rt=n;
           	p=finding(1,st,1);
           	if(p<k){ 
			    sb=soso(1,st,1,1); 
				k=k-p-1;
		 }
           	  lt=1;rt=sb;
           	     cp=finding(1,st,1);
           	     p=s[1]-cp+1;
           	  if(p<=k)
           	    	k=k%p;
				sb=soso(1,st,1,k+cp);
	       	    nn--;
	       } 
		   cout<<sb<<endl;
     //}
    	now=time(0);
	dt=ctime(&now);
	cout<<dt<<endl; 
}

