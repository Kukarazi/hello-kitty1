// C Program to Find the Frequency of Characters in a String// 


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int counter = 0;
    char sent[500];
    printf("Enter some text: \n");
    fgets(sent, sizeof(sent), stdin); // Getting string from the user

    char ch;
    printf("Enter char whose frequency you want to find:\n");
    scanf("%c", &ch); // getting a char,whose frequency user want to find

    for (int i = 0; i < *sent; i++) // iterating over forLoop,finding char and adding to counter
    {
        if (sent[i] == ch)
        {
            counter = counter + 1; // counter of frequency of 'ch'
        }
        else
        {
            continue;
        }
    }
    printf("Counter is: %d\n", counter);
}
