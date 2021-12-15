//编写函数，计算斐波那契数列第n项的值。
//要求在主函数中输入n，然后调用编写的函数，
//最后在主函数中输出斐波那契数列第1项到第n项的值（n大于0且n小于等于20）。
//斐波那契数列的递推式为：a_(n+2)=a_(n+1)+a_n,a_1=1,a_2=1。
#include <stdio.h>
    int fbonlaq(int num_myx);
    int main ()
{
    int num_myx;
    printf("input a num_myxber of (0,20).And input q to quit.\n");
    while(scanf("%d", &num_myx) == 1)
    {
        if (0 < num_myx && num_myx < 20)
            fbonlaq(num_myx);
        else
            printf("input right number.\n");
    }

    return 0;
}
        int fbonlaq(int num_myx)
    {
        int a[num_myx + 1], i;
        a[1] = 1;
        a[2] = 1;
        int result;
        for (i = 1; i <= num_myx; i++)
        {
            if (i > 2)
                {
                    result = a[i] = a[i - 1] + a[i - 2];
                    printf("a[%d] = %d \n", i, result);
                }
            else if (i <= 2)
            {
                    result = a[i];
                    printf("a[%d] = %d \n", i, result);
            }
        }
        return;
    }
