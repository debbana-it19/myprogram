
#include<stdio.h>
int main()
{
char c,isLowercaseVowel,isUppercaseVowel;
printf("enter the letter");
scanf("%c",&c);
isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if(isLowercaseVowel || isUppercaseVowel)
printf("%c ia a vowel.",c);
else
printf("%c is a consonant.",c);
return 0;
}



