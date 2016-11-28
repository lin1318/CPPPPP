#include<iostream>
#include<string>
using namespace std;
string s;
int n;
int fucksysu(int k){
   int i;
    if(k>n-1) return 1;
	if((s[k]<50||((s[k]==50&&(s[k+1]<=54))))&&k+1<n){
        return fucksysu(k+1)+fucksysu(k+2);
	   }
      else
       return fucksysu(k+1);
}
int main(){
	  cin>>s;
	   n=s.length();
	if(s.find('0')==-1)
	  cout<<fucksysu(0); 
} 
