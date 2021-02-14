
// C Program to Count the Number of Vowels, Consonants and spaces//

#include<stdio.h>

int vow(char);
int cons(char);

int main(void)
{
    // creating an array to store sentence, and reading a line of string with a help of 'fgets' // 
    
    int vowels = 0, consonant = 0, spaces = 0, digits = 0, other = 0; 
    char sent[1000];
    printf("Enter sentence:\n");
    fgets(sent, sizeof(sent), stdin);
    
    // Iterating through a ForLoop. Counting all symbols by their groups
    
    for (int i = 0; sent[i] != 0; i++)
    {
        if (vow(sent[i]) == 1)
        {
            vowels += 1;
        }
        else if(sent[i] == ' ')
        {
            spaces += 1;
        }
        else if(cons(sent[i]) == 2 )
        {
            consonant += 1;
        }
        else if('0' <= sent[i] && sent[i] <= '9')
        {
            digits += 1;
        }
        else
        {
            other += 1;
        }
    }
    printf("Vowels %d, consonants %d, spaces %d, digits %d, other symbols %d. \n",vowels,consonant,spaces,digits,other-1);

}

// A defined-function for vowels counter// 

int vow(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// A defined-function for consonants counter//

int cons(char ch1)
{
    if( ('a' <= ch1 && ch1 <= 'z' ) || ('A' <= ch1 && ch1 <= 'Z') )
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
