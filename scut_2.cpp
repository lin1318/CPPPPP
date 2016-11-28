#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long i,sum,t;
	long long a[11],b[11];
	  cin>>t;
	  while(t--){
	  	sum=0;b[0]=0;
	  	for(i=1;i<=10;i++){
		    cin>>b[i];
			sum=sum+b[i];}
	  	  sort(b,b+11);
	  	   sum=sum/4; 
          a[3]=sum-b[1]-b[10];
		  a[2]=b[2]-a[3];
		  a[1]=b[1]-a[2];
		  a[4]=b[9]-a[3];
		  a[5]=b[10]-a[4];
		  a[0]=0;
		  sort(a,a+6);
		  for(i=1;i<=4;i++)
		    cout<<a[i]<<" ";
			cout<<a[5]<<endl;	  	  
	  }
}
