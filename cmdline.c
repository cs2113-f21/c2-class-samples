#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

    char * secret = "password";

    /*
    for(int i=0;i<argc;i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    }
    */

   if( argc < 2){
       fprintf(stderr, "ERROR: require password\n");
       return 1;
   }

    if( argc < 3){
       fprintf(stderr, "ERROR: require count\n");
       return 1;
    }

    int n;
    if( sscanf(argv[2],"%d",&n) != 1){
        fprintf(stderr, "ERROR: count should be a number\n");
        return 1;
    }

    if(strcmp(argv[1],secret) == 0){
        //for(int i=0;i<atoi(argv[2]);i++){
        for(int i=0;i<n;i++){
            printf("Hippos rule!\n");
        }
    }


}