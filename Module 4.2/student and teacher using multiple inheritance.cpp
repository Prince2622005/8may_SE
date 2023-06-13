#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initializeData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void initializeData() {
        Person::initializeData();

        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    void initializeData() {
        Person::initializeData();

        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student information:" << endl;
    student.initializeData();

    cout << "\nEnter teacher information:" << endl;
    teacher.initializeData();

    cout << "\nStudent information:" << endl;
    student.displayData();

    cout << "\nTeacher information:" << endl;
    teacher.displayData();

    return 0;
}

