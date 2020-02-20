#include <stdio.h> 
#include <string.h>
//inefficient way to read first line of file due to the break
//example is a txt file comprised of a couple lines
int main(int argc, const char * argv[]) 
{ 
    FILE *fp ;
    char buff[255]; 
    fp = fopen("example.txt", "r");
    while (fgets(buff, sizeof(buff), fp) != NULL)
    {
        printf("First line: %s ",buff);
        break;
        }

    fclose(fp);
}
