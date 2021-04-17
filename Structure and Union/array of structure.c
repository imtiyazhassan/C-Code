#include <stdio.h>
#include <string.h>

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
        char name[20];
        int roll;
        float fees;
        struct dob date;

    };
    struct student stud[30];
    int n,i;
    char new_name[20];
    int new_roll;
    float new_fees;

    printf("Enter the number of student \n");
    scanf("%d",&n);
    for (i=0; i<n; i+=1)
    {
        printf("Enter name : \n");
        scanf("%s",&stud[i].name);
        printf("Enter roll : \n");
        scanf("%d",&stud[i].roll);
        printf("Enter fees : \n");
        scanf("%f",&stud[i].fees);
        printf("Enter birthday date : \n");
        scanf("%d%d%d", &stud[i].date.day, &stud[i].date.month, &stud[i].date.year);
    }
    for(i=0; i<n; i+=1)
    {
        printf("Name : %s \n",stud[i].name);
        printf("Roll : %d \n",stud[i].roll);
        printf("fees : %0.2f \n",stud[i].fees);
        printf("%d - %d  - %d\n", stud[i].date.day, stud[i].date.month, stud[i].date.year);

        printf("\n");
    }
    int num;
    printf("Enter the number you want to be edited : \n");
    scanf("%d",&num);
    num = num -1;


    printf("Enter new name\n");
    scanf("%s",&new_name);
    printf("Enter new roll\n");
    scanf("%d",&new_roll);
    printf("Enter new fees\n");
    scanf("%f",&new_fees);

    //if we change anything 

    ///stud[num].name = new_name;
    strcpy(stud[num].name, new_name);
    stud[num].roll = new_roll;
    stud[num].fees = new_fees;

    printf("\n\n");

    for(i=0; i<n; i+=1)
    {
        printf("Enter students details : \n");
        printf("name : %s\n",stud[i].name);
        printf("roll : %d\n",stud[i].roll);
        printf("fees : %f\n",stud[i].roll);
        printf("DOB : %d - %d - %d \n",stud[i].date.day, stud[i].date.month, stud[i].date.year);


    }


    return 0;
}
