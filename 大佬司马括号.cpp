#include<iostream>
#include<string>
using namespace std;
string s,ss;
int main(){
  int k,p;
  string s;
  char c;
 string ss="(){}[]";
   p=-1;
   while(cin>>c){
   	  k=ss.find(c);
   	  if(k%2==0){
   	  	p++;
   	    s[p]=c;
   	  }
   	else
   	 if(ss[k-1]==s[p])
   	   p--;
   	else
   	 break;
     }
  if(p==-1) cout<<"True"<<endl;
    else
       cout<<"False"<<endl; 
} 
