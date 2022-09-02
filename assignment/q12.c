#include <stdio.h>
#include <string.h>
void compare(char str1[],char str2[]){
    int i,j,length1,length2,count=0;
    length1=strlen(str1);
    length2=strlen(str2);
    for(i=0;i<length1;i++){
        if(str1[i]==str2[0]){
            for(j=0;j<length2;j++){
                if(str1[i+j]==str2[j]){
                    count++;
                }
            }
        if(count==length2){
            printf("The word is present");
            return;
        }
        }
    }
    if(count!=length2){
        printf("The word isn't present:");
        return;
    }
    
}
int main(){
    printf("Enter the sentence:\n");
    char str1[100];
    fgets(str1,100,stdin);
    char str2[20];
    printf("Enter the word to search: \n");
    scanf("%s",str2);
    compare(str1,str2);
}