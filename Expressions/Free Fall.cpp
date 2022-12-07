#include<bits/stdc++.h>
using namespace std;
int main(){
    int distance,final_speed,initial_speed=0;
	float acceleration=9.8;
	cout<<"enter distance: ";
	cin>>distance;
	final_speed=(sqrt((initial_speed)^2)+(2*acceleration*distance));
	cout<<final_speed;
	return 0;
}
