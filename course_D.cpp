#include<iostream>
#include<algorithm>
using namespace std;
class employ{
	public:
	 explicit employ(string s1,string s2,int k)
	    :firstname(s1){
	    	lastname=s2;
	    	salary=max(k,0);
	    }   
	    void get1(){
	    	cout<<firstname<<' '<<lastname<<' ';
			cout<<(salary*12)<<endl;
	    }
	    void get2(){
	    	cout<<salary*2<<' '<<(salary*24)<<endl;
	    }
	private:
	  string firstname,lastname;
	  int salary;
};
int main(){
	int a,b,c,k;
	string s1,s2;
	while(cin>>s1>>s2>>k){
	  employ get(s1,s2,k);
	     get.get1();
	     get.get2();
	}
}
