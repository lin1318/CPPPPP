#include<iostream>
#include<cmath>
using namespace std;
int s[1000050][22];
int a[1000050];
int min(int a, int b){
   return a<b?a:b;
}
int main(){
   int p,st,i,j,k,n,m,l,r;
   ios::sync_with_stdio(false);
   cin>>n;
   st=log2(n);
  for(i=1;i<=n;i++){
    cin>>a[i];
    s[i][0]=a[i];
}
  for(j=1;j<=st;j++)
   for(i=1;i<=n-(1<<j)+1;i++)
     {
     	s[i][j]=min(s[i][j-1],s[i+(1<<(j-1))][j-1]);
     }
    cin>>m;
    while(m--){
     cin>>l>>r;
     k=log2(r-l+1);
     cout<<min(s[l][k],s[r-(1<<k)+1][k])<<endl;
    }
    return 0;
}
