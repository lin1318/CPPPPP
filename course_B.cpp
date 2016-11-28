#include<iostream>
#include<algorithm> 
using namespace std;
class Invoice{
	public:
	  explicit Invoice(string a,string b,int c,int d)
	    :name(a){
	    	name1=b;
	    	quantity=max(c,0);
	    	price=max(d,0);
	    }
	  void print(){
	  	cout<<name<<endl;
	  	cout<<name1<<endl;
	  	cout<<quantity<<endl;
	  	cout<<price<<endl;
	  	cout<<quantity*price<<endl;
	  }
	private:
	   string name,name1;
	   int quantity,price;   
};
int main(){
	string s,ss;
	int i,j,k;
	while(cin>>s){
		cin>>ss;
		cin>>j>>k;
		Invoice kk(s,ss,j,k);
		kk.print();
	}
}
