#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

intmain() 
{ 

  

    // make two process which run same 

    // program after this instruction 
    fork();


  

    printf("Hello world!\n"); 

    return 0; 
}
