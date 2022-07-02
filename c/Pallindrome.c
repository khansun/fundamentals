#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    int i, len;
    int flag = 0;
    scanf("%s", s);

    len = strlen(s);
    for(i=0;i < len ;i++){
        if(s[i] != s[len-i-1]){
            flag = 1;
            break;
   }
}

    if (flag==1) {
        printf("naa");
    }
    else {
        printf("muhuhaha");
    }
    }

