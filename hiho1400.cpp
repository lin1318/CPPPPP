#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n,i,j,k,m,p;
	char c1,c2;
	int a[100][100];
	int s[100100];
	string st;
	cin>>n;
	cin>>st;
	cin>>m;
	memset(a,0,sizeof(a));
	for(i=1;i<=m;i++){
		cin>>c1>>c2;
		a[int(c1)-97][int(c2)-97]=1;
		a[int(c2)-97][int(c1)-97]=1;
	}
	memset(s,0,sizeof(s));
      for(i=0;i<=n-1;i++){
      	k=st[i]-'a';
      	if(a[k][k]==0) s[k]++;
        for(j=0;j<26;j++)
		if(a[k][j]==0&&k!=j) s[k]=max(s[j]+1,s[k]);
      }
    k=s[0];
    for(j=1;j<26;j++)
      k=max(k,s[j]);
      cout<<n-k<<endl;
} 
