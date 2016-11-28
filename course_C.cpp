#include<iostream>
using namespace std;
class Date{
	public:explicit Date(int j,int k,int l)
	  :month(j){
	  	 day=k;
	  	 year=l;
	  	if(month>12||month<0)
	  	  month=1;
	  }
	  	void displaydata(){
	  	   cout<<month<<"/"<<day<<"/"<<year<<endl;
	  	}
	  private:
	  	int year,month,day;
};
int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
	  Date timing(a,b,c);
	  timing.displaydata();	
	}
}
