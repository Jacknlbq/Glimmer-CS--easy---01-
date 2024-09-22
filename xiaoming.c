#include <stdio.h>
int main() {
    char code[7];
    int b=1;
    for(;;){
		printf("Show me your code,please.\n");
       scanf("%s",&code);
        for(int i=0;i<=5;i++)
        {
            if(code[i]>57||code[i]<48)b=0;
             //printf("%c %d\n",code[i],b);
        }
             if(code[6]>47&code[6]<58)
             {
                printf("Fake code!\n");
                 continue;
             }
        if(b==1)
        {
            printf("I am super hacker!");
        return 0;}
        printf("Fake code!\n");
        b=1;
    }
    return 0;
}