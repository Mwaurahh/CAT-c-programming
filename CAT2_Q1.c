#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
} employee1;

int main() {
    strcpy(employee1.name, "John Doe");
    employee1.id = 12345;
    strcpy(employee1.department, "Human Resources ");
    employee1.salary = 55000.50;
    strcpy(employee1.email, "john.doe@company.com");
    
    printf("name:%s\nid:%d\ndepartment:%s\nsalary:%f\nemail:%s\n",
           employee1.name, employee1.id, employee1.department,
           employee1.salary, employee1.email);
    
    return 0;
}