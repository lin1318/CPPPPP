#include<iostream>
#include<algorithm>
using namespace std;
int a[300000];
int main(){
	long long sum,i,j,k,c,n;
	while(cin>>n>>c){
		for(i=1;i<=n;i++)
		  cin>>a[i];
	   sort(a,a+n);
	   for(i=1;i<=n;i++)
	     if(c>a[i]) c=c-a[i];
	     else
	       break;
	    cout<<i-1<<endl;
	} 
}
