#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]){
  FILE *fp = fopen("file", "r");
  
  char c;
  int count=0, i=0;
  char word[4];
  strcpy(word, argv[1]);

  while((c=fgetc(fp)) != EOF){
    if(c==word[0]){
      while(c==word[i]){
        c=fgetc(fp);
        i++;
      }
    if(word[i]=='\0') count++;
    }
  }
  fclose(fp);
  printf("%d\n", count);
  return 0;
}
