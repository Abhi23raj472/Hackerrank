#include<iostream>
using namespace std;
int main(){
	//Problem-Unique number 2N+1
	// Given a list of numbers where every numbers occurs twice except one
	int n;
	cin>>n;
	int no;
	int ans=0;
	//bitwise XOR 	OPERATOR TO SOLVE
	//Helped  to not any storage
	for(int i=0;i<n;i++){
		cin>>no;
		ans=ans^no;
		
	}
	cout<<ans<<endl;
	return 0; 
}

