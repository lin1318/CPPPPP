#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int a[200][200];
int s[100010][2];
string st;
int n;
   int solve(int k,char cp){
   	  int i,j,max1,sd;
   	  char c;
   	  if(s[k][2]<1)
   	   if(k==n-1)
   	     return 1;
   	else
   	  if(k>n-1) return 0;
   	   else{
			c=st[k];
		   for(i=k+1;i<=n-1&&a[int(c)][int(st[i])]==1;i++);
		    j=solve(i,c)+1;
   	     for(i=k+1;i<=n-1&&a[int(cp)][int(st[i])]==1;i++); 
   	     max1=solve(i,cp);
   	     if(max1<j)
   	     max1=j;
   	     s[k][1]=max1;
   	     s[k][2]++;
   	   }
		return s[k][1];  
   }
int main(){
	int i,j,k,m,p;
	char c1,c2;
	cin>>n;
	cin>>st;
	cin>>m;
	memset(a,0,sizeof(a));
	for(i=1;i<=m;i++){
		cin>>c1>>c2;
		a[int(c1)][int(c2)]=1;
		a[int(c2)][int(c1)]=1;
	}
	memset(s,-1,sizeof(s));
    cout<<n-solve(0,char(96))<<endl;
} 
