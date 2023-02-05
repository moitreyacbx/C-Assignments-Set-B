#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100
int ustrlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i - 1;
}
void ustrcpy(char *s1, char *s)
{
    int i;
    for (i = 0; i < ustrlen(s); i++)
    {
        s1[i] = s[i];
    }
}
void ustrcat(char *s, char *s1)
{
    char temp1[MAX];
    ustrcpy(temp1, s);
    int n = ustrlen(s), i;
    for (i = 0; i < ustrlen(s1); i++)
    {
        temp1[n + i] = s1[i];
    }
    for (i = 0; i <= ustrlen(s) + ustrlen(s1); i++)
    {
        s1[i] = temp1[i];
    }
}
void ustrrev(char *s1)
{
    int n = ustrlen(s1);
    int i;
    for (i = 0; i < n / 2; i++)
    {
        char temp = s1[i];
        s1[i] = s1[n - i - 1];
        s1[n - i - 1] = temp;
    }
}
int ustrcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else if (str1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char str1[MAX], str2[MAX], str3[MAX], str4[MAX], str5[MAX];
    int ch, x = 0;
    printf("Enter the string:\n");
    fgets(str1, MAX, stdin);
    printf("The string is:\n%s", str1);
    do
    {
        printf(" 1.Find the length of the string\n 2.Copy the string in another string and display it\n 3.Concatenate the string with another string\n 4.Reverse the string \n 5.Compare the string with another string \n 6.Exit\n");
        printf("\nEnter Your Choice\n");
        scanf("\n%d", &ch);

        {
            switch (ch)
            {
            case 1:
                printf("The length of the string is %d\n", ustrlen(str1));
                break;
            case 2:
                ustrcpy(str2, str1);
                printf("The copied string is %s\n", str2);
                break;
            case 3:
                printf("Enter the string to to be concatenated\n");
                scanf("\n%s", str3);
                ustrcat(str1, str3);
                printf("The concatenated string is %s\n", str3);
                break;
            case 4:
                ustrcpy(str4, str1);
                ustrrev(str4);
                printf("The reverse string is %s\n", str4);
                break;
            case 5:
                printf("Enter the string to be compared with\n");
                scanf("\n%s", str5);
                x = ustrcmp(str1, str5);
                printf("The result is %d\n.", x);
                if (x > 1)
                {
                    printf("The string %s is lexicographically larger than the string %s\n", str1, str5);
                }
                else if (x < -1)
                {
                    printf("The string %s is lexicographically larger than the string %s\n", str5, str1);
                }
                else if (x == 1)
                {
                    printf("The strings are equal\n");
                }
                break;
            case 6:
                printf("\nExited successfully\n");
                break;
            default:
                printf("Invalid Option\nPlease select a different option");
                break;
            }
        }
    } while (ch != 6);

    return 0;
}
