//93. Program to check vowels in string.

#include<stdio.h>

int count_vowels(char []);

int check_vowel(char);

void main()
{
    char array[100];
    int c;
    clrscr();
    printf("Enter a string : ");
    gets(array);

    c = count_vowels(array);

    printf("\nNumber of vowels in %s : %d", array, c);
    getch();
}

int count_vowels(char a[])
{
    int count = 0, c = 0, flag;
    char d;

    do
    {
        d = a[c];

        flag = check_vowel(d);

        if (flag == 1)
            count++;

        c++;
    } while (d != '\0');
    return count;
}

int check_vowel(char a)
{
    if (a >= 'A' && a <= 'Z')
    {
        // Converting to lower case
        a = a + 'a' - 'A';
    }
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    return 0;
}
