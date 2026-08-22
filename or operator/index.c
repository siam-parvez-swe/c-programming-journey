#include<stdio.h>

int main ()
{
    int num = 5;
    if(num>=1 || num<=10){
        printf("yes \n");
    }
    else{
        printf("no \n");
    }

    // vowel checker
    char ch ='i';
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='u'|| ch=='a'){
        printf("%c is vowel \n", ch);
    }
    else{
        printf("%c is a consonant \n", ch);
    }
    return 0;
}