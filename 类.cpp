#include<iostream>
#include<string>
using namespace std;
class gradebook{
	public:
	void setname(string s) 
	{
		 getname=s;
	}
	string getyouname() const
	{
		return getname;
	}
	void display() const{
		cout<<"welcome to \n"<<getyouname()<<'!'<<endl;
	}
   private:string getname; 
};
int main(){
	gradebook mygradebook;
	string s;
	cout<<"Initial course name is\n"<<endl; 
	cout<<"Enter your course name:"<<endl;
	getline(cin,s);
	mygradebook.setname(s);
	mygradebook.display();
} 
