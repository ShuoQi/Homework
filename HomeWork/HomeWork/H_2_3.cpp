#include<iostream>
using namespace std;
int combination(int x,int y){
	int a,b,c;
	if(x>=y){
		a=x;
		b=1;
		for(int i=1;i<y;i++){
			a=a*(x-i);
		}
		for(int j=1;j<=y;j++){
			b=b*j;
		}
		c=a/b;
	}
	else{
			if(y>=x){
		a=y;
		b=1;
		for(int i=1;i<x;i++){
			a=a*(y-i);
		}
		for(int j=1;j<=x;j++){
			b=b*j;
		}
		c=a/b;
		}
	}
	return c;
}