#include<iostream>

using namespace std;

struct Student {
	char name[20];
	int number ;
	double grade;
}stuudents[1000];

int length=-1;

void list();

void add();

void del();

void wri();

int main(){
	int a;
	do{
		cout<<"*************************Bar*************************"<<endl;
		cout<<"1.Students'list"<<endl;
		cout<<"2.Add student"<<endl;
		cout<<"3.Delete student"<<endl;
		cout<<"4.Write in grade"<<endl;
		cout<<"5.exit"<<endl;
		cout<<"Enter the number";
		cin>>a;
		cout<<"\n";
		switch(a){
			case 1:list();
				break;
			case 2:add();
				break;
			case 3:del();
				break;
			case 4:wri();
				break;
			case 5:return 0;
				break;
			default :cout<<"Enter error"<<endl;
		}
	}while(1);
}
void list(){
	if(length==-1)
		cout<<"Not write in student"<<endl;
	for(int i=0;i<=length;i++){
		cout<<stuudents[i].name<<"\t"<<stuudents[i].number<<endl;
	}
}
void add(){
	++length;
	cout<<"Please write student'name"<<endl;
	cin>>stuudents[length].name;
	cout<<endl;
	cout<<"Please write student'number"<<endl;
	cin>>stuudents[length].number;
	cout<<endl;
}
void del(){
	int b;
	char c[20];
	int d;
	int e,f;
	cout<<"6.Delete by name"<<endl;
	cout<<"7.Delete by number"<<endl;
	cin>>b;
	cout<<endl;
	switch(b){
		case 6:	cout<<"Enter name";
				cin>>c;
				for(int i=0;i<=length;i++){
					if(stuudents[i].name==c){
						e=i;
					}
				}
				for(int i=e;i<length;i++){
					stuudents[i]=stuudents[i+1];
				}
				--length;
				break;
		case 7:	cout<<"Enter number";
				cin>>d;
				for(int i=0;i<=length;i++){
					if(stuudents[i].number==d){
						f=i;
					}
				}
				for(int i=f;i<length;i++){
					stuudents[i]=stuudents[i+1];
				}
				--length;
				break;
		default:cout<<"Enter error"<<endl;
	}
}
void wri(){
	int a;
	int b;
	int c;
	cout<<"Input the number"<<endl;
	cout<<"Input the number";
	cin>>a;
	for(int i=0;i<=length;i++){
		if(stuudents[i].number==a)
			b=i;
	}
	for(int i=b;i<=length;i++){
		cout<<"Please input"<<stuudents[i].number<<"'s grade"<<endl;
		cin>>stuudents[i].grade;
		cout<<"Do you want to continue recording grades"<<endl;
		cout<<"8.Continue	9.Do not continue"<<endl;
		cout<<"Please input";
		cin>>c;
		if(c==9)
			break;
	}
}