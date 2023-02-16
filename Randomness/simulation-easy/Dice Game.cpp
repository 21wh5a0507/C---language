#include<bits/stdc++.h>
using namespace std;

int rollDieFor6()
{
	int count;
	srand(time(0));
	for(int i=0;i<10;i++){
	int a=rand()%6+1;
	cout<<a<<"\n";
	if(a==6)count++;
    }
    cout<<"number of times 6 appeared : ";
	return count;
}
int main(){
	cout<<rollDieFor6();
	return 0;
}
