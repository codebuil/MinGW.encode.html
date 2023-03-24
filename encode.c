#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int i;
    char mems[20];
    char *ssss="hello world......\r\n";
    i=strlen(ssss);
    printf("\033c\033[44;30m\r\n\r\n");
    for(n=0;n<i;n++){
        if(ssss[n]==10 || ssss[n]==13){
            strcpy(mems," <br> ");
        }else{
            if(ssss[n]==32){
                sprintf(mems,"&ensp; ");
            }else{
                sprintf(mems,"&#%03d ",(int)ssss[n]);
            }
        }
        printf("%s",mems);
        
    }

}

