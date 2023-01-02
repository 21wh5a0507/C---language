#include<bits/stdc++.h>
using namespace std;
string reverseWords(string str){
	int n=str.length();
	string final,temp;
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
		final=temp+" "+final;
		temp=" ";
	    }
	    else
		{
	    	temp=temp+str[i];
		}
	}
	cout<<temp<<final;
}
int main(){
	string str;
	cout<<"enter a string : ";
	getline(cin,str); 
	reverseWords(str);
	return 0;
}
