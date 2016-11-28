#include<iostream>
using namespace std;
int a[100];
int b[100];
int lt;
long long min1=0x7fffffffff;
long long m;
 void check(){
 	long long sum,k,j,i;
 	sum=0;
	 for(i=1;i<=lt;i++)
	   if(b[i]==4) sum++;
	      else
		   sum--;
	   j=b[1];
	   if(sum==0){
	   	 for(i=2;i<=lt;i++)
	   	   j=j*10+b[i];
	   	   if(j>=m&&j<min1)
	   	     min1=j;
	   } 
 }
  void pp(int k){
  	if(k==lt+1){
  		check();
  	 }
  	else
  	 {
  	   b[k]=4;pp(k+1);
  	   b[k]=7;pp(k+1);
  	 }
  }
int main(){
	long long n,i,j,k,sum,ll,st;
	 while(cin>>n){
	 	lt=0;ll=0;
	 	m=n;min1=0x7fffffffff;
	 	while(n>0){
	 		lt++;
	 		a[lt]=n%10;
	 		n=n/10;
	 	}
	 	sum=0;
	 	  
	      	pp(1);
	    if(min1==0x7fffffffff){
	    	 lt++;
	    	 if(lt%2==1) lt++;
	    	pp(1);
	    }
	      	cout<<min1<<endl;
	 }
} 
