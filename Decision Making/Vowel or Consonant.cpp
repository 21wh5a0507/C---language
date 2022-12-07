#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cout<<"enter character: ";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'){
		cout<<"it is a vowel";
	}
	else if(ch=='y'){
		cout<<"sometimes y is a vowel and sometimes y is a consonant";
	}
	else{
		cout<<"consonant";
	}
	return 0;
}
