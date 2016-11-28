#include<iostream>
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
	int i,n;
	int sum;
	sum=0;
	string s="for";
	i=0;
	while(cin>>n){
	  if(n!=9999){
		sum+=n;
		i++;
	  }
	   else
	     {   
	       cout<<double(sum)/i<<endl;
	     	sum=0;
	     	i=0;
	     }
	}
}
