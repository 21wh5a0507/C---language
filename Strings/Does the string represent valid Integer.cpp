#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s,int n)
{
for(int i=n;i<s.length();i++)
{
if(s[i]>='0'&&s[i]<='9'||s[i]==' ')
{
continue;
}
else
{
return false;
}
}
return true;
}
void isValid(string str,int a)
{
if(isInteger(str,a))
{
cout<<"The string represents integer";
}
else
{
cout<<"The string doesnot represents integer";
}
}
int main()
{
string str;
cout<<"Enter string:";
getline(cin,str);
if(str.length()>=1)
{
if(str[0]=='+'||str[0]=='-'||str[0]==' ')
{
int a=1;
isValid(str,a);
}
else
{
int a=0;
isValid(str,a);
}
}
else
{
cout<<"Enter string of atleast length 1";
}
return 0;
}


