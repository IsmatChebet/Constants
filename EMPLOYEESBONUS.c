#include <stdio.h>
#include <stdlib.h>


int main() {
    const double BonusPercentage = 0.15;
    double Salary = 1500000.0;


    float EmployeesBonus = BonusPercentage * Salary;

    printf("Salary: %.2lf \n", Salary);
    printf("BonusPercentage: %.2lf \n", BonusPercentage * 100);
    printf("EmployeesBonus is: %.2lf \n", EmployeesBonus);


    return 0;
}
