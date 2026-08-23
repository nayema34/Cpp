#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string name;
    int age;
    std::vector<std::string> courses;

    void printInformation() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;

        std::cout << "Courses: ";

        for (const std::string& course : courses) {
            std::cout << course << " ";
        }

        std::cout << std::endl;
    }

    void addCourse(const std::string& newCourse) {

        for (const std::string& course : courses) {

            if (course == newCourse) {
                std::cout << "Cannot add duplicate course "
                          << newCourse << std::endl;
                return;
            }
        }

        courses.push_back(newCourse);

        std::cout << "Successfully added course: "
                  << newCourse << std::endl;
    }
};

int main() {

    Student student1;

    student1.name = "Kenny";
    student1.age = 18;

    student1.addCourse("Calculus");
    student1.addCourse("French");
    student1.addCourse("Economics");

    student1.printInformation();

    return 0;
}