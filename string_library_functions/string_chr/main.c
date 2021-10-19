/*string_chr()*/
#include <stdio.h>  
#include <string.h> 
int main ()  
{  
      
    const char *s = "javatpoint";  
    char ch;  
      
    printf (" Original string: \"%s\" \n ", s);  
      
     
    printf ("Please enter a character you want to search in the string: ");  
    scanf (" %c", &ch);  
      
    
    if ( strchr (s, ch) != NULL )  
    {  
        printf (" \n '%c' is found in \"%s\" ", ch, s);  
        }  
          
    else  
        printf (" \n '%c' is not found in \"%s\" ", ch, s);  
      
    return 0;     
}  
