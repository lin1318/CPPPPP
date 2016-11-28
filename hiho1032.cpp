#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring> 
using namespace std;
int a[2000050];
char str[2000050],s[2000050];
int main(){
	int i,j,k1,k,mx,id,n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",str);
		k=strlen(str);
		s[0]='$';s[1]='#';
	  for(i=0;i<k;i++){
	      s[i*2+2]=str[i];
           s[i*2+3]='#';
    }
     k=k*2+2;
     str[k]=0;
	   id=0;mx=0;a[0]=1;
	   for(i=1;i<=k-1;i++){
	     if(mx>i)
	       a[i]=min(a[id*2-i],mx-i);
	       else
	         a[i]=1;
	     while(i-a[i]>=0&&i+a[i]<k&&s[i-a[i]]==s[i+a[i]]) a[i]++;
	      if(i+a[i]>mx){
	      	mx=i+a[i];
	      	id=i;
	       }
		}
	   j=a[0];
	     for(i=1;i<=k-1;i++)
	            j=max(j,a[i]);
	    printf("%d\n",j-1);
	}  
}
