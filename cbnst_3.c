//print all vowels present in a string
#include<stdio.h>
int main()
{
    char str[100];
    int flag=0;
    printf("Enter a string :");
    scanf("%s",&str);
    int len=strlen(str);
    printf("Vowels present in the given string : ");
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o' ||
            str[i]=='u' ||str[i]=='A'|| str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U')
        {
            printf("%c ",str[i]);
                flag=1;
        }
    }
    if(flag==0)
    {
        printf("No vowels");
    }
}
