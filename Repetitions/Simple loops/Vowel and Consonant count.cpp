#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int vowelcount=0,consonantcount=0;
	cout<<"enter a string : ";
	cin>>str;
	for(int i=0;i<str.length();i++){
		char c=tolower(str[i]);
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			vowelcount++;
		}
		else{
			consonantcount++;
		}
	}
	cout<<"Vowels count :"<<vowelcount<<endl;
	cout<<"Consonant count :"<<consonantcount;
	return 0;
}
