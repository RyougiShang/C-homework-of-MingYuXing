#include <stdio.h>
    int main ()
{
    int i_myx,j_myx,k_myx;
    for (i_myx = 1; i_myx < 10; i_myx++)
    {
        for (j_myx = 1; j_myx <= i_myx; j_myx++)
            printf("%dx%d=%2d ", i_myx, j_myx, i_myx*j_myx);
        for (k_myx = 10; k_myx > 1; k_myx--)
            printf("       ");
        printf("\n");
    }
    return 0;
}
