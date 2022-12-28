#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
	for(int i=0;i<str.length();i++){
		for(int j=str.length()-1;j>0;j--){
			if(str[i]==str[j])
			   return true;
			else
			   return false;   
		}
	}
}
int main(){
	string str;
	cout<<"enter a string : ";
	cin>>str;
	cout<<boolalpha<<isPalindrome(str);
	return 0;
}
