#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
int fd;
char buffer[50];
char msg[50] = "hello who are you ";
fd = open("check.txt", O_RDWR);
if(fd != -1){
printf("check.txt is opened ");
write(fd, msg , sizeof(msg));
lseek(fd, 0, SEEK_SET);
read(fd, buffer, sizeof(msg));
printf("%s  writting is done",buffer);
//use the close function to close the file 
close(fd);
}
}
