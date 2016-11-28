#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[100][100];
int fa[100];
struct node{
	int x,y,l;
//	bool operator<(const node &e) const{
//	   return l<e.l;}
};
bool cmp(node a,node b){
	return a.l<b.l;
}
node b[100];
int tag[100];
 int finding(int x){
 	return fa[x]==x?x:finding(fa[x]);
 }
int main(){
	char c1,c2;
	int i,j,k,n,m,mm,p,x,y;
	while(cin>>n&&n){
		memset(a,0,sizeof(a));
		memset(tag,0,sizeof(tag));
		m=0;
		for(i=1;i<=n-1;i++){
			cin>>c1>>mm;
            x=c1-64;
			for(j=0;j<=mm-1;j++)
			{
				 cin>>c2>>k;
				 y=c2-64;
				 a[x][y]=k;
				 a[y][x]=k;
				 b[m+j].x=x;
				 b[m+j].y=y;
				 b[m+j].l=k;
			}
			m+=mm;			
		}
	  for(i=1;i<=n;i++)
	    fa[i]=i;
		sort(b,b+m,cmp);p=0;k=0;
		for(i=0;i<m;i++)
	   for(i=0;i<=m-1;i++){
	   	   x=finding(b[i].x);
	   	   y=finding(b[i].y);
	   	  if(x!=y){
	   	  	fa[x]=y;
	   	  	 if(tag[b[i].x]==0){
	   	  	 	tag[b[i].x]=1;
	   	  	 	p++;
	   	  	 } 
	   	  	 if(tag[b[i].y]==0){
	   	  	 	tag[b[i].y]=1;
	   	  	 	p++;
	   	  	 }
	   	  	k+=b[i].l;
	   	  	if(p==n) break;
	   	  }
	   }
	    cout<<k<<endl;
	}
}
