#include <stdio.h>

struct s
{
    char ch;
    int n;
    char str[16];
};
struct s sv;

union u
{
    char ch;
    int n;
    char str[16];
};

union u uv;
int main()
{
    int struct_size, union_size;

    ///struct_size = sizeof(sv);
    ///union_size = sizeof(uv);

    ///printf("Structure variable took : %d bytes\n",struct_size);
    printf("Structure variable took : %d bytes\n",sizeof(sv));
    ///printf("Union variable took : %d bytes\n",union_size);
    printf("Union variable took : %d bytes\n",sizeof(uv));

    return 0;
}
