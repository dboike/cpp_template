#include <string.h>
#include <stdlib.h>
#include <string>
#include "utils.h"

int main(int argc, char *argv[])
{
    if( cfunc1((char*)0) ) {
        printf("Fail\n");
    } else {
        printf("Pass\n");
    }
    
    printf("Running\n");
	return 0;
}
