#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
char c, str[100],word[50],min[20],max[20];
int i=0,j=0,flag=0;

do{
fflush(stdin);
c=getchar();
str[i]=c;
}while((str[i++])!='\n');
str[i-1]='\0';


printf("iiiiiiiiiiiiiiiiiiiiiiiiii");
puts(str);
for(i=0;i<strlen(str);i++)
{
while(i<strlen(str)&&!isspace(str[i])&&isalnum(str[i]))
{
word[j]=str[i];
j++;
i++;
}
if(j!=0)
{
word[j]='\0';
if(!flag)
{
flag=!flag;
strcpy(max,word);
strcpy(min,word);
}
if(strlen(word)>strlen(max))
strcpy(max,word);
if(strlen(word)<strlen(min))
strcpy(min,word);
j=0;
}
}
printf("large:%s and small:%s",max,min);
}



