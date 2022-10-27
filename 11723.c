#include <stdio.h>

int main()
{
    long int r,n,suffix;
    int i;
    for(i=1; i<10002; i+=1)
    {
        scanf("%ld%ld",&r,&n);
        if((r == 0) && (n== 0))
        {
            break;
        }
        suffix =(r-1)/n;

        if(suffix<=26)
        {
            printf("Case %d: %ld\n",i,suffix);
        }
        else
            printf("Case %d: impossible\n",i);
    }

    return 0;
}
