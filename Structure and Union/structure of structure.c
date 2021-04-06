#include <stdio.h>
int main ()
{

    struct dob
    {
        int day;
        int month;
        int year;

    };
    struct student
    {
        char name[10];
        int age;
        struct dob date;
    }stud1;

    ///struct student stud1;

    printf("Enter Name:\n");
    scanf("%s",&stud1.name);
    printf("Enter Age :\n");
    scanf("%d",&stud1.age);
    printf("Enter the DOB \n");
    scanf("%d%d%d",&stud1.date.day,&stud1.date.month,&stud1.date.year);

    printf("Name : %s\n",stud1.name);
    printf("Age  : %d\n",stud1.age);
    printf("DOB  :%d - %d - %d\n",stud1.date.day,stud1.date.month,stud1.date.year);


    return 0;
}
