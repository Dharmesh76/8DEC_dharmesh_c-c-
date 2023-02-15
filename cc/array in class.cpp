#include<iostream>
using namespace std;
class studroll
{
	public:
		int roll[10];
		int al;
		int i;
		
		void showrollno()
		{
			for(i=1;i<=10;i++)
			{
				cout<<"enter roll no of student "<<i;
				cout<<" :";
				cin>>roll[i];
				
			}
			for (i=1;i<=10;i++)
			{
				cout<<"roll no of the student "<<i;
				cout<<" is:"<<roll[i];
				cout<<"\n";
			}
			
		}
};
int main()
{
	studroll st;
	st.showrollno();
}
