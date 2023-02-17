#include<bits/stdc++.h>
using namespace std;
string randomLicencePlate()
{
	srand(time(0));
	int n=rand()%2+6;
	cout<<n<<"\n";
	string x,str1,str2;
	string a,b,y;
	if(n==6){
	srand(time(0));
	cout<<"Old License plate : ";
	for(int i=0;i<3;i++){
		char ch1=rand()%26+65;
		str1=str1+ch1;
		char ch2=rand()%10+48;
		str2=str2+ch2;
	}
	x=str1+str2;
	cout<<x<<"\n";
}
else{
	cout<<"New License plate : ";
	for(int i=0;i<4;i++){
		char ch3=rand()%10+48;
		a=a+ch3;
	}
	for(int i=0;i<3;i++){
		char ch4=rand()%26+65;
		b=b+ch4;
	}
	y=a+b;
	cout<<y;
   }
}
int main(){
	cout<<randomLicencePlate();
	return 0;
}
