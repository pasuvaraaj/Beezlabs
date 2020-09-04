#include<stdio.h>
int main()
{
    
    char str="BeezLabs selected as Top 25 Start-ups in CNSC 2018 by CI-TIC";
    int count=0;
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='\n')
        {
            count++;
        }
    }
    printf("No of Characters : ",count);
}
        