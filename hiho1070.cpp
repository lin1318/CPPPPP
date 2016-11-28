#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int s[100000];
int lt,rt,st;
extern int finding(int l,int r,int j);
void building(int l,int r,int j){
	if(l<r){
		building(l,(l+r)/2,j*2);
		building((l+r)/2+1,r,j*2+1);
		s[j]=min(s[j*2],s[j*2+1]);
	}
  int j;
  s[st+i-1]=x;
  building(1,st,1);
}
int main(){
   int i,j,k,n,m,p;
   cin>>n;
   st=1;
   while(st<n)
   st=st*2;
   k=st*2-1;
  for(i=st;i<=st+n-1;i++)
     cin>>s[i];	  
 for(i=st+n;i<=k;i++)
   s[i]=0x2ffffff;
   building(1,st,1); 	
   cin>>m;
   for(i=1;i<=m;i++){
   	 cin>>p>>lt>>rt;
   	 if(p==0) cout<<finding(1,st,1)<<endl;
   	    else
   	      change(lt,rt);
   }
}
int finding(int l,int r,int j){
  int i,k,mid;
  	i=0x2ffffff;
	k=0x2ffffff;
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
  return min(i,k);
}
