#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		virtual void getdata() = 0;
		virtual void putdata() = 0;
};

class Professor: public Person{
	int publications;
	int cur_id;
	public: 
		static int profid;
		Professor(){
			cur_id = profid;
			profid++;
		}

		void getdata(){
			cin >> name >> age >> publications;
		}

		void putdata(){
			cout << name << " " << age << " " << publications << " " << cur_id << endl;
		}
};

class Student: public Person{
	int sum = 0;
	int cur_id;
	public:
		static int studentid;
		Student(){
			cur_id = studentid;
			studentid++;
		}

		void getdata(){
			cin >> name >> age;
			for(int i = 0; i < 6; i++){
				int mark;
				cin >> mark;
				sum += mark;
			}
		}

		void putdata(){
			cout << name " " << age << " " << sum << " " << cur_id << endl;
		}
};

int Professor::profid = 1;
int Student::studentid = 1;

int main(){
	int n, val;
	cin >> n; //Number of objects that are going to be created.
	Person *per[n];
	for(int i = 0; i < n; i++){
		cin >> val;
		if(val == 1){
			//Current object is of type Professor
			per[i] = new Professor;
		}
		else{ //Current object is of type Student.
			per[i] = new Student;
		}

		per[i] -> getdata(); //Get data from the user.
	}

	for(int i = 0; i < n; i++){
		per[i] -> putdata(); //Print the required output for each object.
	}

	return 0;
}
