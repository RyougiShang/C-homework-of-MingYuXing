//��д���������������C_n^m��ֵ��
//Ҫ����������������n��m��Ȼ����ñ�д�ĺ������������C_n^m��ֵ��
//Ȼ�����������������������m!/n!(m-n)!
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
