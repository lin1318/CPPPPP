#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int x[10000],y[10000];
	int i,j,k,t;
	t=1;
	  while(cin>>x[t]>>y[t]){
	  	if(x[t]==0&&y[t]==0){
	  	   	  t--;
	  	   	  sort(x+1,x+t+1);
	  	   	  sort(y+1,y+t+1);
	  	   	  cout<<x[1]<<' '<<y[t]<<endl;
	  	   	  cout<<x[t]<<' '<<y[1]<<endl;
	  	   	  t=1;
	  	   	}
	  	   else
	  	     t++;
	  }
}
