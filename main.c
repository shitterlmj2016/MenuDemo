#include <stdio.h>
#include "string.h"
int main() {

    label0:
    puts("1:goto 1");
    puts("2:goto 2");
    puts("x:exit");

    char buf[255];
    scanf("%s", buf);
    if(strcmp(buf,"1")==0) goto label1;
    if(strcmp(buf,"2")==0) goto label2;
    if(strcmp(buf,"x")==0) goto exit;

    label1:
    puts("Entering 1");
    puts("Press x to return");
    puts("Press other key to continue");

    char buf1[255];
    scanf("%s", buf1);
    char ch1 = buf1[0];
    if(strcmp(buf1,"x")==0) goto label0;
    else puts("continue...");
    goto label0;


    label2:
    puts("Entering 2");
    puts("Press any key to continue");
    getchar();
    goto label0;

    exit:
    return 0;
}