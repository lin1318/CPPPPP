#include<iostream>
#include<algorithm>
using namespace std;
int a[40000],b[40000];
int main(){
	int sum,i,j,k,n,m,t1,t2;
	while(cin>>n>>m){
	   sum=0;
	   for(i=0;i<=n-1;i++)
	      cin>>a[i];
	    for(i=0;i<=m-1;i++)
	      cin>>b[i];
	      sort(a,a+n);
	      sort(b,b+m);
	   t1=0;t2=0;
	     while(t1<=n-1&&t2<=m-1){
	     	while(t2<=m-1&&b[t2]<a[t1]) t2++;
	     	if(a[t1]<=b[t2]){
	     		sum=sum+b[t2];
	     		t1++;t2++;
	     	}
	     }
	  if(t1==n) 
	  cout<<sum<<endl;
	  else 
	  cout<<-1<<endl;   
   }
}
