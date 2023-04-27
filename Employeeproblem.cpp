#include <stdio.h>
#include<iostream>

using namespace std;

struct Employee {
    int salary;
    int hours_worked;
};

void getInfo(struct Employee* emp) {
    cout<<"Enter the employee's salary: ";
    scanf("%d", &emp->salary);
    
    cout<<"Enter the number of hours worked per day: ";
    scanf("%d", &emp->hours_worked);
}

void AddSal(struct Employee* emp) {
    if (emp->salary < 500) {
        emp->salary += 10;
    }
}

void AddWork(struct Employee* emp) {
    if (emp->hours_worked > 6) {
        emp->salary += 5;
    }
}

int main() {
    
    struct Employee emp;
    getInfo(&emp);
    AddSal(&emp);
    AddWork(&emp);
    cout<<"Final salary is: "<<emp.salary;
    return 0;
}