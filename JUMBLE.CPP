#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define QUES 10

void main()
{
  char jmb[10][10]={"blahapet","uthigb","aacrrethc","plaah","etba","mamag","angom","pascnih","abcabeg","rgonae"};
  char crr[10][10]={"alphabet","github","character","alpha","beta","gamma","mango","spinach","cabbage","orange"};
  char *user;
  int chance,score=0;
  int i=0;

  clrscr();

   do
   {  chance=1;
       cout<<endl<<endl;
     do
     {
      cout<<"Jumbled word "<<i+1<<": \""<<jmb[i]<<"\" chance -> "<<chance<<" \n Correct Word: ";
      gets(user);

      if(strcmp(crr[i],strlwr(user))==0)
      {
	 switch(chance)
	 {
	     case 1:  score += 10;  break;
	     case 2:  score += 8; break;
	     case 3:  score += 6; break;
	     case 4:  score += 4; break;
	     case 5:  score += 2; break;
	 }
	 break;
      }
	chance++;

     }while(chance<=5);

     i++;

   }while(i<QUES);

   if(score>0)
    cout<<"\n\n   Your Total score is "<<score;
   else
    cout<<"\n\n   You earned no score !!";
  getch();
}