#include"myutils.h"
int isPalindrome(char* s1, char* s2)
{
    //char s1[20]="12321";
    //char s2[20]="12321";

    if(!strcmp(s1,s2))
    {
        printf("\n Is a Palindrome");
        return 1;
    }
    else
    {
        printf("\n Is Not a Palindrome");
        return 0;
    }
}
