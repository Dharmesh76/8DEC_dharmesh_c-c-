#include <iostream>
using namespace std;

class cricketer {

        
    
    public:
    	string name;
        int age;
        string country;
        void input_data() 
		{
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter country: ";
            cin >> country;
        }
};

class batsman : public cricketer {
    private:
        int total_runs;
        float avg_runs;
        int best_performance;
    
    public:
        void input_data() {
            cricketer::input_data();
            cout << "Enter total runs: ";
            cin >> total_runs;
            cout << "Enter best performance: ";
            cin >> best_performance;
           
        }
        void calc_av()
        {
        	 avg_runs = (float)total_runs / 10;
		}
        
        void display_data() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Country: " << country << endl;
            cout << "Total runs: " << total_runs << endl;
            cout << "Average runs: " << avg_runs << endl;
            cout << "Best performance: " << best_performance << endl;
        }
};

int main() {
    batsman b;
    b.input_data();
    b.calc_av();
    b.display_data();
    return 0;
}
