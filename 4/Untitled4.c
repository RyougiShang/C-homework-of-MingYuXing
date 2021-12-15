#include <stdio.h>
#include <string.h>
    int main()
{
    char str_myx[20][10],max_myx[20],str1_myx[10];
    int i_myx,j_myx,n_myx=0;
    while(1)
	{
    	scanf("%s",str1_myx);
    	if(str1_myx[0]=='#')
	    {
    		break;
    	}
        else
		{
        strcpy(str_myx[n_myx],str1_myx);
        n_myx++;
        }
    }
    for(i_myx=0;i_myx<n_myx-1;i_myx++)
    	for(j_myx=0;j_myx<n_myx-i_myx-1;j_myx++)
	    {
            strcpy(max_myx, str_myx[0]);
            if(strlen(max_myx) < strlen(str_myx[j_myx + 1]))
		    {
               strcpy(max_myx,str_myx[j_myx + 1]);
            }
        }

        printf("%s ",max_myx);
        return;
}
