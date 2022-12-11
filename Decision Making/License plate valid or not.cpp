#include<bits/stdc++.h>
using namespace std;
int main(){
	string license_plate;
	cout<<"enter license plate : ";
	cin>>license_plate;
	int length=license_plate.length();
if(length==6)
{
	if((license_plate[0]>='A'&& license_plate[0]<='Z')&&(license_plate[1]>='A'&& license_plate[1]<='Z')&&(license_plate[2]>='A'&& license_plate[2]<='Z')&&(license_plate[3]>='0'&& license_plate[3]<='9')&&(license_plate[4]>='0'&& license_plate[4]<='9')&&(license_plate[5]>='0'&& license_plate[5]<='9'))
	{
		cout<<"license plate is older style, it is valid";
	}
	else
	{
		cout<<"license plate is not valid";
	}
}
else if(length==7)
{
	if((license_plate[0]>='0'&& license_plate[0]<='9')&&(license_plate[1]>='0'&& license_plate[1]<='9')&&(license_plate[2]>='0'&& license_plate[2]<='9')&&(license_plate[3]>='0'&& license_plate[3]<='9')&&(license_plate[4]>='A'&& license_plate[4]<='Z')&&(license_plate[5]>='A'&& license_plate[5]<='Z')&&(license_plate[6]>='A'&& license_plate[6]<='Z'))
	{
	
		cout<<"license plate is new style, it is valid";
	}
	else
	{
		cout<<"license plate is not valid";
	}
}
else
{
	cout<<"license plate is invalid";
}
	return 0;
}
