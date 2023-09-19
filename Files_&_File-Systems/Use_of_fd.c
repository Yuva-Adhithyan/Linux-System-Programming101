#include<unistd.h>

int main(){
int fd;
//opening file01.txt for reading
fd = open("file01.txt", O_RDONLY);
//open returns file descriptor of the file to fd variable
if(fd==-1){}

char buffer[1024];
//reading bytes of data from file01.txt
int bytes_read = read(fd, buffer, sizeof(buffer));
//Handles error
if(bytes_read == -1){} 

close(fd);
return 0;
}
