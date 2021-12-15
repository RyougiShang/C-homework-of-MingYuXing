#include <stdio.h>
#include <math.h>
    int task(int n_myx, int x_myx);
    int main ()
{
    int x_myx,n_myx;
    printf("qiu he k=1---k=n, x^k.\ninput x, n\n");
    while(scanf("%d%d", &x_myx, &n_myx) == 2)
    {
        task(x_myx, n_myx);
        printf("input q to quit.\n");
    }
    return 0;
}
        int task(int x_myx, int n_myx)
    {
        int result_myx = 0;
        for ( ;n_myx > 0; n_myx--)
        {
            result_myx += pow(x_myx, n_myx);
        }
        printf("%d\n", result_myx);
    }
