/*
-----------------------------------------------------------------------------
EXPLANATION:

ftruncate uses fd, so file needs to be opened.

CODE:
Opens the file and returns the file descriptor.
The file is truncated using the fd and the length.
-----------------------------------------------------------------------------
*/

#include<unistd.h>

int main(){
int len = 10;
//O_RDWR -> read & write
fd = open("/Desktop/file01.txt", O_RDWR);

if(fd == -1){
perror("open");
return 1;
}

if(ftruncate(fd, len) < 0){
perror("ftruncate");
return 1;
}

close(fd);
return 0;
}
