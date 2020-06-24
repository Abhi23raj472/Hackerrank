#include<iostream>
using namespace std;
int main(){
	string str[]={"one","two","three","four","five","six","seven","eight","nine"};
	int n;
	cin>>n;
	for(int i=n;i<=n;i++){
		if(i<=9){
			cout<<str[i-1]<<endl;
		}
		else{
			if(i>=9){
				cout<<"Greater than 9"<<endl;
			}
		}
	}
	return 0;
}
