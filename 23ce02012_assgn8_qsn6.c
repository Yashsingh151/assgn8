#include<stdio.h>

int main() {
    int l1, l2;

    printf("Enter the length of first string: ");
    scanf("%d", &l1);

    char str1[l1];
    printf("Enter the string: ");
    scanf("%s", &str1);

    printf("\nEnter the length of second string: ");
    scanf("%d", &l2);

    char str2[l2];
    printf("Enter the string: ");
    scanf("%s", &str2);
    
    int concat_length = l1 + l2;

    char concatStr[concat_length];

    char *p1 = str1;
    char *p2 = str2;
    char *p_concat = concatStr;

    while(*p1 != '\0') {
        *p_concat = *p1;
        p_concat++;
        p1++;
    } 

    while(*p2 != '\0') {
        *p_concat = *p2;
        p_concat++;
        p2++;
    } 

    *p_concat = '\0';

    printf("\nConcatenated string: %s\n", concatStr);

    return 0;
}
