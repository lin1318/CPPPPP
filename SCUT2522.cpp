#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int a[300000];
int main(){
	int i,r,p,k,n,m,len;
	 while(cin>>n){
	 	memset(a,0,sizeof(a));
	 	len=0;
	 	for(i=1;i<=n;i++)
        {  
		   cin>>k;
		   a[k]=a[k-1]+1;
		   if(a[k]>len)
		     len=a[k]; 
        }	 	
	    cout<<n-len<<endl;
	 }
} 
