#include <stdio.h>
#include <stdlib.h>

int main()
{
    double la[1];
    if (getloadavg(la, 1) != -1)
    {
        printf("%#0.2f\n", la[0]);
        return 0;
    }
    else
    {
        return 1;
    }
}

