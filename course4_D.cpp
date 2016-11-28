#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int i,j,k;
	while(cin>>s){
	  k=0;
	  j=s.length()-1;
	  for(i=0;i<2;i++)
	    if(s[i]!=s[j-i])
	      k=1;
	    if(k==0)
	      cout<<"true"<<endl;
	    else
	     cout<<"false"<<endl; 
	}
}
