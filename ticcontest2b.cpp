#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int a[8][2];
int b[10000][2];
int tag[1000][1000];
string bb[1000][1000];
int sum,n,m;
void pp(int x,int y,int tot){
	int k=0,i,x1,y1;
   if(sum==1) return;
  if(tot!=n*m+1){
    for(i=0;i<=7;i++){
    	if(sum==1) return;
      x1=x+a[i][0];y1=y+a[i][1];
      if((x1>0)&&(y1>0)&&(x1<=n)&&(y1<=m))
         if(tag[x1][y1]==0){
         	b[tot][0]=x1;
			b[tot][1]=y1;
         	tag[x1][y1]=1;
         	pp(x1,y1,tot+1);
         	tag[x1][y1]=0;
         }
    }
   }
   else
    sum=1;
}
int main(){
	int i,j,k,t;
	cin>>t;k=0;
	a[0][0]=-1;a[0][1]=-2;
	a[1][0]=1;a[1][1]=-2;
	a[2][0]=-2;a[2][1]=-1;
	a[3][0]=2;a[3][1]=-1;
	a[4][0]=-2;a[4][1]=1;
	a[5][0]=2;a[5][1]=1;
	a[6][0]=-1;a[6][1]=2;
	a[7][0]=1;a[7][1]=2;
	bb[5][5]="A1B3A5C4A3B1D2E4C5A4B2D1C3B5D4E2C1A2B4D5E3C2E1D3E5";
	bb[4][6]="A1B3C1A2B4C2D4E2F4D3E1F3D2B1A3C4B2A4C3E4F2D1E3F1";
	bb[3][7]="A1B3D2F1G3E2G1F3E1G2E3C2A3B1C3A2C1D3B2D1F2";
	bb[3][8]="A1B3C1A2C3D1B2D3E1G2E3C2A3B1D2F1H2F3G1E2G3H1F2H3";
    bb[5][4]="A1B3A5C4D2B1A3B5D4C2B4A2C1D3C5A4B2D1C3D5";
	bb[4][5]="A1B3C1A2B4D3E1C2D4E2C3A4B2D1E3C4A3B1D2E4";
	bb[5][3]="impossible";
	bb[3][4]="A1C2A3B1D2B3C1A2C3D1B2D3";
	bb[4][3]="A1B3C1A2B4C2A3B1C3A4B2C4";
    bb[4][4]="impossible";
    bb[8][3]="A1B3C1A2B4C2A3B1C3A4B2C4A5B7C5A6B8C6A7B5C7A8B6C8";
    bb[7][3]="A1B3C1A2C3B1A3C2B4A6C7B5A7C6A5B7C5A4B2C4B6";
    bb[6][3]="impossible";
    bb[6][4]="A1B3A5C6D4B5D6C4D2B1A3C2B4A2C1D3B2D1C3D5B6A4C5A6";
    bb[3][5]="impossible";
    bb[3][3]="impossible";
    bb[4][4]="impossible";
    bb[3][6]="impossible";
    bb[1][1]="A1"; 
    bb[3][2]="impossible";
    bb[2][3]="impossible";
    bb[3][3]="impossible";
	while(t--){
		k++;
		cin>>n>>m;
		if(n==2||m==2){
			 cout<<"Scenario #"<<k<<":"<<endl;
			 cout<<"impossible"<<endl;
			 continue;
		}
		if(n==1&&m!=1){
			cout<<"Scenario #"<<k<<":"<<endl;
			cout<<"impossible"<<endl;
		} 
		  if(bb[n][m]!=""){
			cout<<"Scenario #"<<k<<":"<<endl;
			cout<<bb[n][m]<<endl;
			continue;}
		  memset(tag,0,sizeof(tag));
		     sum=0;
		   for(i=1;i<=m;i++){
		     for(j=1;j<=n;j++)
		      { 
			    memset(tag,0,sizeof(tag));
			    tag[j][i]=1;
			    b[1][0]=j;
			    b[1][1]=i;
		        pp(j,i,2);
		        if(sum==1) break;
		      }
		      if(sum==1) break;
		 }
	    cout<<"Scenario #"<<k<<":"<<endl; 
	    if(sum==0) cout<<"impossible"<<endl;
	    else
	     for(i=1;i<=n*m;i++)
	       cout<<char(b[i][1]+64)<<b[i][0];
	} 
}
