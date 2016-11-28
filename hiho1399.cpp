#include<iostream>
#include<cstring> 
#include<cmath>
using namespace std;
int main(){
	long long x,sum,n;
	cin>>n;
	sum=0;
    while(n--){
    	cin>>x;
    	if(x%2==0) sum++;
    	else
    	 sum--;
    }
    cout<<abs(sum)<<endl;
}
