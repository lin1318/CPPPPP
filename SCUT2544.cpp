#include<iostream>
#include<cmath>
using namespace std;
  long long extgcd(long long a,long long b,long long &x,long long &y){
    long long t,d;
    if(b==0){
       x=1;y=0;return a;
    }
   else{
   	  d=extgcd(b,a%b,x,y);
   	 t=x-a/b*y;x=y;y=t;
		return d; 
   }
  }
int main(){
  long long x1,y1,x,y,m,n,l,d,r,a,c;
  while(cin>>x>>y>>m>>n>>l){
  	a=n-m;c=x-y;
    d=extgcd(a,l,x1,y1);r=l/d;
 if(c%d!=0) cout<<"Impossible"<<endl;
   else
    cout<<(c/d*x1%r+r)%r<<endl;
  }	
} 
