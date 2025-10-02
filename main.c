#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    int answer = 59;
    int trial = 0;
    
    do{
        printf("Guess a number: ");
        scanf("%d", &x);
        trial += 1;
        
        if (x > answer)
           printf("high!\n");
        else if (x < answer)
           printf("low!\n"); 

        }while(x != answer);
        
    printf("Congratulation! trials: %d\n", trial);

    system("PAUSE");	
    return 0;
}
