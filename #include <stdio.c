#include <stdio.h>
#include <string.h>

int main() {
    
    char y;
    char x = 'x';
    char q;
    
    printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*                                             *\n");
    printf("*               GAMBLIN' GREG!!!              *\n");
    printf("*                                             *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n\n");

    printf("Press [x] to play.\n");
    scanf("%c", &y);
    
    
    
    

    
    if (x == y){
        
        
      
    printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*     [G]AMBLE        * *      [B]ANKING      *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("*     [R]ESULTS       * *      [L]EAVE        *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\n");
        
    printf("Select an option.\n");  
    
    scanf(" %c", &q);
    printf("\n");
        
        switch(q) {
      case 'g' :
         printf("Gambling Time!\n" );
         break;
         
         
         
         
         
         
         
         
      case 'b' :
         printf("Time to do some banking.\n" );
         break;
         
         
         
         
         
         
         
         
         
      case 'r' :
         printf("Lets see how you did.\n" );
         break;
         
         
         
         
         
         
         
         
      case 'l' :
         printf("Goodbye.\n" );
         break;
         
         
         
         
         
         
         
         
      default :
         printf("Invalid input\n" );
   }
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    else
    { printf("x was not pressed. Game failed to load.");}
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;}