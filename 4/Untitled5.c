#include <stdio.h>
#include <string.h>

int main()
{
    char passwd_myx[100],encrypted_myx[100];
    int i_myx,j_myx,k_myx,t_myx,move_myx;
    while(1)
    {
        printf("Enter message to be encrypted:");
        gets(passwd_myx);
        printf("Enter shift amount(1-25):");
        scanf("%d%*c",&move_myx);
        for(i_myx=0; i_myx<strlen(passwd_myx); i_myx++)
        {
            if(passwd_myx[i_myx] >= 'A' && passwd_myx[i_myx] <= 'Z')
            {
                passwd_myx[i_myx] = ((passwd_myx[i_myx]-'A') + move_myx)%26+'A';
            }
            else if(passwd_myx[i_myx] >= 'a' && passwd_myx[i_myx] <= 'z')
            {
                passwd_myx[i_myx] = ((passwd_myx[i_myx]-'a') + move_myx)%26+'a';
            }
        }
        printf("%s", passwd_myx);
        printf("\n");
    }
    return 0;
}
