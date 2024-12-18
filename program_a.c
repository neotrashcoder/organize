#include <stdio.h>
#include <string.h>
int sleep();
void passwordManager();
void processingAnimation();
int main()
{
    // initial verification
    char magicWord[20];
    char password[20];
    int attempt = 3;
    char correctMword[20] = "Please";
    char correctPass[20] = "Master";
    // show available features
    char menuList[] = "-----------------------------------------------\nList of the Following Features:\n1. Password Manager\n2. Schedule Planner\n3. Deadline Lister\n4. Exit\n\n";
    int menuChoice;

    printf("Life Organization Program\nBy Neilan Padilla\n");
    printf("Attempts (%d)\n", attempt);
    printf("To proceed please enter the magic word: ");
    scanf("%s", &magicWord);
    printf("Also the password: ");
    scanf("%s", &password);
    while (attempt != 1)
    {
        if (strcmp(magicWord, correctMword) == 0 && strcmp(password, correctPass) == 0)
        {
            printf("\nHello and Welcome to Life Organization Program\n");

            while (menuChoice != 4)
            {
                printf("%s", menuList);
                printf("Choice: ");
                scanf("%d", &menuChoice);
                printf("-----------------------------------------------\n");
                if (menuChoice == 1)
                {
                    passwordManager();
                }
            }
        }
        else
        {
            printf("Try again. Magic Word or Password might be incorrect\n");
            attempt -= 1;
            printf("Attempts (%d)\n", attempt);
            printf("Magic Word: ");
            scanf("%s", &magicWord);
            printf("Password: ");
            scanf("%s", &password);
            if (attempt == 1)
            {
                printf("Access Denied. System Locked");
            }
        }
    }
}

void passwordManager()
{
    char pin[10];
    char correctPin[10] = "T568A";
    int siteChoice;
    printf("Password Manager (Contains Sensitive Information)\n");
    printf("Additional Security Measures\nEnter PIN (Note: It may include a few letters): ");
    scanf("%s", &pin);

    if (strcmp(pin, correctPin) == 0)
    {
        printf("Loading ");
        processingAnimation();
        printf(" Access Granted\n\n");
        printf("List of Sites:\n1. Google\n2. Facebook\n3. edX\n4. GitHub\n");
        printf("Choice: ");
        scanf("%d", &siteChoice);
        printf("Getting file ");
        processingAnimation();
        printf("\n");
    }
    else
    {
        printf("Incorrect PIN\n");
    }
}

void processingAnimation()
{
    for (int i = 1; i <= 5; i++)
    {
        sleep(1);
        printf(".");
    }
}