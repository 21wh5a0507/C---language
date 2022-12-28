#include<bits/stdc++.h>
using namespace std;
string removeMysteryLength(string str){
	int n=str.length();
	for(int i=n-1;i>=0;i--){
		n--;
		if(n==stoi(str.substr(i)))
		   return str.substr(0,n);
	}
	return "error";	
}
int main(){
	string str;
	cout<<"enter string of alpha-numeric characters with the length appended : ";
	cin>>str;
	cout<<removeMysteryLength(str);
	return 0;
}
