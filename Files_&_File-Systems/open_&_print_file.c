#include<stdio.h>

int main(){
  FILE *fp = fopen("file", "r");
  
  if(fp == NULL) {
    perror("Error: Open");
    return 1;
  }
  char c;
  while((c = fgetc(fp)) != EOF ) printf("%c", c);
  fclose(fp);
  return 0;
}
