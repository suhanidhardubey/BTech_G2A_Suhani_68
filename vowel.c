#include <stdio.h>
int main()
{
    char a;
    printf ("Enter any Alphabet\n");
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("You entered Vowel");
    } 
    else 
    {
        printf("You entered consonants");
    }
    return 0;
}
