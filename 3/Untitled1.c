//��д����������쳲��������е�n���ֵ��
//Ҫ����������������n��Ȼ����ñ�д�ĺ�����
//����������������쳲��������е�1���n���ֵ��n����0��nС�ڵ���20����
//쳲��������еĵ���ʽΪ��a_(n+2)=a_(n+1)+a_n,a_1=1,a_2=1��
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
