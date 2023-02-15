#include<iostream>
using namespace std; 
class construct
{
	public:
		int x;
		construct (int no)
		{
		      x=no;
		}
	void showdata()
	{
		cout<<"value of number is:"<<x;
	}
	
};
int main()
{
	construct con(55);
	con.showdata();
}
