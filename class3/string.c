#include <stdio.h>
#include <string.h>



int strlen_other(const char *str){
    int len=0;
    int flag = 0;
    int i =0;
    while (flag==0)
    {
        if (str[i]=='\0')
        {
            flag =1;
        }
        len++;
        i++;
    }
    return len;
    
    
}


int main(){
    char str1[]= "hello";
    char str2[] = {'H','e','l','l','o'};

    char str3[100];
    strncat(str3,str2,5);
    strcat(str3,str1);
    printf("final= %s\n", str3);
    int value = strlen_other(str3);
    printf("%d\n", value);



    
}