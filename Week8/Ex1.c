#include <stdio.h>
#define HET '#'

int main(){
    char c, c1 = '*'; 
    while((c = getchar() != HET))
    {
        if(c == ' ' && c1 == ' ') continue;
        putchar(c);
        c1 = c;
    }
    return 0;
} 
