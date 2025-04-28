#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details" << endl;
    }
    virtual ~Employee() {} 
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};

class Developer : public Employee {
public:
    void showDetails() override {
        cout << "I am a Developer. I write code." << endl;
    }
};

int main() {
    cout << "What type of employee would you like to create?" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "\nEnter your choice (1 or 2): ";
    
    int choice;
    cin >> choice;
    
    Employee* emp = nullptr;  
    
    switch(choice) {
        case 1:
            emp = new Manager();
            break;
        case 2:
            emp = new Developer();
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    emp->showDetails();  
    
    delete emp;  
    
    return 0;
}