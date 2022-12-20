#include<bits/stdc++.h>
using namespace std;

bool isupper(char password)
{
	if(password>='A'&& password<='Z')
	return true;
	else
	return false;
}

bool islower(char password)
{
	if(password>='a'&&password<='z')
	return true;
	else
	return false;
}

bool isdigit(char password)
{
	if(password>='0'&&password<='9')
	return true;
	else
	return false;
}

bool checkPassword(string password){
	int length=password.length();
	int a,b,c,d;
	if(length>=8){
		for(int i=0;i<length;i++){
		    if(isupper(password[i]))
			    a=1;
		    else if(islower(password[i]))
			    b=1;
		    else if(isdigit(password[i]))
			    c=1;
			else
			    d=1; 
	    }
	    if(a==1 && b==1 && c==1 && d!=1 )
        	return true;
	    else
        	return false;
    }
    else
        return false;
}
int main(){
	string password;
	cout<<"Enter password : ";
	cin>>password;
	cout<<boolalpha<<checkPassword(password);
	return 0;
}
