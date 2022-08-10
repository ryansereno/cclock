#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int h,m,s;
    int d = 1000;
    printf("Input time: ");
    scanf("%d%d%d",&h,&m,&s);
    if (h > 12 || m > 60 || s > 60){
        printf("Invalid time.\n");
        exit(0);
    }
    while(1){
        s++;
        if(s>59){
            m++;
            s = 0;
        }
        if (m>59){
            h++;
            m = 0;
        }
        if(h>12){
            h=1;
        }
        printf("Clock: ");
        printf("\n %d:%d:%d",h,m,s);
        system("sleep 1");
        system("clear");
    }

}

