#include <iostream>
#include <string>

class Person {
public:
    // Constructor
    Person(std::string name, int age) : name(name), age(age) {}

    // Method to display information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person person("John Doe", 30);
    person.displayInfo();

    return 0;
}
