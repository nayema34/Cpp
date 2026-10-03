#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    double getSalary() {
        return salary;
    }
};

class Account {
private:
    double balance;
    string password;

public:
    string accountId;
    string username;
};

int main() {
    Teacher t1;
    t1.name = "John Doe";
    t1.dept = "Mathematics";
    t1.subject = "Algebra";
    t1.setSalary(50000.0);

    cout << "Teacher Name: " << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
