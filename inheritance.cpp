#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
public:
    int studentID;

    void display() {
        Person::display();
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

int main() {
    Student student1;
    student1.name = "Jane Doe";
    student1.age = 21;
    student1.studentID = 67890;
    student1.display();

    return 0;
}
