#include<iostream>
using namespace std;

class HighSchool{
  private:
  	int id, roll_no, age, standard;
  	string name, contact, address, institute;
  	static int count;
  	
  public:
  	HighSchool(){
  		count++;
	}
	
	void setStudent(){
		cout << endl << "Enter HighSchool Student Info: " << endl;
		cout << "Enter Student ID: ";
		cin >> id;
		cout << "Enter Student Name: ";
		cin >> name;
		cout << "Enter Student Age: ";
		cin >> age;
		cout << "Enter Student Roll no: ";
		cin >> roll_no;
		cout << "Enter Student Standard: ";
		cin >> standard;
		cout << "Enter Student Contact: ";
		cin >> contact;
		cout << "Enter Student Address: ";
		cin >> address;
		cout << "Enter Student Institute: ";
		cin >> institute;
	}
	
	void getStudent(){
		cout << endl << "HighSchool Student Info: " << endl;
		cout << "Student ID: " << id << endl << "Student Name: " << name << endl << "Student Age: " << age << endl 
		<< "Student Roll number: " << roll_no << endl << "Student Standard: " << standard << endl << "Student Contact: " 
		<< contact << endl << "Student Address: " << address << endl << "Student Institute: " << institute << endl;
	}
	
	static getCount(){
		cout << count << endl;
	}
};

class College{
  private:
  	int id, roll_no, age, standard;
  	string name, contact, address, institute;
  	static int count;
  	
  public:
  	College(){
  		count++;
	}
	
	void setStudent(){
		cout << endl << "Enter College Student Info: " << endl;
		cout << "Enter Student ID: ";
		cin >> id;
		cout << "Enter Student Name: ";
		cin >> name;
		cout << "Enter Student Age: ";
		cin >> age;
		cout << "Enter Student Roll no: ";
		cin >> roll_no;
		cout << "Enter Student Standard: ";
		cin >> standard;
		cout << "Enter Student Contact: ";
		cin >> contact;
		cout << "Enter Student Address: ";
		cin >> address;
		cout << "Enter Student Institute: ";
		cin >> institute;
	}
	
	void getStudent(){
		cout << endl << "College Student Info: " << endl;
		cout << "Student ID: " << id << endl << "Student Name: " << name << endl << "Student Age: " << age << endl 
		<< "Student Roll number: " << roll_no << endl << "Student Standard: " << standard << endl << "Student Contact: " 
		<< contact << endl << "Student Address: " << address << endl << "Student Institute: " << institute << endl;
	}
	
	static getCount(){
		cout << count << endl;
	}	
};

int HighSchool::count = 0;
int College::count = 0;

int main(){
	HighSchool hs[1];
	College clg[1];
	
	for(int i = 0; i < 1; i++) hs[i].setStudent();
	cout << endl;
	for(int i = 0; i < 1; i++) clg[i].setStudent();
	cout << endl;
	for(int i = 0; i < 1; i++) hs[i].getStudent();
	cout << endl << "Total High School Students: ";
	HighSchool::getCount();
	cout << endl;
	for(int i = 0; i < 1; i++) clg[i].getStudent();
	cout << endl << "Total College Students: ";
	College::getCount();
}
