#include<iostream>
using namespace std;
int main(){
  int n,x,sum;
   while(cin>>n){
   	sum=0;
   	for(int i=1;i<=n;i++)
   	  {
   	  	 cin>>x;
   	  	 sum+=x;
   	  }
   	cout<<sum<<endl;
   }
} 
