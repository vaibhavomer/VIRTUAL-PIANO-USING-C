#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void discrete();
void continuous();
void fun();

void continuous()
{
cout<<"Press Shift+E to exit";
int cz=0;
char input;
do
{
//clrscr();
input=getch();
if(input=='E')
{
nosound();
exit(0);
}
else if(input==113)
{
sound(100);
delay(100);
cout<<"\nq pressed";
}
else if(input==119)
{
sound(150);
delay(100);
cout<<"\nq pressed";
}
else if(input==1)
{
discrete();
}
else if(input==3)
{
fun();
}
else if(input==101)
{
sound(200);
delay(100);
cout<<"\ne pressed";
}
else if(input==114)
{
sound(250);
delay(100);
cout<<"\nr pressed";
}
else if(input==116)
{
sound(300);
delay(100);
cout<<"\nt pressed";
}
else if(input==121)
{
sound(350);
delay(100);
cout<<"\ny pressed";
}
else if(input==117)
{
sound(400);
delay(100);
cout<<"\nu pressed";
}
else if(input==105)
{
sound(450);
delay(100);
cout<<"\ni pressed";
}
else if(input==111)
{
sound(500);
delay(100);
cout<<"\no pressed";
}
else if(input==112)
{
sound(550);
delay(100);
cout<<"\np pressed";
}
else if(input==97)
{
sound(600);
delay(100);
cout<<"\na pressed";
}
else if(input==115)
{
sound(650);
delay(100);
cout<<"\ns pressed";
}
else if(input==100)
{
sound(700);
delay(100);
cout<<"\nd pressed";
}
else if(input==102)
{
sound(750);
delay(100);
cout<<"\nf pressed";
}

else if(input==103)
{
sound(800);
delay(100);
cout<<"\ng pressed";
}
else if(input==104)
{
sound(850);
delay(100);
cout<<"\nh pressed";
}
else if(input==106)
{
sound(900);
delay(100);
cout<<"\nj pressed";
}
else if(input==107)
{
sound(950);
delay(100);
cout<<"\nk pressed";
}
else if(input==108)
{
sound(1000);
delay(100);
cout<<"\nl pressed";
}
else if(input==122)
{
sound(1050);
delay(100);
cout<<"\nz pressed";
}
else if(input==120)
{
sound(1100);
delay(100);
cout<<"\nx pressed";
}
else if(input==99)
{
sound(1150);
delay(100);
cout<<"\nc pressed";
}
else if(input==118)
{
sound(1200);
delay(100);
cout<<"\nv pressed";
}
else if(input==98)
{
sound(1250);
delay(100);
cout<<"\nb pressed";
}
else if(input==110)
{
sound(1300);
delay(100);
cout<<"\nn pressed";
}
else if(input==109)
{
sound(1350);
delay(100);
cout<<"\nm pressed";
}
cz++;
}while(cz<3000);
}//Contunuous ends//

void discrete()
{
cout<<"Press Shift+E to exit";
int cz=0;
char input;
do
{
clrscr();
input=getch();
if(input=='E')
exit(0);
else if(input==113)
{
sound(100);
delay(100);
nosound();
cout<<"\nq pressed";
}
else if(input==119)
{
sound(150);
delay(100);
nosound();
cout<<"\nq pressed";
}
else if(input==101)
{
sound(200);
delay(100);
nosound();
cout<<"\ne pressed";
}
else if(input==114)
{
sound(250);
delay(100);
nosound();
cout<<"\nr pressed";
}
else if(input==116)
{
sound(300);
delay(100);
nosound();
cout<<"\nt pressed";
}
else if(input==121)
{
sound(350);
delay(100);
nosound();
cout<<"\ny pressed";
}
else if(input==117)
{
sound(400);
delay(100);
nosound();
cout<<"\nu pressed";
}
else if(input==105)
{
sound(450);
delay(100);
nosound();
cout<<"\ni pressed";
}
else if(input==111)
{
sound(500);
delay(100);
nosound();
cout<<"\no pressed";
}
else if(input==112)
{
sound(550);
delay(100);
nosound();
cout<<"\np pressed";
}
else if(input==97)
{
sound(600);
delay(100);
nosound();
cout<<"\na pressed";
}
else if(input==115)
{
sound(650);
delay(100);
nosound();
cout<<"\ns pressed";
}
else if(input==100)
{
sound(700);
delay(100);
nosound();
cout<<"\nd pressed";
}
else if(input==102)
{
sound(750);
delay(100);
nosound();
cout<<"\nf pressed";
}

else if(input==103)
{
sound(800);
delay(100);
nosound();
cout<<"\ng pressed";
}
else if(input==104)
{
sound(850);
delay(100);
nosound();
cout<<"\nh pressed";
}
else if(input==106)
{
sound(900);
delay(100);
nosound();
cout<<"\nj pressed";
}
else if(input==107)
{
sound(950);
delay(100);
nosound();
cout<<"\nk pressed";
}
else if(input==108)
{
sound(1000);
delay(100);
nosound();
cout<<"\nl pressed";
}
else if(input==122)
{
sound(1050);
delay(100);
nosound();
cout<<"\nz pressed";
}
else if(input==120)
{
sound(1100);
delay(100);
nosound();
cout<<"\nx pressed";
}
else if(input==99)
{
sound(1150);
delay(100);
nosound();
cout<<"\nc pressed";
}
else if(input==118)
{
sound(1200);
delay(100);
nosound();
cout<<"\nv pressed";
}
else if(input==98)
{
sound(1250);
delay(100);
nosound();
cout<<"\nb pressed";
}
else if(input==110)
{
sound(1300);
delay(100);
nosound();
cout<<"\nn pressed";
}
else if(input==109)
{
sound(1350);
delay(100);
nosound();
cout<<"\nm pressed";
}
cz++;
}while(cz<3000);
}//Discrete ends//


void fun()
{
clrscr();
cout<<"Press Shift+E to exit";
cout<<"\nPress keys to play\n";
int cz=0;
char input;
do
{
input=getch();
if(input=='E')
exit(0);
else if(input==113)
{
sound(100);
delay(100);
nosound();
delay(10);
sound(100);
delay(100);
nosound();
//cout<<"\nq pressed";
}
else if(input==119)
{
sound(150);
delay(100);
nosound();
delay(10);
sound(150);
delay(100);
nosound();
//cout<<"\nq pressed";
}
else if(input==101)
{
sound(200);
delay(100);
nosound();
delay(10);
sound(200);
delay(100);
nosound();
//cout<<"\ne pressed";
}
else if(input==114)
{
sound(250);
delay(100);
nosound();
delay(10);
sound(250);
delay(100);
nosound();
//cout<<"\nr pressed";
}
else if(input==116)
{
sound(300);
delay(100);
nosound();
delay(10);
sound(300);
delay(100);
nosound();
//cout<<"\nt pressed";
}
else if(input==121)
{
sound(350);
delay(100);
nosound();
delay(10);
sound(350);
delay(100);
nosound();
//cout<<"\ny pressed";
}
else if(input==117)
{
sound(400);
delay(100);
nosound();
delay(10);
sound(400);
delay(100);
nosound();
//cout<<"\nu pressed";
}
else if(input==105)
{
sound(450);
delay(100);
nosound();
delay(10);
sound(450);
delay(100);
nosound();
//cout<<"\ni pressed";
}
else if(input==111)
{
sound(500);
delay(100);
nosound();
delay(10);
sound(500);
delay(100);
nosound();
//cout<<"\no pressed";
}
else if(input==112)
{
sound(550);
delay(100);
nosound();
delay(10);
sound(550);
delay(100);
nosound();
//cout<<"\np pressed";
}
else if(input==97)
{
sound(600);
delay(100);
nosound();
delay(10);
sound(600);
delay(100);
nosound();
//cout<<"\na pressed";
}
else if(input==115)
{
sound(650);
delay(100);
nosound();
delay(10);
sound(650);
delay(100);
nosound();
//cout<<"\ns pressed";
}
else if(input==100)
{
sound(700);
delay(100);
nosound();
delay(10);
sound(700);
delay(100);
nosound();
//cout<<"\nd pressed";
}
else if(input==102)
{
sound(750);
delay(100);
nosound();
delay(10);
sound(750);
delay(100);
nosound();
//cout<<"\nf pressed";
}

else if(input==103)
{
sound(800);
delay(100);
nosound();
delay(10);
sound(800);
delay(100);
nosound();
//cout<<"\ng pressed";
}
else if(input==104)
{
sound(850);
delay(100);
nosound();
delay(10);
sound(850);
delay(100);
nosound();
//cout<<"\nh pressed";
}
else if(input==106)
{
sound(900);
delay(100);
nosound();
delay(10);
sound(900);
delay(100);
nosound();
//cout<<"\nj pressed";
}
else if(input==107)
{
sound(950);
delay(100);
nosound();
delay(10);
sound(950);
delay(100);
nosound();
//cout<<"\nk pressed";
}
else if(input==108)
{
sound(1000);
delay(100);
nosound();
delay(10);
sound(1000);
delay(100);
nosound();
//cout<<"\nl pressed";
}
else if(input==122)
{
sound(1050);
delay(100);
nosound();
delay(10);
sound(1050);
delay(100);
nosound();
//cout<<"\nz pressed";
}
else if(input==120)
{
sound(1100);
delay(100);
nosound();
delay(10);
sound(1100);
delay(100);
nosound();
//cout<<"\nx pressed";
}
else if(input==99)
{
sound(1150);
delay(100);
nosound();
delay(10);
sound(1150);
delay(100);
nosound();
//cout<<"\nc pressed";
}
else if(input==118)
{
sound(1200);
delay(100);
nosound();
delay(10);
sound(1200);
delay(100);
nosound();
//cout<<"\nv pressed";
}
else if(input==98)
{
sound(1250);
delay(100);
nosound();
delay(10);
sound(1250);
delay(100);
nosound();
//cout<<"\nb pressed";
}
else if(input==110)
{
sound(1300);
delay(100);
nosound();
delay(10);
sound(1300);
delay(100);
nosound();
//cout<<"\nn pressed";
}
else if(input==109)
{
sound(1350);
delay(100);
nosound();
delay(10);
sound(1350);
delay(100);
nosound();
//cout<<"\nm pressed";
}
cz++;
}while(cz<3000);
}//Fun ends//

void main()
{
int choice;
clrscr();

cout<<"\t\t **********Welcome to Electronic Music**********";
cout<<"\n\n\t\t\t\tChoose Piano type";
cout<<"\n\n\t\t\t\t1.Discrete\n\t\t\t\t2.Continuous\n\t\t\t\t3.Interrupted";
cin>>choice;
switch(choice)
{
case 1:discrete();
break;
case 2:continuous();
break;
case 3:fun();
default:
break;
}
/*
int cz=0;
do
{
ch=getch();
if(ch=='E')
exit(0);
cout<<"\n"<<ch;
*/

cout<<"Invalid keyword, try again!";
getch();
}