#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure 'Employee' begins here

struct Employee
{
    char Name[50];
    int ID;
    char DepartmentName[50];
    float Salary;
    char Position[50];
    char DateJoining[50];
};
int main()
{

    struct Employee employees[100];
    int totalEmployees = 0;
    struct Employee employee;
    int i;
    int indexSelectedEmployee;
    int choice = 0;
    while (choice != 5)
    //And switch case starts here
    {
        printf("=======================================\n");
        printf(" Manas's Employment Management System \n");
        printf("=======================================\n\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Select your option: ");
        scanf("%d", &choice);

        //CREATE

        if (choice == 1)
        {
            fflush(stdin);  //This function returns a zero value on success.
                            //If an error occurs,EOF is returned and
                            //the error indicator is set

            printf("\nEnter employee name: ");
            gets(employee.Name);
            printf("Enter employee ID: ");
            scanf("%d", &employee.ID);
            fflush(stdin);
            printf("Enter employee department name: ");
            gets(employee.DepartmentName);
            printf("Enter employee salary: ");
            scanf("%f", &employee.Salary);
            fflush(stdin);
            printf("Enter employee position: ");
            gets(employee.Position);
            printf("Enter employee date joining: ");
            gets(employee.DateJoining);
            employees[totalEmployees] = employee;
            totalEmployees++;
            printf("\nA new employee has been added. \n\n");

        }

        //READ

        else if (choice == 2)
        {
            for (i = 0; i < totalEmployees; i++)
            {
                printf("\nName: %s\n", employees[i].Name);
                printf("Employee ID: %d\n", employees[i].ID);
                printf("Department name: %s\n", employees[i].DepartmentName);
                printf("Salary: %f\n", employees[i].Salary);
                printf("Position: %s\n", employees[i].Position);
                printf("Date of joining: %s\n\n", employees[i].DateJoining);

            }
        }

        //UPDATE

        else if (choice == 3)
        {
            indexSelectedEmployee = -1;
            printf("Enter employee ID: ");
            scanf("%d", &employee.ID);
            for (i = 0; i < totalEmployees; i++)
            {
                if (employee.ID == employees[i].ID)
                {
                    indexSelectedEmployee = i;
                }
            }

            if (indexSelectedEmployee != -1)
            {
                fflush(stdin);
                printf("\nEmployee name: ");
                gets(employees[indexSelectedEmployee].Name);

                printf("Employee ID: ");
                scanf("%d", &employees[indexSelectedEmployee].ID);
                fflush(stdin);
                printf("Employee department name: ");
                gets(employees[indexSelectedEmployee].DepartmentName);

                printf("Employee salary: ");
                scanf("%f", &employees[indexSelectedEmployee].Salary);
                fflush(stdin);
                printf(" Employee position: ");
                gets(employees[indexSelectedEmployee].Position);

                printf("Employee date joining: ");
                gets(employees[indexSelectedEmployee].DateJoining);
                printf("\nSuccessfully updated. \n\n");
            }
            else
            {
                printf("\nEmployee ID does not exist. \n \n");
            }
        }

        //DELETE

        else if (choice == 4)

        {
            indexSelectedEmployee = -1;
            printf("\nEnter Employee ID: ");
	        scanf("%d",&employee.ID);
            for (i = 0; i < totalEmployees; i++)
            {
                if (employee.ID == employees[i].ID)
                {
                    indexSelectedEmployee = i;
                }
            }
            if (indexSelectedEmployee != -1)
            {
                for (i = indexSelectedEmployee; i < totalEmployees - 1; i++)
                {

                    employees[i] = employees[i + 1];
                    totalEmployees--;
                    printf("\nSuccessfully Deleted \n \n");
		}
            }

            //RETURN

            else if (choice == 5)
            {
                //returning nothing here
            }

	    }
    }


	 return 0;
}
