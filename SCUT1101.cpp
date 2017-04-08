#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long s[350][350];
string s1,s2,s3;
int n1,n2;
int pp(int j,int k){
	int m2,i,m1;
	if(j==n1)
	 return 0;
	if(k==n2)
	 return 0;
	 if(s[j][k]==-1){
	 	m1=pp(j,k+1);
	 	for(i=j;i<n1;i++)
	 	  if(s1[i]==s2[k]){
	 	  	m2=1+pp(i+1,k+1);
	 	  	m1=max(m1,m2);
	 	  }
	 	  s[j][k]=m1;
	 }
	 return s[j][k];
}
int main(){
	int i,j,k,m,sum;
	while(cin>>s1>>s2){
		memset(s,-1,sizeof(s));
		if(s1.size()<s2.size()){
			s3=s1;s1=s2;s2=s3;
		}
		n1=s1.size();n2=s2.size();
		k=pp(0,0);
		cout<<n1-k<<endl;
	}
}