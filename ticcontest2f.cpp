#include<iostream>
#include<cstring>
using namespace std;
int a[8][2];
char b[1000][1000];
int tag[1000][1000];
int sum,n,m;
void pp(int x,int y){
	int k=0,i,x1,y1;
    for(i=0;i<=7;i++){
      x1=x+a[i][0];y1=y+a[i][1];
      if((x1>0)&&(y1>0)&&(x1<=n)&&(y1<=m))
         if(b[x1][y1]=='@'&&tag[x1][y1]==0){
         	k=1;
         	tag[x1][y1]=1;
         	pp(x1,y1);
         }
    }
}
int main(){
	int i,j,k,t;
	a[0][0]=-1;a[0][1]=1;
	a[1][0]=-1;a[1][1]=0;
	a[2][0]=-1;a[2][1]=-1;
	a[3][0]=0;a[3][1]=-1;
	a[4][0]=1;a[4][1]=1;
	a[5][0]=1;a[5][1]=0;
	a[6][0]=1;a[6][1]=-1;
	a[7][0]=0;a[7][1]=1;
	while(cin>>n>>m){
		if(n==0) return 0;
		memset(tag,0,sizeof(tag));
		for(i=1;i<=n;i++)
		  for(j=1;j<=m;j++)
		     cin>>b[i][j];
		     sum=0;
		   for(i=1;i<=n;i++)
		     for(j=1;j<=m;j++)
		     if(tag[i][j]==0&&b[i][j]=='@'){
		       pp(i,j);
		       sum++;}
	    cout<<sum<<endl;
	}
}
