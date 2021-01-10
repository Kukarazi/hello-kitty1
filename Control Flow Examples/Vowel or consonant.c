#include<stdio.h>

int main(void){

  char c;
  int lowercaseVowel,uppercaseVowel;
  scanf("%c", &c);

  lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if( lowercaseVowel || uppercaseVowel){
    printf("The character %c is vowel\n", c);
  }
  else{
    printf("The character %c is consonant\n", c);
  }

}
