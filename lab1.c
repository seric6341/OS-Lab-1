#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <lab1.h>
#include <main.c>

char* readString(char *fileName){
  int s1_length = strlen(fileName);
  int size = s1_length;
  char *s = calloc(size, sizeof(char));
  for(int i = 0; i < s1_length; i++){
   
    if s[i] == '\n':
      s[i] = '\0';
    s[i] = fileName[i];
  }
  printf("%s", s);
  return s;
  
    
    
}

char* mysteryExplode(const char* str){
  int s1_length = strlen(str);
  int size = s1_length;
  int explosion_size = size*(size+1)/2;
 
  char *s = calloc(explosion_size, sizeof(char));
  for(int i = 0; i < size; i++){
   
    if s[i] == '\n':
      s[i] = '\0';
    strncat(s, str, i);
  }
  
  printf("%s", s);
  return s;
}




