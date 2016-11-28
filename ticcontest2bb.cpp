#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int p,q;
string path;
int vis[27][27];
int dx[]={-1,1,-2,2,-2,2,-1,1};
int dy[]={-2,-2,-1,-1,1,1,2,2};
int dfs(int x,int y,int cnt){
vis[x][y]=1;
if(cnt==p*q){
path+='1'+x;
path+='A'+y;
return 1;
}
for(int i=0;i<8;++i){
int _x=x+dx[i];
int _y=y+dy[i];
if(_x<0||_y<0||_x>=p||_y>=q||vis[_x][_y]) continue;
if(dfs(_x,_y,cnt+1)){
path+='1'+x;
path+='A'+y;
return 1;
}
}
vis[x][y]=0;
return 0;
}
int main(){
int t,kcase=0;
cin>>t;
while(t--){
cin>>p>>q;
cout<<"Scenario #"<<++kcase<<":"<<endl;
memset(vis,0,sizeof(vis));
path="";
if(dfs(0,0,1)){
reverse(path.begin(),path.end());
cout<<path<<endl<<endl;
}
else cout<<"impossible"<<endl<<endl;
}
return 0;
}

