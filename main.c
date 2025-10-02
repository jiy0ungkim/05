#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, i;
    int sum = 0;
    
    printf("Input an integer : ");
    scanf("%d", &x);
    
    for (i=1; i<=x; i++)
        sum += i;
     
    printf("The result is %d\n", sum);

    system("PAUSE");	
    return 0;
}
