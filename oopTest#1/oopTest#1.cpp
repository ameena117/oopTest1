// oopTest#1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <algorithm>
using namespace std;


class Student{
private:
	string name;
	int age = 0;
public:
	void setName(string n) {
		n = name;
	}
	void setAge(int a) {
		a = age;
	}
	void print(string n, int a) {
		cout << n << " " << a << endl;
	}
};

int main() {
	Student stud;
	stud.print("aaa", 20);
}

//// Create a Car class with some attributes
//class Car {
//public:
//    string brand;
//    string model;
//    int year;
//};
//
//int main() {
//    // Create an object of Car
//    Car carObj1;
//    carObj1.brand = "BMW";
//    carObj1.model = "X5";
//    carObj1.year = 1999;
//
//    // Create another object of Car
//    Car carObj2;
//    carObj2.brand = "Ford";
//    carObj2.model = "Mustang";
//    carObj2.year = 1969;
//
//    // Print attribute values
//    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//    return 0;
//}