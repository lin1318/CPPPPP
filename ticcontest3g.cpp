#include<iostream>
using namespace std;
string a[1000];
int main(){
	string s1,s2;
	int i,tot,k,j,q;
	 while(getline(cin,s1)){
	 	tot=0;
	 	s2="";k=0;
	 	for(i=0;i<s1.length();i++){
	 	   if(((s1[i]>='A')&&(s1[i]<='Z'))||((s1[i]>='a')&&(s1[i]<='z'))) 
			   {
			   	  k=1;
			   	  s2=s2+s1[i];
			   }
			 else
			   if(k==1){
			   	q=0;
			   	for(j=1;j<=tot;j++)
			   	  if(a[j]==s2) {
			   	  	q=1;
			   	  	break;
			   	  }
			   	 if(q==0){
			   	 	cout<<s2<<endl;
			   	 	tot++;
			   	 	a[tot]=s2;
			   	 }
			   	 k=0;
			   	 s2="";
			   }	
	 	}
	 	     if(k==1){
	 		   	q=0;
			   	for(j=1;j<=tot;j++)
			   	  if(a[j]==s2) {
			   	  	q=1;
			   	  	break;
			   	  }
			   	 if(q==0){
			   	 	cout<<s2<<endl;
			   	 	tot++;
			   	 	a[tot]=s2;
			   	 	s2="";
			   	 }
	     	}
	 }
}
