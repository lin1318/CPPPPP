#include<iostream>
using namespace std;
int a[400000];
int main(){
	int i,j,k,n,jias,jians;
	while(cin>>n){
		for(i=1;i<=n;i++)
		 cin>>a[i];
		 jias=0;jians=0;
	   j=1;
	   while(j<=n){
	   	k=a[j];
	   	k=k+jias-jians;
		if(k>0) 
		   jians=jians+k;
		   else
		    jias=jias-k;
		    j++;
		 }
	 cout<<jias+jians<<endl;	 
	}
} 
