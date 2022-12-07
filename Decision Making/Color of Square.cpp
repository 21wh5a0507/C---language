#include<bits/stdc++.h>
using namespace std;
int main(){
	char j;
	int i;
	cin>>j>>i;
	if(j=='a' || j=='c'||j=='e'||j=='g'){
		if(i%2!=0){
			cout<<"square is black";
		}
		else{
			cout<<"sqare is white";
		}
	}
	else if(j=='b' || j=='d'||j=='f'||j=='h'){
		if(i%2==0){
			cout<<"square is black";
		}
		else{
			cout<<"sqare is white";
		}
	}
	return 0;
}
