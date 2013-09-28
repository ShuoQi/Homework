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
		cout<<"*************************菜单*************************"<<endl;
		cout<<"1.查看学生名单"<<endl;
		cout<<"2.添加学生"<<endl;
		cout<<"3.删除学生"<<endl;
		cout<<"4.录入成绩"<<endl;
		cout<<"5.退出"<<endl;
		cout<<"输入指令";
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
			default :cout<<"输入指令错误"<<endl;
		}
	}while(1);
}
void list(){
	if(length==-1)
		cout<<"未输入学生"<<endl;
	for(int i=0;i<=length;i++){
		cout<<stuudents[i].name<<"\t"<<stuudents[i].number<<endl;
	}
}
void add(){
	++length;
	cout<<"请输入学生名字"<<endl;
	cin>>stuudents[length].name;
	cout<<endl;
	cout<<"请输入学生学号"<<endl;
	cin>>stuudents[length].number;
	cout<<endl;
}
void del(){
	int b;
	char c[20];
	int d;
	int e,f;
	cout<<"6.按名字删除"<<endl;
	cout<<"7.按学号删除"<<endl;
	cin>>b;
	cout<<endl;
	switch(b){
		case 6:	cout<<"输入名字";
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
		case 7:	cout<<"输入学号";
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
		default:cout<<"输入指令错误"<<endl;
	}
}
void wri(){
	int a;
	int b;
	int c;
	cout<<"输入开始录入成绩的学号"<<endl;
	cout<<"输入学号";
	cin>>a;
	for(int i=0;i<=length;i++){
		if(stuudents[i].number==a)
			b=i;
	}
	for(int i=b;i<=length;i++){
		cout<<"请录入"<<stuudents[i].number<<"的成绩"<<endl;
		cin>>stuudents[i].grade;
		cout<<"是否继续录入成绩"<<endl;
		cout<<"8.继续	9.不继续"<<endl;
		cout<<"请输入";
		cin>>c;
		if(c==9)
			break;
	}
}