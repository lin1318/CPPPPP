#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
long long s[1000100];
int lt,rt,st;
extern long long finding(int l,int r,int j);
void building(int l,int r,int j){
	if(l<r){
		building(l,(l+r)/2,j*2);
		building((l+r)/2+1,r,j*2+1);
		s[j]=s[j*2]+s[j*2+1];
	}
}
void change(int l,int x,int c){
	long long j;
  x=x*c;
  s[st+l-1]+=x;
  j=st+l-1;
  while(j>1){
  	j=j/2;
  	s[j]+=x;
  }
}
int main(){
   int i,j,k,n,m,x,tot,q;
   string p;tot=0;
   cin>>q;
  while(q--){
  	cin>>n;
  	tot++;
  	cout<<"Case "<<tot<<":"<<endl;
   st=1;
   while(st<n)
   st=st*2;
   k=st*2-1;
  for(i=st;i<=st+n-1;i++)
     cin>>s[i];	  
 for(i=st+n;i<=k;i++)
   s[i]=0;
   building(1,st,1); 
   cin>>p;	
   while(p!="End"){
   	 cin>>lt>>rt;
   	 if(p=="Query")
   	  cout<<finding(1,st,1)<<endl;
   	    else
   	  if(p=="Add")
   	      change(lt,rt,1);
   	    else
   	     change(lt,rt,-1);
   	     cin>>p;
      }
   }
}
long long finding(int l,int r,int j){
  int i,k,mid;
  	i=0;
	k=0;
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
