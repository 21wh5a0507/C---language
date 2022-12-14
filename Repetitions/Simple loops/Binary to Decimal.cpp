#include<bits/stdc++.h>
using namespace std;
int main(){
	string binary_number;
	int dec,sum=0,a=0;
	cout<<"enter a binary number : ";
	cin>>binary_number;
	for(int i=binary_number.length()-1;i>=0;i--){
		if(binary_number[i]=='1'){
			dec=pow(2,a);
			a++;
			sum=sum+dec;
		}
		else if(binary_number[i]=='0'){
			a++;
			
		}
		else{
			cout<<"please enter correct binary number";
			return 0;
		}
	}
	cout<<sum;
	return 0;
}
