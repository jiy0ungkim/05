#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, y, result;
    char op;
    
    printf("Enter the calculation : ");
    scanf("%d %c %d", &x, &op, &y);
    
    switch(op){
               case '+':
                    result = x+y;
                    break;
               
               case '-':
                    result = x-y;
                    break;
               
               case '*':
                    result = x*y;
                    break;
               
               case '/':
                    result = x/y;
                    break;
               
               default:
                    break;
               }
       
    printf("= %d\n", result);

    system("PAUSE");	
    return 0;
}
