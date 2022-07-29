#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
char* args[] = {"./Exac",NULL};
execvp(args[0],args);
printf("Ending ...");
return 0;
}
