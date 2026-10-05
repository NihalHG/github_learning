#include<stdio.h>
#include<string.h>
int main(){
    int lenword,lenstring,i,k,flag=0,j;
    char s[500],w[50];
    printf("Enter the string:\n");
    gets(s);
    printf("Enter the word to be deleted from the string:\n");
    gets(w);
    lenstring=strlen(s);
    lenword=strlen(w);
    for(i=0;i<=lenstring-lenword;i++){
        for(j=0;j<lenword;j++){
            if(s[i+j]!=w[j])
                break;
        }
        if(j==lenword){
           flag=1;
           break;
        }

    }
     if(flag==1){
        for(k=i;k<lenstring-lenword;k++){
            s[k]=s[k+lenword];
        }
     }
     else
       { printf("The word not found in the given string\n");
        return 0;}
     printf("the modified string is;\n");
    for(i=0;i<lenstring-lenword;i++){
        printf("%c",s[i]);
    }
     return 0;
     
       }
