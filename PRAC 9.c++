//PRAC 9  Define a class Person having name as a data member. Inherit two classes Student and employee from Person. Student has additional attributes as course, marks and yearand Employee has department and salary. Write display() method in all the three classes to display the corresponding attributes. Provide the necessary methods to showruntime

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Input name and age
    void input() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    // Display name and age
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
    string course;

public:
    // Input student details
    void input() {
        Person::input(); // Input name and age
        cout << "Enter course: ";
        cin >> course;
    }

    // Display student details
    void display() {
        Person::display(); // Display name and age
        cout << "Course: " << course << endl;
    }
};

class Employee : public Person {
    int salary;

public:
    // Input employee details
    void input() {
        Person::input(); // Input name and age
        cout << "Enter salary: ";
        cin >> salary;
    }

    // Display employee details
    void display() {
        Person::display(); // Display name and age
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    Employee e;

    cout << "Enter student details:\n";
    s.input();

    cout << "Enter employee details:\n";
    e.input();

    cout << "\nStudent Details:\n";
    s.display();

    cout << "\nEmployee Details:\n";
    e.display();

    return 0;
}
