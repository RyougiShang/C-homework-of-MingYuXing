/*��������ҵ������100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�����д����
�����ܽ��XԪ�������Ҫ100Ԫֽ�Ҷ����š�50Ԫֽ�Ҷ����š�20Ԫֽ�Ҷ����š�10Ԫֽ�Ҷ����š�5Ԫֽ�Ҷ����š�1Ԫֽ�Ҷ����š�
Ҫ�󾡿��ܶ��ʹ�ô���ֵ����ֽ�ҡ�*/
#include <stdio.h>
#define a_myx 100
#define b_myx 50
#define c_myx 20
#define d_myx 10
#define e_myx 5
#define f_myx 1
    int intput(int x);
    int main ()
{
    printf("input the number of money.\n");
    int mon;
    while(scanf("%d", &mon) == 1)
    {
        printf("input q to quit.\n");
        intput(mon);
    }
    return 0;
}
    int intput(int x_myx)
{
    int p_myx, l_myx, m_myx, k_myx, o_myx, i_myx;
    p_myx = x_myx / a_myx;
    l_myx = (x_myx - p_myx*a_myx) / b_myx;
    m_myx = (x_myx - p_myx*a_myx - l_myx*b_myx) / c_myx;
    k_myx = (x_myx - p_myx*a_myx - l_myx*b_myx - m_myx*c_myx) / d_myx;
    o_myx = (x_myx % d_myx) / e_myx;
    i_myx = (x_myx % e_myx) / f_myx;
    printf("inneed \n %d of 100\n %d of 50\n %d of 20\n %d of 10\n %d of 5\n %d of 1\n", p_myx,l_myx,m_myx,k_myx,o_myx,i_myx);
    return;
}
