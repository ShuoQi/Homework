#include<iostream>
using namespace std;
double Convert_C(double x){
	double a;
	a=(x-32)*5/9;
	return a;
}
double Convert_F(double x){
	double a;
	a=(9*x/5)-32;
	return a;
}
