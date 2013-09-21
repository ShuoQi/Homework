#include<iostream>
using namespace std;
int Power(int x,int y){
	int a;
	if(y==1){
		a=x;
	}
	else{
		a=x*Power(x,y-1);
	}
	return a;
}