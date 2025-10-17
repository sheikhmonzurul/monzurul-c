#include <stdio.h>

// Structure for Manager
struct Manager {
    char name[50];
    char post[30];
    float salary;
    char department[30];
};

// Structure for Employee
struct Employee {
    char name[50];
    float salary;
    char manager[50];   // which manager he/she works under
};

// Function to print Manager information
void printManagers(struct Manager m[], int size) {
    printf("\n----- Managers Information -----\n");
    for (int i = 0; i < size; i++) {
        printf("Manager %d:\n", i+1);
        printf("Name       : %s\n", m[i].name);
        printf("Post       : %s\n", m[i].post);
        printf("Salary     : %.2f\n", m[i].salary);
        printf("Department : %s\n\n", m[i].department);
    }
}

// Function to print Employee information
void printEmployees(struct Employee e[], int size) {
    printf("\n----- Employees Information -----\n");
    for (int i = 0; i < size; i++) {
        printf("Employee %d:\n", i+1);
        printf("Name       : %s\n", e[i].name);
        printf("Salary     : %.2f\n", e[i].salary);
        printf("Manager    : %s\n\n", e[i].manager);
    }
}

int main() {
    // Declare 2 managers
    struct Manager managers[2] = {
        {"Alice", "Senior Manager", 80000, "HR"},
        {"Bob", "Project Manager", 90000, "IT"}
    };

    // Declare 4 employees
    struct Employee employees[4] = {
        {"Charlie", 40000, "Alice"},
        {"David", 42000, "Alice"},
        {"Eve", 45000, "Bob"},
        {"Frank", 47000, "Bob"}
    };

    // Print managers and employees
    printManagers(managers, 2);
    printEmployees(employees, 4);

    return 0;
}
