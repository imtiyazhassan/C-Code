#include <stdio.h>
int main ()
{
    struct student
    {
        char name[20];
        int roll;
        float fees;
    };

    struct student stud1;
    printf("Enter new name \n");
    scanf("%s",stud1.name);
    printf("Enter new roll\n");
    scanf("%d",&stud1.roll);
    printf("Enter fees\n");
    scanf("%f",&stud1.fees);

    printf("name : %s \n",stud1.name);
    printf("Roll : %d \n",stud1.roll);
    printf("fees : %f \n",stud1.fees);

    return 0;
}
