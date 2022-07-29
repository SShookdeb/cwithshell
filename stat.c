#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main()
{
char *fd = "myfile.txt";
struct stat *buf;

buf = malloc(sizeof(struct stat));

stat(fd , buf);
int size = buf->st_size;
printf("%d",size);

free(buf);

return 0;
}
