#include<bits/stdc++.h>
using namespace std;
int main(){
	int celsius;
	float fahrenheit,temp;
	cout<<"Celsius"<<"\t\t\t"<<"fahrenheit"<<"\n";
	for(celsius=0;celsius<=100;celsius++)
	{
		if(celsius%10==0){
			temp=celsius;
			fahrenheit=(temp*9/5)+32;
			cout<<temp <<"\t\t\t"<<fixed<<setprecision(2)<<fahrenheit <<endl;
		}
	}
	return 0;
}
