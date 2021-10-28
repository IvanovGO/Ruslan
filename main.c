

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int fsize(char* file)
{
    FILE * f = fopen(file, "r");
    fseek(f, 0, SEEK_END);
    unsigned long len = (unsigned long)ftell(f);
    fclose(f);
    return len;
}




int main (int argc, char *argv[])
{

FILE *code;
char *pcode;

char str[0xff];

int stringcount=0;
 if ((code = fopen(argv[1], "r")) == NULL)
  {
    printf("Не удалось открыть файл\n");
    return 0;
  }
  int codelen=fsize(argv[1]);

  pcode = malloc(codelen);
int red = fread(pcode,codelen,1,code);
//while (!feof(code)) {    }
printf("Строк читано %i блок(ов) рамзером %i байт.\n",red,codelen);
 fclose(code);

//printf("%s",pcode);


  return 0;
}
