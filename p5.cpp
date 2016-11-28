#include<iostream>
using namespace std;
int main(){
	int n,m,i,j,sum;
	while(cin>>n>>m){
		if(n==0&&m==0)
		  break;
		  sum=0;
		for(i=1;i<=n-1;i++)
		 for(j=i+1;j<=n;j++)
		  if((i*i+j*j+m)%(i*j)==0)
		    sum++;
		    cout<<sum<<endl;
	}
}
