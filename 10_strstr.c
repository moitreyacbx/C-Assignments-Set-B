#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Returns the starting position of `string2` in `string1`, or 0 if `string2` is not found in `string1`.
int find_string(const char *string1, const char *string2)
{
    // Check for empty string2.
    if (strlen(string2) == 0)
    {
        return 0;
    }

    // Check for empty string1.
    if (strlen(string1) == 0)
    {
        return 0;
    }

    // Loop over the string1 and try to find the string2.
    for (int i = 0; i < strlen(string1); i++)
    {
        // If the first character of the string2 is found in the string1,
        // try to match the rest of the string2.
        if (string1[i] == string2[0])
        {
            // Keep track of whether we have found a match.
            int match = 1;

            // Loop over the remaining characters in the string2.
            for (int j = 1; j < strlen(string2); j++)
            {
                // If we reach the end of the string1 before the end of the string2,
                // the string2 cannot be found in the string1.
                if (i + j >= strlen(string1))
                {
                    return 0;
                }

                // If the characters do not match, break out of the loop.
                if (string1[i + j] != string2[j])
                {
                    match = 0;
                    break;
                }
            }

            // If we found a match, return the starting position.
            if (match)
            {
                return i + 1;
            }
        }
    }

    // If we reach this point, the string2 was not found in the string1.
    return 0;
}

int main(int argc, char **argv)
{
    // Allocate memory for the two strings.
    char *string1 = malloc(100);
    char *string2 = malloc(100);

    // Read the strings from the keyboard.
    printf("Enter the bigger string: ");
    fgets(string1, 100, stdin);
    printf("Enter the smaller string : ");
    fgets(string2, 100, stdin);

    // Find the starting position of the string2 in the string1.
    int position = find_string(string1, string2);
    if (position != 0)
        printf("The string '%s'is present in string '%s'in %d position", string2, string1, position);
    else
        printf("The string '%s'is not present in string '%s'", string2, string1);
}
