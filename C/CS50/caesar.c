#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
        int k = atoi(argv[1]);
        if (k>=0)
        {
            printf("plaintext: ");
            string t=get_string();
            printf("ciphertext: ");
            for (int i=0;  i<strlen(t); i++)
            {
                if (isalpha(t[i]))
                {
                    if (isupper(t[i]))
                    {
                        printf("%c", (((t[i]-65)+ k)%26) + 65);
                    }
                    else
                    {
                        printf("%c", (((t[i]-97)+ k)%26) + 97);
                    }
                }
                else
                {
                    printf("%c", t[i]);
                }
            }

        }
        else
        {
            printf("Key must be a non-negative integer.\n");
        }
            printf("\n");
            return 0;
}