#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float s1,s2,s3,s,Area;
	cout<<"Enter S1 value : ";
	cin>>s1;
	cout<<"Enter S2 value : ";
	cin>>s2;
	cout<<"Enter S3 value : ";
	cin>>s3;
	s=(s1+s2+s3) / 2;
	Area= sqrt(s * (s-s1) * (s-s2) * (s-s3));
	cout<<"AREA OF A TRIANGLE IS "<< Area;
	return 0;
}
