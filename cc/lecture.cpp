#include<iostream>
#include<string.h>
using namespace std;
class lecture
{
	char lec_name[100];
	char sub_name[100];
	char cour_name[100];
	int lec_number;
public:
	lecture(char *lecname,char *subname,char courname,int lecnumber)
	{
		strcpy(lec_name,lecname);
		strcpy(sub_name,subname);
		strcpy(cour_name,courname);
	    lec_name = lecname;
	}
	void getdata();
	void add_details();
	void showdata();
};
    void lecture::getdata()
    {
    	cout<<"Enter Lecture Name :";
    	cin>>lec_name;
    	cout<<"Enter Subject Name :";
    	cin>>sub_name;
    	cout<<"Enter Cours Name :";
    	cin>>cour_name;
    	cout<<"Enter Lecture Number :";
    	cin>>lec_number;
	}
	void lecture::add_details()
	{
		char time[50];
		
	}
