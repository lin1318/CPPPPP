#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int max1=0,n,m;
int a[10000][2];
char s[100][100];
int tag[100];
int ax[4]={1,-1,0,0};
int ay[4]={0,0,1,-1};
  void pp(int x,int y,int k){
  	int i,j,x1,y1;
        for(i=0;i<=3;i++){
        	x1=x+ax[i];
        	y1=y+ay[i];
        if(x1>0&&x1<=n&&y1>0&&y1<=m&&tag[s[x1][y1]-64]==0){
                a[k+1][0]=x1;
				a[k+1][1]=y1;
				tag[s[x1][y1]-64]=1;
				pp(x1,y1,k+1);        	
				tag[s[x1][y1]-64]=0;   
            }
        }	
    max1=max(max1,k);
  }
int main(){
	int i,j,k;
	while(cin>>n>>m){
		for(i=1;i<=n;i++)
		  for(j=1;j<=m;j++)
		    cin>>s[i][j];
		  	memset(tag,0,sizeof(tag));
		  	a[1][0]=1;a[1][1]=1;
		  	tag[s[1][1]-64]=1;
		  	pp(1,1,1);
		cout<<max1<<endl;
	}
}
