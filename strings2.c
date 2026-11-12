#include <stdio.h>
#include <string.h>

int main() {
    
    char movie[50] = "Inception";
    char separator[] = " - ";
    char releaseYear[] = "2010";

   // write your code here
   strcat(movie, separator);
   
   strcat(movie, releaseYear);
   
   int length = strlen(movie);
   
   printf("Movie Info: %s",movie);
   printf("Title Length: %d characters",length);
   
   
   

    return 0;
}