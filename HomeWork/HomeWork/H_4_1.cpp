#include<iostream>
class safearray{
public:
	safearray(int a,int b){
		c[a]=b;
		if(a>=100){
			printf("数组越界");
		}
	}
private:
	int c[100];
};
int main(){
	safearray e(101,4);
}