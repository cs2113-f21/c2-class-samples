#include <stdio.h>
#include <string.h>

/*
void myputs( char * s){
    for(int i=0;s[i]; i++){
        putchar(s[i]);
    }
    printf("\n");
}
*/

void myputs( char * s){
   while( *s){
       putchar(*s++);
   }
   printf("\n");   
}
/*
int mystrlen(char * s){
    int count=0;
    for( ; s[count] ; count++);
    return count; 
}
*/
int mystrlen(char * s){
    int count=0;
    while(*s++ && ++count ); //short circuit 
    return count; 
}
/*
void mystrcpy(char * dest, char *src){
    //copies all the bytes up to and including the null terminator
    //from the src into the dest

    for(int i=0;i <= mystrlen(src);i++){
        dest[i] = src[i];
    }
    //dest[mystrlen(src)] = '\0';
}
*/

void mystrcpy(char * dest, char *src){
    //copies all the bytes up to and including the null terminator
    //from the src into the dest
    while(*dest++ = *src++);
}

void mystrncpy(char * dest, char *src, int n){

    while(*dest++ = *src++ && --n); 
    if( n == 0) *dest = '\0';
}

//for ( ; 1 ; ) == while(1); 
int main(){

    //C Strings

    //Java
    // String s = "hello wolrd";

    //C a string is NULL terminated array of chars
    //
    char s1[] = {'H','e','l','l','\0'};
    printf("%s\n",s1); 

    char s2[] = "Hello"; //<-- null terminated array of characters
    char * s3 = "World"; //<-- immutable 

    printf("%s %s\n",s2,s3); 

    s2[0] = 'h';
    //s3[0] = 'w'; //<-- this causes a segmentation fault
    
    printf("%s %s\n",s2,s3); 
    printf("------\n");
    myputs(s2);
    myputs("This is anything I want to be, and more!");

    printf("------\n");

    printf("sizeof(s2) = %lu\n", sizeof(s2)); //sizeof is a storage operator
    printf("strlen(s2) = %lu\n", strlen(s2)); //stlen is the length of the string, 
                                             //not including null terminator 
    printf("strlen(s3) = %lu\n", strlen(s3));
    printf("mystrlen(s3) = %d\n", mystrlen(s3));

    char s4[10];
    //copy the contents of s3 into s4
    mystrcpy(s4,s3);
    printf("s4: %s\n",s4);// it will print the same string as s3
}