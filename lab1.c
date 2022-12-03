#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* readString(char *fileName){
  int s1_length = strlen(fileName);
  int size = s1_length + 1;
  char *s = calloc(size, sizeof(char));
  for(int i = 0; i < s1_length; i++){
    s[i] = fileName[i];
  }
  return s;
  
    
    
}

char* mysteryExplode(const char* str){
  int s1_length = strlen(str);
  int size = s1_length + 1;
  int explosion_size = size*(size+1)/2;
 
  char *s = calloc(explosion_size, sizeof(char));
  for(int i = 0; i < size; i++){
    strncat(s, str, i);
  }
  

  return s;
}




int main(void) {

  printf(readString("big"));
  
  printf(mysteryExplode("big"));
}
