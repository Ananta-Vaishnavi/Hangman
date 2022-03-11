#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void dashes();
void search();
void hangman();
void checkforwin();
void move();
char blank[70],letter;
int guess=0;
char word[70]="thank you for checking this out";
void dashes()
{
  	
  int j=0;
  for (int i=0;i<strlen(word);i++)
  {

  if (word[i]==' '||i==0)
  {
   int c=0;
   printf("\n\n\n--> ");
  for(j=i;word[j]!=' ';j++)
  c++;
 }  
  if(word[i]!=' ')
  printf(" %c ",blank[i]);
}
printf("\n");               
}
void hangman()
{
	printf("\n\n");
	if(guess==0)
	{
	
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |  \n");
	printf("    |  \n");
	printf("    |  \n");
	printf("    |  \n");
	printf("    |  \n");
	printf("    |__________\n");
}
	else if (guess==1)
	{
	
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |__________\n");
}
	else if (guess==2)
	{
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |     |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |__________\n");
    }
	else if (guess==3)
	{
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |    \\|\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |__________\n");
}
	else if (guess==4)
	{
	
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |    \\|/\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |__________\n");
    }
	else if (guess==5)
	{
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |    \\|/\n");
	printf("    |     |\n");
	printf("    |\n");
	printf("    |\n");
	printf("    |__________\n");
    }
	else if (guess==5)
	{
	
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |   \\|/\n");
	printf("    |     |\n");
	printf("    |     |\n");
	printf("    |\n");
	printf("    |__________\n");
}
	else if (guess==6)
	{
	
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |    \\|/\n");
	printf("    |     |\n");
	printf("    |    /|\n");
	printf("    |\n");
	printf("    |__________\n");
}
	else if (guess==7)
	{
	
	printf("    ___________\n");
	printf("    |     |\n");
	printf("    |     O\n");
	printf("    |    \\|/\n");
	printf("    |     |\n");
	printf("    |    /|\\\n");
	printf("    |\n");
	printf("    |__________\n");
}
}
void search()
{
	printf("\n\n\n==>Make your guess\n");
	getchar();
	scanf("%c",&letter);
	for(int i=0;i<strlen(word);i++) 
	{
		if(word[i]==letter)
		 
		{
			blank[i]=letter;
        }


}
}
void move()

{
	int a=0;
	for(int i=0;i<strlen(word);i++) 
	{
		if(word[i]==letter)
		 
		{
			a++;
		}
}
   if(a==0)
   guess++;
   
}
void checkforwin()
{
if(strcmp(word,blank)==0)
{
printf("You won!!!");
exit(0);
}
if(guess==7)
{
  printf("\n\nBetter luck next time");
  exit(0);
}
}
int main()
{
	for(int i=0;i<strlen(word);i++)
  {
  	blank[i]='_';
  }
 
	while(guess!=7)
  {
  dashes();
  hangman();
  //printf("%d",guess);
  search();
  move();
  system("cls");
  if(guess==7)
  hangman();
  checkforwin();
 }
  }





