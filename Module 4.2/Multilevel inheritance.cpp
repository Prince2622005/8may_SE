#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    int getRollNumber() {
        return rollNumber;
    }
};

class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    void setMarks(int marks1, int marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }

    int getSubject1Marks() {
        return subject1Marks;
    }

    int getSubject2Marks() {
        return subject2Marks;
    }
};

class Result : public Test {
public:
    int getTotalMarks() {
        return (getSubject1Marks() + getSubject2Marks());
    }
};

int main() {
    Result result;
    int rollNumber, marks1, marks2;

    cout << "Enter the roll number: ";
    cin >> rollNumber;

    cout << "Enter marks obtained in subject 1: ";
    cin >> marks1;

    cout << "Enter marks obtained in subject 2: ";
    cin >> marks2;

    result.setRollNumber(rollNumber);
    result.setMarks(marks1, marks2);

    cout << "\nStudent Roll Number: " << result.getRollNumber() << endl;
    cout << "Subject 1 Marks: " << result.getSubject1Marks() << endl;
    cout << "Subject 2 Marks: " << result.getSubject2Marks() << endl;
    cout << "Total Marks: " << result.getTotalMarks() << endl;

    return 0;
}

