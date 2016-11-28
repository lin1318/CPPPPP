#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,j,k,n,m;
	string s;
	cin>>s;
    n=s.length();
    cout<<n;
	k=s[0]-48;    
   for(i=1;i<n;i++)
     k=k+s[i]-48;
     cout<<" "<<k<<endl;
}
