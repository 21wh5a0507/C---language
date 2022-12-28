#include<bits/stdc++.h>
using namespace std;
int decode(char ch){
	cout<<"ASCII code for given character is : " <<int(ch)<<"\n";
}
void encode(int a){
	cout<<"Character for given ASCII code is : "<<char(a)<<"\n";
}
int main(){
	char ch;
	cout<<"enter a character : ";
	cin>>ch;
	decode(ch);
	int a;
	cout<<"enter number : ";
	cin>>a;
	encode(a);
	return 0;
}
