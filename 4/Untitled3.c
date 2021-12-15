//编写程序，输入十个数，将它们存入数组，然后将数组按逆序重新存放后输出。
//输入示例：0 1 2 3 4 5 6 7 8 9
//输出示例：9 8 7 6 5 4 3 2 1 0
#include <stdio.h>
    int temp(int num_myx[], int length_myx);
    int main ()
{
    int num_myx[10];
    int length_myx;
    int i_myx;
    printf("input 10 numbers\n");
    printf("排序前：\n");
	for (i_myx = 0; i_myx < 10; i_myx++)
	{
		scanf("%d", &num_myx[i_myx]);
	}
	printf("\n");
    length_myx = sizeof(num_myx)/sizeof(num_myx[0]);
	temp(num_myx, length_myx);
	printf("排序后：\n");
	for (i_myx = 0; i_myx < length_myx; i_myx++)
	{
		printf("%d ", num_myx[i_myx]);
	}
	printf("\n");
    temp(num_myx, length_myx);
}
    int temp(int num_myx[], int length_myx)
{
    int i_myx, j_myx, temp_myx;
    int flags_myx = 0;
    for (j_myx = 0; j_myx < length_myx - 1 ; j_myx++)
    {
        for (i_myx = 0; i_myx < length_myx - 1; i_myx++)
        {
            if(num_myx[i_myx] < num_myx [i_myx + 1])
            {
                temp_myx = num_myx[i_myx];
                num_myx[i_myx] = num_myx[i_myx + 1];
                num_myx[i_myx + 1] = temp_myx;
                flags_myx = 1;
            }
        }
        if(!flags_myx)
            break;
    }
}
