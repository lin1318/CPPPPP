#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 
char ss[1000];
int sima(int l,int r,char c){
  int i,k=-1;
  for(i=l;i<=r;i++)
  if(ss[i]==c){
  	k=i;
  	break;
  }
  return k;
}
long long dalao(int l,int r){
	int i,j,k;
	k=sima(l,r,'+');
	  if(k!=-1)
	    return dalao(l,k-1)+dalao(k+1,r);
	k=sima(l,r,'*');
	 if(k!=-1)
	   return dalao(l,k-1)*dalao(k+1,r);
	 k=int(ss[l])-48;
	for(i=l+1;i<=r;i++)
	   k=k*10+int(ss[i])-48;
	return k;   
}
int main(){
	long long i,j,k,n,m;
	 scanf("%s",ss);
	 printf("%lld",dalao(0,strlen(ss)-1));
	return 0;
} 
