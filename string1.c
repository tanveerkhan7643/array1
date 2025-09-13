#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int o, length;
    char str1[20], str2[20], temp[40];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    while (1) {
        printf("\n1: String length");
        printf("\n2: String copy");
        printf("\n3: String concatenate");
        printf("\n4: String compare");
        printf("\n5: String upper case");
        printf("\n6: String lower case");
        printf("\n7: Exit");

        printf("\n\nType an option: ");
        scanf("%d", &o);

        switch (o) {
        case 1:
            printf("Length of first string: %lu\n", strlen(str1));
            printf("Length of second string: %lu\n", strlen(str2));
            break;

        case 2:
            strcpy(temp, str1);
            printf("Copied string1 into temp: %s\n", temp);
            break;

        case 3:
            strcpy(temp, str1);
            strcat(temp, str2);
            printf("Concatenated string: %s\n", temp);
            break;

        case 4:
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 5:
            for (int i = 0; str1[i] != '\0'; i++)
                str1[i] = toupper(str1[i]);
            for (int i = 0; str2[i] != '\0'; i++)
                str2[i] = toupper(str2[i]);
            printf("Uppercase str1: %s\n", str1);
            printf("Uppercase str2: %s\n", str2);
            break;

        case 6:
            for (int i = 0; str1[i] != '\0'; i++)
                str1[i] = tolower(str1[i]);
            for (int i = 0; str2[i] != '\0'; i++)
                str2[i] = tolower(str2[i]);
            printf("Lowercase str1: %s\n", str1);
            printf("Lowercase str2: %s\n", str2);
            break;            

        case 7:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

