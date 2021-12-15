#include <stdio.h>
    int main ()
{
   int year_myx;
    printf("实现对1-2022年闰年的展示\n");
    for (year_myx = 1; year_myx < 2022; year_myx++)
        if(year_myx % 4 == 0 && year_myx % 100 != 0 || year_myx % 400 == 0)
        printf("it is %4d\t", year_myx);
    return 0;
}
