#include <stdio.h>
#include <string.h>
int main ()
{
    struct student
    {
        int id ;
        char *name;
    };

    struct student one;
    one.id = 17201033;
    ///strcpy(one.name,"Imtiyaz Hassan");

    one.name = "Imtiyaz Hassan";
    printf ("ID :\t%d\n",one.id);
    printf ("Name :\t%s\n",one.name);

    return 0;

}
