#include <stdio.h>  
  
main ()  
{  
    char a, b;   
    int ascii;  
      
      
    printf (" Enter the Upper Case Character: ");  
    scanf (" %c", &a);  
    ascii = a + 32;  
    printf (" %c character in Lower case is: %c", a, ascii);  
        
    printf (" \n Enter the Lower Case Character: ");  
    scanf (" %c", &b);  
    ascii = b - 32;  
    printf (" %c character in the Upper case is: %c", b, ascii);  
      
}
