#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string s;
	long long i,sum;
	while(cin>>s){
		if(s=="0")
		 break;
		 sum=0;
		 for(i=0;i<s.length();i++)
		 	 sum=sum+s[i]-48;
		 while(s.length()>=2){
		 	sum=0;
		 	for(i=0;i<s.length();i++)
		 	 sum=sum+s[i]-48;
		 	 if(sum>=10){
		 	 	s="";
		 	 	while(sum>0){
		 	 		s=s+char(sum%10+48);
		 	 		sum=sum/10;
		 	 	}
		 	}
		 	 	else
		 	 	 break;
		 }
		cout<<sum<<endl;
	}
}
