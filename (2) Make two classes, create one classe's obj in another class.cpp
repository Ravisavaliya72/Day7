#include <iostream>
using namespace std;
class Student {
private:
    char name[30];
    char roll[10];

public:
    void getInfo(void);
    void putInfo(void);
};

void Student::getInfo(void)
{
    cout << "Enter student information:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "roll_num: ";
    cin >> roll;
}

void Student::putInfo(void)
{
    cout << "Name: " << name <<endl<< "roll no:" << roll <<endl;
}

class std_result_info : public Student {
private:
    int totalM;
    float percentage;
    int english;
    int maths;
    int sci;

public:
    void getResultInfo(void);
    void putResultInfo(void);
    void calResult(void);
};

void std_result_info::getResultInfo(void)
{
	getInfo();
	cout << endl;
    cout << "Enter student's result information:" << endl;
    cout << "Enter English marks: ";
    cin >> english;
    cout << "Enter Maths marks: ";
    cin >> maths;
    cout << "Enter Science marks: ";
    cin >> sci;
}

void std_result_info::putResultInfo(void)
{
	putInfo();
	cout << "English Marks: " << english << endl << "Maths Marks: " << maths << endl << "Science Marks: " << sci << endl;
    calResult();
}

void std_result_info::calResult(void){
	totalM = english + maths + sci;
	percentage = (totalM*100)/300;
	cout << "Total Marks: " << totalM << endl << "Percentage: " << percentage << endl;
}

int main()
{
    std_result_info std;
    std.getResultInfo();
    std.putResultInfo();
}

