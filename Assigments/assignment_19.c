// Create Structure EMPLOYEE for storing details (Name, Designation, gender, Date of Joining and Salary). Define function members to compute a) total number of employees in an organization b) count of male and female employee c) Employee with salary more than 10,000 d) Employee with designation “Asst Manager
#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    struct Date dateOfJoining;
    float salary;
};

struct Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;  

void addEmployee(char name[], char designation[], char gender[], struct Date dateOfJoining, float salary) {
    if (employeeCount < MAX_EMPLOYEES) {
        strcpy(employees[employeeCount].name, name);
        strcpy(employees[employeeCount].designation, designation);
        strcpy(employees[employeeCount].gender, gender);
        employees[employeeCount].dateOfJoining = dateOfJoining;
        employees[employeeCount].salary = salary;
        employeeCount++;
    } else {
        printf("Employee limit reached. Cannot add more employees.\n");
    }

}

void countEmployees() {
    printf("Total number of employees: %d\n", employeeCount);
}

void countGender() {
    int maleCount = 0, femaleCount = 0;
    for (int i = 0; i < employeeCount; i++) {
        if (strcmp(employees[i].gender, "Male") == 0) {
            maleCount++;
        } else if (strcmp(employees[i].gender, "Female") == 0) {
            femaleCount++;
        }
    }
    printf("Number of male employees: %d\n", maleCount);        
    printf("Number of female employees: %d\n", femaleCount);
}

void employeesWithHighSalary() {
    printf("Employees with salary more than 10,000:\n");
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].salary > 10000) {
            printf("%s\n", employees[i].name);
        }
    }
}

void employeesWithDesignation() {
    printf("Employees with designation 'Asst Manager':\n");
    for (int i = 0; i < employeeCount; i++) {
        if (strcmp(employees[i].designation, "Asst Manager") == 0) {
            printf("%s\n", employees[i].name);
        }
    }
}

int main() {
    struct Date date1 = {1, 1, 2020};
    struct Date date2 = {15, 5, 2019};
    struct Date date3 = {10, 10, 2021};

    addEmployee("Alice", "Asst Manager", "Female", date1, 12000);
    addEmployee("Bob", "Manager", "Male", date2, 15000);
    addEmployee("Charlie", "Asst Manager", "Male", date3, 9000);    
    countEmployees();
    countGender();
    employeesWithHighSalary();
    employeesWithDesignation();
    return 0;
}