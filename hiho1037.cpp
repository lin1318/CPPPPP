#include<iostream>
#include<cstring>
using namespace std;
int s[105][105];
int a[105][105];
int n;
  int dp(int j,int k){
  	int max1,max2;
     if(j>n) return 0;
	 if(k>j) return 0;
	 max1=0;max2=0;
	 if(s[j][k]==-1){
	 	if(j!=n){
	 	max1=dp(j+1,k);
	 	max2=dp(j+1,k+1);
		 } 
	  if(max1<max2) max1=max2;
	  s[j][k]=max1+a[j][k];
	 }
	 return s[j][k];	
  }
int main(){
	int i,j,k,m;
	cin>>k;
  while(k--){
  	cin>>n;
	for(i=1;i<=n;i++)
	  for(j=1;j<=i;j++)
	    cin>>a[i][j];
	  memset(s,-1,sizeof(s));
   cout<<dp(1,1)<<endl;}
} 
