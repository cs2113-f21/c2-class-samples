#include <stdio.h>
#include <string.h>

int mystreql(char * s1, char * s2){
    //return 1 if they are equal
    //return 0 if they are not
    int i;
    for(i=0;s1[i] && s2[i];i++){
        if(s1[i] != s2[i]) return 0;        
    }

    if(s1[i] == s2[i]) return 1;
    
    return 0;
}

int main(){

    char * secret = "password"; 

    char userinput[16];


    //check does input match the password?
    //if so print a secret message 
    printf("Enter a password:\n");

    //scanf("%d",&i);
    scanf("%s",userinput); 

    //secret == secret -- that true! 
    //if( userinput == secret){ //not ture b/c not same memory!
    //if ( mystreql(userinput,secret)){
    if( strcmp(userinput,secret) == 0){
        printf("Hippos rule!\n");
    }else{
        printf("Colonials drule?!?\n");
    }


}