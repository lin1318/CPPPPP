#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int dp[10][3];
void init(){
   int i,j,k;
   memset(dp,0,sizeof(dp)); 
   dp[0][0]=1;
   for(i=1;i<=8;i++){
   	  dp[i][0]=dp[i-1][0]*9-dp[i-1][1];
   	  dp[i][1]=dp[i-1][0];
   	  dp[i][2]=dp[i-1][2]*10+dp[i-1][0]+dp[i-1][1];
   }
}
  int solve(int n){
  	int x=n,i,ans,k,flag;
  	int dight[10];
  	k=0;
  	while(n>0)
  	{
  	  dight[++k]=n%10;
	  n=n/10; 
  	}
  	dight[k+1]=0; 
  	ans=0;
  	flag=0;
    for(i=k;i>0;i--){
    	ans+=dp[i-1][2]*dight[i];
       if(flag==1)
        ans+=dight[i]*dp[i-1][0];
       else{
        if(dight[i]>4)
          ans+=dp[i-1][0];
        if(dight[i]>6)
         ans+=dp[i-1][1];
        if(dight[i+1]==6&&dight[i]>2)
          ans+=dp[i][1];}
        if((dight[i]==4)||(dight[i+1]==6&&dight[i]==2))
            flag=1;
    }
    return x-ans;
  }
int main(){
  int i,j,k,n,m,p,a,b;
  init();
     while(cin>>a>>b){ 
     if(a==0||b==0)
	    break;
		cout<<solve(b+1)-solve(a)<<endl;} 
}
