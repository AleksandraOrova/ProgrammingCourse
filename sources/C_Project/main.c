#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\n\n\n");
    int i;
    if(argc!=0){
        for(i = 0; i<argc; i++)
            if(argv[i][0]=='a')
                printf("Banana!");
    }
    printf("Hello World!\n\n\n");
    return 0;
}

