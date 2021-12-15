//编写函数，计算组合数C_n^m的值。
//要求在主函数中输入n和m，然后调用编写的函数计算组合数C_n^m的值，
//然后在主函数中输出计算结果。m!/n!(m-n)!
#include <stdio.h>
    int task(int m_myx);
    int main ()
{
    printf("input n,m of C_n^m.\n");
    int n_myx, m_myx, result_myx;
    scanf("%d%d", &n_myx, &m_myx);
    result_myx = task(m_myx)/(task(n_myx) * task(m_myx - n_myx));
    printf("result = %d", result_myx);

    return 0;
}
        int task(int m_myx)
    {
        int i_myx, q_myx, k_myx = 1;
        q_myx = m_myx;
        for (i_myx = 1; i_myx <= q_myx; i_myx++, m_myx--)
        {
            k_myx *= m_myx;
        }
        return k_myx;
    }
