#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int s[105000][2];
int lt,rt,st;
int finding(int l,int r,int j){
  int i,k,mid;
  	i=-1000000;
	k=-1000000; 
  if(lt<=l&&rt>=r)
     i=s[j][0]+s[j][1];
else{
	 mid=(l+r)/2;                                                 
   if((l<=lt&&mid>=lt)||(l<=rt&&mid>=rt)||lt<=l&&rt>=mid)
    i=finding(l,mid,j*2)+s[j][1];
	mid++;                                         
  if((mid<=lt&&r>=lt)||(mid<=rt&&r>=rt)||lt<=mid&&rt>=r)
    k=finding(mid,r,j*2+1)+s[j][1];
  }
  return max(i,k);
}
void building(int l,int r,int j){
	if(l<r){
		building(l,(l+r)/2,j*2);
		building((l+r)/2+1,r,j*2+1);
		s[j][0]=max(s[j*2][0],s[j*2+1][0]);
	}
}
void gaigai(int k){
	if(k!=1){
		int j=k/2;
	  s[j][0]=max(s[j*2][0]+s[j*2][1],s[j*2+1][0]+s[j*2+1][1]);
	  gaigai(j);
	}
}
void chg(int l,int r,int j,int x){
 int i,mid;
  if(lt<=l&&rt>=r){
     s[j][1]+=x;
     gaigai(j);
 }
else{
	 mid=(l+r)/2;                                                 
   if((l<=lt&&mid>=lt)||(l<=rt&&mid>=rt)||lt<=l&&rt>=mid)
    chg(l,mid,j*2,x);
	mid++;                                         
  if((mid<=lt&&r>=lt)||(mid<=rt&&r>=rt)||lt<=mid&&rt>=r)
    chg(mid,r,j*2+1,x);
  }	
}
int main(){
   int i,j,k,n,m,x;
   string p;
   while(cin>>n){
   st=1;memset(s,0,sizeof(s));
   while(st<n)
   st=st*2;
   k=st*2-1;
   cin>>m;
  for(i=st;i<=st+n-1;i++)
     cin>>s[i][0];	  
 for(i=st+n;i<=k;i++)
   s[i][0]=-1000000;
   building(1,st,1); 	
   for(i=1;i<=m;i++){
   	 cin>>p>>lt>>rt;
   	 if(p=="Qry") cout<<"The answer is "<<finding(1,st,1)<<"."<<endl;
   	    else{
   	    	cin>>x;
   	      chg(1,st,1,x);
   	  }
   }
 }
}
