#include <stdio.h>
#include <string.h>

void encrypt(char msg[])
{
    int i, n;
    n = strlen(msg);

    for(int i = 0; i < n; i++)
    {
        if((msg[i] >= 'a' && msg[i] <= 'z' ) || ( msg[i] >= 'A' && msg[i] <= 'Z'))
        {
            if(msg[i] == 'z' || msg[i] == 'Z')
            {
                msg[i] = (msg[i] - 1);
            }
            else
            {
                msg[i] = (msg[i] + 1);
            }

        }
    }
}

// Not able to decrypt properly
void decrypt(char msg[])
{
    int i, n;
    n = strlen(msg);

    for(int i = 0; i < n; i++)
    {
        if((msg[i] >= 'a' && msg[i] <= 'z' ) || ( msg[i] >= 'A' && msg[i] <= 'Z'))
        {
            if(msg[i] == 'z' || msg[i] == 'Z')
            {
                msg[i] = (msg[i] + 1);
            }
            else
            {
                msg[i] = (msg[i] - 1);
            }

        }
    }
}

int main()
{

    char email[100];

    printf("Type your email : ");
    scanf("%s" , email);

    encrypt(email);

    printf("Encrypted email : %s\n", email);

    decrypt(email);

    printf("Decrypted email : %s\n", email);

    return 0;

}
