#include<iostream>
#include<string>
#include "gradebook.h"
using namespace std;
class gradebook{
	public:
	void gradebook::setname(string s) 
	{
		 getname=s;
	}
	string gradebook::getyouname() const
	{
		return getname;
	}
	void gradebook::display() const{
		cout<<"welcome to \n"<<getyouname()<<'!'<<endl;
	}
   private:string getname; 
}; 
