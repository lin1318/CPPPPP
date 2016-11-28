#include<iostream>  
#include<cstring>  
using namespace std;  
int inf=9999999;  
int dis[250],map[250][250];  
int vis[250];  
int n,m;  
int dij(int x,int y)  
{  
    for(int i=0; i<n; i++)  
        dis[i]=map[x][i];  
    memset(vis,0,sizeof(vis));  
    vis[x]=1;  
    dis[x]=0;   
    int k=x;  
    for(int i=1; i<n; i++)  
    {  
        int mmax=inf;  
        for(int j=0; j<n; j++)    
        {  
            if(!vis[j]&&dis[j]<mmax)  
            {  
                mmax=dis[j];  
                k=j;  
            }  
        }  
        vis[k]=1;  
        for(int j=0; j<n; j++)   
        {  
            if(!vis[j]&&dis[j]>dis[k]+map[k][j])  
                dis[j]=dis[k]+map[k][j];  
        }  
    }  
    if(dis[y]==inf) return -1;  
    else return dis[y];  
}  
int main()  
{  int a,b,v,d,f,num;
    while(cin>>n>>m)  
    {    
        for(int i=0; i<=n; i++)  
            for(int j=0; j<=n; j++)  
                map[i][j]=map[j][i]=inf;  
        for(int i=0; i<m; i++)  
        {  
            cin>>a>>b>>v;  
            if(map[a][b]>v)  
                map[a][b]=map[b][a]=v;  
        }  
        cin>>d>>f;  
        num=dij(d,f);  
        cout<<num<<endl;  
    }  
    return 0;  
}  
