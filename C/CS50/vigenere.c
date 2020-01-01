#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int i,j;
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword \n");
        return 1;
    }
        string k=argv[1];
        for (j=0; j<strlen(k);j++)
        {
            if ((k[j]>=0 && k[j]<65) || (k[j]>90 && k[j]<97) || k[j]>122)
             {
                printf("Keyword must be only A-Z and a-z\n");
                return 1;
             }
        }
        printf("plaintext: ");
        string t=get_string();
        printf("ciphertext: ");
        for (i=0, j=0; i<strlen(t); i++)
        {
                if (isalpha(t[i]))
                {
                    if (isupper(t[i]))
                    {
                            if (isupper(k[j]))
                            {
                                t[i]=((t[i]-65+k[j]-65) % 26)+65;
                            }
                            else if (islower(k[j]))
                            {
                                t[i]=((t[i]-65+k[j]-97) % 26)+65;
                            }
                            j++;
                    }
                    else if (islower(t[i]))
                    {
                            if (isupper(k[j]))
                            {
                                t[i]=((t[i]-97+k[j]-65) % 26)+97;
                            }
                            else if (islower(k[j]))
                            {
                                t[i]=((t[i]-97+k[j]-97) % 26)+97;
                            }
                            j++;
                    }
                }
                printf("%c", t[i]);
                if (j==strlen(k))
                {
                    j=0;
                }
        }
                printf("\n");
                return 0;
}