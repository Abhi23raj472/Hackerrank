#include<iostream>
using namespace std;

//Scope-> Defined for variable(acessible -> lifetiem and visibility)
//Local Scope
//Global Scope

int x=100;
int main(){
	
	int x=10;
	cout<<x<<endl;
	
	for(int x=0;x<=5;x++){
		cout<<"Loop scope"<<x<<endl;
	}
	cout<<"Local X"<<x<<endl;   //local x
	cout<<"Global X"<<::x<<endl;    //global x
	//both local and global value of x 
}
