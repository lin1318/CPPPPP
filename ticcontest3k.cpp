#include<iostream>
#include<cstring>
using namespace std;
int edx,edy,edt;
int ax[4]={0,0,1,-1};
int ay[4]={1,-1,0,0};
char a[105][105][2];
int tag[105][105][2];
int s[100000][5];
int main(){
	int i,j,k,n,m,p,sn,t,tim,x,y,dd;
	cin>>t;
	while(t--){
		cin>>n>>m>>tim;
		dd=0;
		for(i=1;i<=n;i++)
		  for(j=1;j<=m;j++){
		  	cin>>a[i][j][0];
		  	if(a[i][j][0]=='#')
		  	  dd++;
	        if(a[i][j][0]=='P'){
		        edx=i;
				edy=j;
				edt=0;	
		      }	
	     }
		for(i=1;i<=n;i++)
		  for(j=1;j<=m;j++){
		    cin>>a[i][j][1];
		    if(a[i][j][0]=='#')
		      dd++;
		    if(a[i][j][1]=='P'){
		        edx=i;
				edy=j;	
				edt=1;
		    }
		  }
		  k=0;
		  memset(tag,0,sizeof(tag));
		  tag[1][1][0]=1; 
		p=1;sn=1;s[1][0]=1;s[1][1]=1;s[1][2]=0;s[1][3]=0;s[1][4]=0;
		while(p<=sn){
			if(s[p][0]==edx&&s[p][1]==edy&&s[p][2]==edt){
				int q=s[p][3];
				if(q>tim) {
					cout<<"NO"<<endl;
					break;
				}
				else{
				 cout<<"YES"<<endl;
				 break;}
			}
		   if(a[s[p][0]][s[p][1]][s[p][2]]=='#'){
		   	    if(a[s[p][0]][s[p][1]][1-s[p][2]]!='#'&&a[s[p][0]][s[p][1]][1-s[p][2]]!='*')
		   	    if(!tag[s[p][0]][s[p][1]][1-s[p][2]])
		   	    {
		   	     sn++;
		   	     s[sn][0]=s[p][0];
			   	 s[sn][1]=s[p][1];
			   	 s[sn][2]=1-s[p][2];
			   	 s[sn][3]=s[p][3];
			   	 s[sn][4]=p;
		   	    }
		   }	
          else
		    for(i=0;i<=3;i++)
			{
			   x=ax[i]+s[p][0];
			   y=ay[i]+s[p][1];
			  if(x>0&&x<=n&&y>0&&y<=m&&a[x][y][s[p][2]]!='*'&&tag[x][y][s[p][2]]==0){
			   	  sn++;
			   	  s[sn][0]=x;
			   	  s[sn][1]=y;
			   	  s[sn][2]=s[p][2];
			   	  s[sn][3]=s[p][3]+1;
			   	  s[sn][4]=p;
				}	 
			}   	 
		  tag[s[p][0]][s[p][1]][s[p][2]]=1;
		  p++; 
		}
	}
}
