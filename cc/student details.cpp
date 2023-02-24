#include<iostream>
#include<string.h>
using namespace std;
class person
{
public:
	int age ;
	char name[20];
	void stu(int a,char *n)
	{
		age  = a;
		strcpy(name,n);
		cout<<"name :"<<name;
		cout<<"age :"<<age;
		
	}
	void teacher(int a,char *n)
	{
		age = a;
		strcpy(name,n);
		cout<<"name :"<<name;
		cout<<"age :"<<age;
	}
};
class student :public person
{
public:
	float percentage;
	void per(float p)
	{
		int a;
		char n[20];
		percentage = p;
	   cout<<"DETAULS OF THE STUDETS ARE:";
	   stu(a,n);
	cout<<"percentage :"<<percentage;
	    
	}

};
class teacher :public person
{
public:
 	int salary;
 	void sala(int s)
 	{
 		salary = s;
 		cout<<"Details Of the teacher are:";
	    teacher();
	    cout<<"salary :"<<salary;
	
	}
	
};
int main()
{
	student s1;
	teacher t1;
	s1.stu(18,"dharmesh");
	s1.per(50.00);
}
