#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int j;
	int f;
};
bool cmp(node a,node b){
	return a.j*b.f>b.j*a.f;
}
int main(){
	int i,j,k,n,m;
	node p;
	vector<node> a;
	while(cin>>m>>n){
		a.clear();
		if(n==-1) break;
		double sum=0.0;
		for(i=0;i<=n-1;i++){
			cin>>p.j>>p.f;
			p.j*=1000;
			a.push_back(p);
		} 
		sort(a.begin(),a.end(),cmp);
		for(i=0;i<n;i++)
		 if(a[i].f<=m){
		   	m-=a[i].f;
		   	sum+=a[i].j;
		}
		else{
			sum=sum+double(m)/a[i].f*a[i].j;
			break;
		}
	 //printf("%.3lf\n",sum);
	 sum=round(sum)/1000;
	cout<<fixed<<setprecision(3)<<sum<<endl;
	} 
}
