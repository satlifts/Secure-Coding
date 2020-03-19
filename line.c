#include <stdio.h> 
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() 
{ 
    FILE *fp ;
    char *storage[1000];
    char buff[250]; 
    fp = fopen("example.txt", "r");
    int length;
    length = strlen(buff);
    int i = 0; 
    while(fgets(buff, sizeof(buff), fp) != NULL)//storing in memory
    {
       // printf("%s", buff);
        storage[i]= buff; 
        //printf("%s", storage[i]);
        i++; 

    }
    //printf("%s", storage[0]);
    srand(time(NULL)); 
    int randomline; 
    randomline = (rand()%i)+1;
    //printf("%d \n",randomline);
    printf("%s", storage[randomline]);
    
    fclose(fp);
    return 0;
}