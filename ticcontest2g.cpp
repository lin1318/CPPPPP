#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
    int i,j,k,n,m,p;
    while(cin>>n>>m){
    	p=0;
    	getline(cin,s);
    	for(i=1;i<=n;i++){
    		getline(cin,s);
    	   if(s.find('C')!=-1) p=1;
    	   if(s.find('M')!=-1) p=1;
    	   if(s.find('Y')!=-1) p=1;
       }
      if(p==0)
        cout<<"#Black&White"<<endl;
    else
     cout<<"#Color"<<endl;
    }
}
