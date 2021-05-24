#include <stdio.h>

int main()
{
    char c;
    while(c=getchar()){
        if(c=='\t'||c=='\b'){
            printf("//");
        }
        else putchar(c);
    }
}
