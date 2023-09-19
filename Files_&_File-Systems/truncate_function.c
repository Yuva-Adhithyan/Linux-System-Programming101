/*
-----------------------------------------------------------------------------
EXPLANATION:

File’s length can be changed via an operation called truncation.

In this code:
Truncates the file length to 10.
If more than 10 bytes of content present in file01.txt, it will be erased.
-----------------------------------------------------------------------------
*/

#include<unistd.h>

int main(){
int len = 10;
if(truncate("/Desktop/file01.txt", len) < 0){
perror("truncate");
return 1;
}
return 0;
}

//truncates the file length to 10.
//If more than 10 bytes of content present in file01.txt, it will be erased.
