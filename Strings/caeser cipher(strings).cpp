#include<bits/stdc++.h>
using namespace std;

void encryptWithCaesar(string str,int shiftamount){
	string str2;
	int a;
	for(int i=0;i<str.length();i++){
		if((str[i]>='A'&&str[i]<='Z') )
		{
	    a=(str[i]-'A'+shiftamount)%26+'A';
	    str2+=a;
	    }
	    else if(str[i]>='a'&&str[i]<='z')
	    {
	    	a=(str[i]-'a'+shiftamount)%26+'a';
	        str2+=a;
		}
	    else{
	    	str2+=str[i];
		}
	}
	cout<<str2;
}
int main(){
	string str;
	int shiftamount;
	cout<<"enter a string : ";
	cin>>str;
	cout<<"enter key : ";
	cin>>shiftamount;
	encryptWithCaesar(str,shiftamount);
	return 0;
}
