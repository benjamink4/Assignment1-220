#include <stdio.h>
char* print_any_base(unsigned long num, unsigned int base){

    return " ";

}

unsigned int count_vowels(char *str){
    unsigned int result=0;
    for(unsigned int i=0;i< sizeof(str)*8;i++){
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e'|| str[i]=='I' || str[i]=='i' || str[i]=='o' ||str[i]=='O'|| str[i]=='u'||str[i]=='U'){
            result+=1;
        }
    }
    return result;

}
char *interleave(char *s1, char *s2){

    char*res;
    char *pi1, *pi2, *pi3;
    pi1 = (char *) &s1;
    pi2 = (char *) &s2;
    pi3 = (char *) &res;
    for( unsigned int i=0;i<sizeof(s1)*8;i++){
        pi3[2*i] = s2[i];
        pi3[2*i+1] = s1[i];
    }
    return res;

}
unsigned char *prime_vector(unsigned long num){
    return " ";

}
char *reverse_words(char *str){
    return " ";

}
int main() {
    //printf("Hello, World!\n");
    //printf("%d",count_vowels("Hello world"));

    printf(interleave("Hello" ,"world"));
    printf("Hello world");
    return 0;
}
