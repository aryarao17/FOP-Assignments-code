#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str1);

    len = strlen(str1);
    printf("Length = %d\n", len);

    for(i = 0; i < len; i++) {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    printf("Enter another string: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    if(strcmp(str1, rev) == 0)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    if(strstr(str1, str2) != NULL)
        printf("Substring Found\n");
    else
        printf("Substring Not Found\n");

    return 0;
}
