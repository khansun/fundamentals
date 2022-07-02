#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    int i, len,T;
    int flag = 0;
    scanf("%d", &T);


    len = strlen(s);
   while(flag<=T){


    scanf(" %s", s);

    for(i=0;i < len ;i++){
        if(s[i] != s[len-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        printf(" No ");
    }
    else {
        printf(" Yes ");
    }
    }
  return 0;
}
