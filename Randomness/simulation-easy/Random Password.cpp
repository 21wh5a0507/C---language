#include<bits/stdc++.h>
using namespace std;
string randomPassword(){
	string str;
	srand(time(0));
	int a=rand()%4+7;
	for(int i=0;i<a;i++){
		char ch=rand()%94+33;
		str=str+ch;
	}
	return str;
}
int main(){
	cout<<randomPassword();
	return 0;
}
