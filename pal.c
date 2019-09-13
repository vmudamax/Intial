#include<stdio.h>
main()
{
char str[20],revstr[20];
int flag;
printf("enter the string");
gets(str);
//puts(str);
int i=0,j=0;
for(i=0;str[i]!='\0';i++)
j++;
j=j-1;
i=0;
printf("%d",j);
while(str[i])
{
revstr[i]=str[j];
i++;
j--;
}
revstr[i]='\0';
flag=0;
i=0;
printf("%s",str);
printf("SEE...%c",str[i]);
for(;str[i];i++)
{

printf("SEEvenky................venky");
if(str[i]==revstr[i])
flag=1;
else 
flag=0;
}
if(flag)
printf("pallindrome");
else
printf("not a plindreome");

}

