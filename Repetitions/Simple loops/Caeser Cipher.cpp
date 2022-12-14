#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,str2;
	int shiftamount,a;
	cout<<"enter a string : ";
	cin>>str;
	cout<<"enter key : ";
	cin>>shiftamount;
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
	return 0;
}
