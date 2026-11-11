
#include <stdio.h>
#include <string.h>

int main()
{
    char message[1000];
    int shift;
    int i;

    printf("Enter message to be encrypted: ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    if (shift < 1 || shift > 25)
    {
        printf("Invalid shift amount.\n");
        return 1;
    }

    for (i = 0; message[i] != '\0'; i++)
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = (message[i] - 'A' + shift) % 26 + 'A';
        }
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = (message[i] - 'a' + shift) % 26 + 'a';
        }
    }

    printf("Encrypted message: %s\n", message);

    return 0;
}
