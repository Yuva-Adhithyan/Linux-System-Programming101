/*
--------------------------------------------------------------------------
EXPLANATION:

Writing a byte to a file position beyond 
the end of the file will cause the intervening 
bytes to be padded with zeros.
--------------------------------------------------------------------------
*/

#include<stdio.h>

int main(){
//file01 opened in write and binary mode
FILE *file=fopen("file01.txt", "wb");

if(file == NULL){
perror("Error opening file");
return 1;
}

//Set file pointer's position 10bytes ahead from beginning of file
fseek(file, 10, SEEK_SET);
fputc('A', file);
fclose(file);

return 0;
}

//Before file01 -> Hello
//After file01  -> Hello00000A


