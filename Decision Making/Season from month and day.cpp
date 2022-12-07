#include<bits/stdc++.h>
using namespace std;
int main()
{
	string month;
	int day;
	cout<<"enter month and day :";
	cin>>month>>day;
	if(month=="january" || month=="february"){
		cout<<"Spring";
	}
	else if((month=="december" && day>21) ||(month=="march" && day<20)){
		cout<<"Spring";
	}
	if(month=="april" || month=="may"){
		cout<<"Summer";
	}
	else if((month=="march" && day>20) ||(month=="june" && day<22)){
		cout<<"Summer";
	}
	if(month=="july" || month=="august"){
		cout<<"Fall";
	}
	else if((month=="june" && day>21) ||(month=="september" && day<23)){
		cout<<"Fall";
	}
	if(month=="october" || month=="november"){
		cout<<"Winter";
	}
	else if((month=="september" && day>22) ||(month=="december" && day<22)){
		cout<<"Winter";
	}
	return 0;
}
