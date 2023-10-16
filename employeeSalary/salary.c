#include <stdatomic.h>
#include <stdio.h>

struct Employee {
   int id;
   int workHours;
   int totalMonthly;
   float salary;
};

int main() {
   struct Employee worker;
   printf("Input Employee ID: ");
   scanf("%d", &worker.id);
   printf("Input working hours: ");
   scanf("%d", &worker.workHours);
   printf("Mounthly Amount: ");
   scanf("%d", &worker.totalMonthly);
   worker.salary = worker.totalMonthly * worker.workHours;
   printf("Employee ID: %d\n", worker.id);
   printf("Salary: %f", worker.salary);
}  
