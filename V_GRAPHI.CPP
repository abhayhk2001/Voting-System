void bgrnd(int c)
{
for(int x=1;x<81;x++)
	{
	for(int y=2;y<25;y++)
		{
		gtype("\260",x,x,y);
		gtype("\333",c,1,y);
		gtype("\333",c,80,y);
		}
	gtype("\333",c,x,2);
	gtype("\333",c,x,24);
	}
}

void b1()
{
for(int x=20;x<59;x++)
	{
	for(int y=9;y<18;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",4,20,y);
		gtype("\333",4,58,y);
		}
	gtype("\333",4,x,9);
	gtype("\333",4,x,17);
	}
}

void text()
{
char title[15]={'N','.','E','.','C',' ','E','l','e','c','t','i','o','n','s'};
char name[8]={'G','a','u','r','a','v',' ','V '};
gotoxy(33,11);
for(int x=0;x<15;x++)
	{
	delay(50);
	cout<<title[x];
	}
gotoxy(38,13);cout<<"By";
gotoxy(35,15);
for(x=0;x<8;x++)
	{
	delay(50);
	cout<<name[x];
	}
}

void cover()
{
clrscr();
bgrnd(4);
b1();
text();
getch();
}

void vote(int cv,int c)
{
int x,y;
bgrnd(c);
for(x=21;x<61;x++)
	{
	for(y=3;y<6;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",c,21,y);
		gtype("\333",c,60,y);
		}
	gtype("\333",c,x,6);
	}
for(x=4;x<25;x++)
	{
	for(y=13;y<20;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",c,4,y);
		gtype("\333",c,24,y);
		}
	gtype("\333",c,x,13);
	gtype("\333",c,x,18);
	gtype("\333",c,x,19);
	gtype(" \4 Press   \4 ",15,8,18);
	gtype("1",15,17,18);
	}
for(x=30;x<52;x++)
	{
	for(y=13;y<20;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",c,30,y);
		gtype("\333",c,51,y);
		}
	gtype("\333",c,x,13);
	gtype("\333",c,x,18);
	gtype("\333",c,x,19);
	gtype(" \4 Press   \4 ",15,34,18);
	gtype("2",15,43,18);
	}
for(x=57;x<78;x++)
	{
	for(y=13;y<20;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",c,56,y);
		gtype("\333",c,77,y);
		}
	gtype("\333",c,x,13);
	gtype("\333",c,x,18);
	gtype("\333",c,x,19);
	gtype(" \4 Press   \4 ",15,60,18);
	gtype("3",15,69,18);
	}
if(cv==1)
	{
	gtype("Captains",15,37,4);
	}
else if(cv==2)
	{
	gtype("Vice-Captains",15,35,4);
	}
}

void spacer(string str,string str1,string str2)
{
int len=strlen(str);
int len1=strlen(str1);
int len2=strlen(str2);
if(len==17  || len1==17 || len2==17)
	{
	gtype(str,4,6,15);
	gtype(str1,4,32,15);
	gtype(str2,4,58,15);
	}
else if(len==16 || len1==16 || len2==16)
	{
	gtype(str,4,6,15);
	gtype(str1,4,33,15);
	gtype(str2,4,59,15);
	}
else if(len==15 || len1==15 || len2==15)
	{
	gtype(str,4,7,15);
	gtype(str1,4,34,15);
	gtype(str2,4,60,15);
	}
else if(len==14 || len1==14 || len2==14)
	{
	gtype(str,4,7,15);
	gtype(str1,4,34,15);
	gtype(str2,4,60,15);
	}
else if(len==13 || len1==13 || len2==13)
	{
	gtype(str,4,7,15);
	gtype(str1,4,34,15);
	gtype(str2,4,60,15);
	}
else if(len==12 || len1==12 || len2==12)
	{
	gtype(str,4,9,15);
	gtype(str1,4,35,15);
	gtype(str2,4,61,15);
	}
else if(len==11 || len1==11 || len2==11)
	{
	gtype(str,4,9,15);
	gtype(str1,4,35,15);
	gtype(str2,4,61,15);
	}
else if(len==10 || len1==10 || len2==10)
	{
	gtype(str,4,9,15);
	gtype(str1,4,36,15);
	gtype(str2,4,62,15);
	}
else if(len==9 || len1==9 || len2==9)
	{
	gtype(str,4,10,15);
	gtype(str1,4,36,15);
	gtype(str2,4,62,15);
	}
else if(len==8 || len1==8 || len2==8)
	{
	gtype(str,4,10,15);
	gtype(str1,4,37,15);
	gtype(str2,4,63,15);
	}
else if(len==7 || len1==7 || len2==7)
	{
	gtype(str,4,11,15);
	gtype(str1,4,37,15);
	gtype(str2,4,63,15);
	}
else if(len==6 || len1==6 || len2==6)
	{
	gtype(str,4,11,15);
	gtype(str1,4,38,15);
	gtype(str2,4,63,15);
	}
else if(len==5 || len1==5 || len2==5)
	{
	gtype(str,4,12,15);
	gtype(str1,4,39,15);
	gtype(str2,4,64,15);
	}
else if(len==4 || len1==4 || len2==4)
	{
	gtype(str,4,13,15);
	gtype(str1,4,39,15);
	gtype(str2,4,64,15);
	}
else if(len==3 || len1==3 || len2==3)
	{
	gtype(str,4,13,15);
	gtype(str1,4,39,15);
	gtype(str2,4,65,15);
	}
else if(len==2 || len1==2 || len2==2)
	{
	gtype(str,4,13,15);
	gtype(str1,4,40,15);
	gtype(str2,4,65,15);
	}
}

void captains :: output(int z,int w)
{
vote(z,w);
spacer(c1,c2,c3);
}

void vice_captains :: output(int z,int w)
{
vote(z,w);
spacer(v1,v2,v3);
}

void menu()
{
bgrnd(4);
for(int x=21;x<61;x++)
	{
	for(int y=3;y<6;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",4,21,y);
		gtype("\333",4,60,y);
		}
	gtype("\333",4,x,6);
	}
for(x=29;x<53;x++)
	{
	for(int y=9;y<20;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",4,29,y);
		gtype("\333",4,52,y);
		}
	gtype("\333",4,x,8);
	gtype("\333",4,x,19);
	gtype("\333",4,x,6);
	}
gtype("\4 Menu \4",15,37,4);
}

void info(int t)
{
int c=8;
int c_1=4;
int x,y;
for(x=1;x<81;x++)
	{
	for(y=2;y<25;y++)
		{
		gtype("\260",c,x,y);
		gtype("\333",c,1,y);
		gtype("\333",c,80,y);
		}
	gtype("\333",c,x,2);
	gtype("\333",c,x,24);
	}
for(x=4;x<51;x++)
	{
	for(y=5;y<7;y++)
		{
		gtype(" ",4,x,y);
		gtype("\333",c,4,y);
		gtype("\333",c,50,y);
		}
	gtype("\333",c,x,8);
	gtype("\333",c,x,9);
	gtype("\333",c,x,10);
	gtype("\333",c,x,20);
	gtype("\333",c,x,4);
	gtype("\333",c,x,6);
	}
for(x=4;x<50;x++)
	{
	for(y=8;y<20;y++)
		{
		gtype(" ",4,x,13);
		gtype(" ",4,x,14);
		gtype(" ",4,x,16);
		gtype(" ",4,x,15);
		gtype(" ",4,x,17);
		gtype("\333",c,4,y);
		gtype("\333",c,26,y);
		gtype("\333",c,50,y);
		}
	}
for(x=56;x<75;x++)
	{
	gtype("\333",c,x,4);
	gtype("\333",c,x,6);
	gtype("\333",c,x,8);
	gtype("\333",c,x,10);
	gtype("\333",c,x,18);
	gtype("\333",c,x,20);
	}
for(y=8;y<21;y++)
	{
	gtype("\333",c,56,y);
	gtype("\333",c,75,y);
	}
for(x=57;x<75;x++)
	{
	for(y=11;y<18;y++)
		{
		gtype("\260",c_1,x,y);
		}
	gtype(" ",4,x,14);
	gtype("\260",c_1,x,9);
	gtype("\260",c_1,x,19);
	}
gtype("Enter All Details Accordingly",c_1,13,5);
gtype("      Captains       ",c_1,5,9);
gtype("      Vice-Captains    ",c_1,27,9);
gtype("\260\260              \260\260",c_1,57,14);
gtype("\333\333               \333\333",c,56,5);
time_date();
gotoxy(61,5);textcolor(c_1);cprintf("%d",d.da_day);cprintf("-%d",d.da_mon);cprintf("-%d",d.da_year);
textcolor(c_1);cprintf(" ");
gtype("1.",c_1,7,14);
gtype("1.",c_1,29,14);
gtype("2.",c_1,7,15);
gtype("2.",c_1,29,15);
gtype("3.",c_1,7,16);
gtype("3.",c_1,29,16);
if(t==1)
	{
	gtype("Ravens",7,63,14);
	}
else if(t==2)
	{
	gtype("Moevens",7,63,14);
	}
else if(t==3)
	{
	gtype("Pelicans",7,62,14);
	}
else if(t==4)
	{
	gtype("Falcons",7,63,14);
	}
}

void loading(int t)
{
clrscr();
for(int x=11;x<71;x++)
	{
	for(int y=12;y<15;y++)
		{
		gtype(" ",7,x,y);
		gtype("\333",4,11,y);
		gtype("\333",4,70,y);
		}
	gtype("\333",4,x,12);
	gtype("\333",4,x,14);
	}
if(t==1)
	{
	gtype("Getting Things Ready !",15,31,16);
	}
if(t==2)
	{
	gtype("Accessing Archives",15,31,16);
	}
if(t==3)
	{
	gtype("Adding Your Vote",15,31,16);
	}
if(t==4)
	{
	gtype("Fetching Details",15,31,16);
	}
if(t==5)
	{
	gtype("Saving and Closing Program ...",15,27,16);
	}

for(x=12;x<70;x++)
	{
	delay(25);
	gotoxy(63,14);
	cout<<" "<<x+31<<" % ";
	gtype("\333",15,x,13);
	}
delay(350);
}

void miniload(int z)
{
clrscr();
for(int x=31;x<49;x++)
	{
	gtype("\334",4,x,12);
	gtype("\337",4,x,14);
	}
gtype("\334",4,31,13);
gtype("\337",4,48,13);
if(z==1)
	{
	gtype("Loading",15,37,15);
	}
else if(z==2)
	{
	gtype("Adding Your Vote",15,31,16);
	}
for(x=32;x<48;x++)
	{
	delay(25);
	gotoxy(37,11);
	cout<<" "<<x+53<<" % ";
	gtype("\333",15,x,13);
	}
delay(250);
}

void text1()
{
menu();
gtype("\4 About \4",15,36,4);
gtype("\20 Press Any Key To",15,31,10);
gtype("Begin Voting.",15,33,11);
delay(250);
gtype("\20 Press 'q' To Stop",15,31,13);
gtype("Voting.",15,33,14);
delay(250);
gtype("\20 Happy Voting ! \2",15,31,16);
}

void result(int t)
{
int c=8;
int c_1=4;
int x,y;
for(x=1;x<81;x++)
	{
	for(y=2;y<25;y++)
		{
		gtype("\260",c,x,y);
		gtype("\333",c,1,y);
		gtype("\333",c,80,y);
		}
	gtype("\333",c,x,2);
	gtype("\333",c,x,24);
	}
for(x=4;x<51;x++)
	{
	for(y=5;y<7;y++)
		{
		gtype(" ",4,x,y);
		gtype("\333",c,4,y);
		gtype("\333",c,5,y);
		}
	gtype("\333",c,x,8);
	gtype("\333",c,x,9);
	gtype("\333",c,x,10);
	gtype("\333",c,x,20);
	gtype("\333",c,x,4);
	gtype("\333",c,x,6);
	}
for(x=4;x<50;x++)
	{
	for(y=11;y<20;y++)
		{
		gtype(" ",4,x,y);
		}
	for(y=8;y<20;y++)
		{
		gtype("\333",c,4,y);
		gtype("\333",c,36,y);
		gtype("\333",c,50,y);
		}
	}
for(x=56;x<75;x++)
	{
	gtype("\333",c,x,4);
	gtype("\333",c,x,6);
	gtype("\333",c,x,8);
	gtype("\333",c,x,10);
	gtype("\333",c,x,18);
	gtype("\333",c,x,20);
	}
for(y=8;y<21;y++)
	{
	gtype("\333",c,56,y);
	gtype("\333",c,75,y);
	}
for(x=57;x<75;x++)
	{
	for(y=11;y<18;y++)
		{
		gtype("\260",4,x,y);
		}
	gtype(" ",4,x,14);
	gtype("\260",c_1,x,9);
	gtype("\260",c_1,x,19);
	}
gtype("\333\333",8,49,5);
gtype("  Results ",c_1,39,5);
gtype("           Candidates       ",c_1,5,9);
gtype("         \333",8,27,9);
gtype("    Votes    ",c_1,438,9);
gtype("\333\333               \333\333",c,56,5);
time_date();
gotoxy(61,5);textcolor(c_1);cprintf("%d",d.da_day);cprintf("-%d",d.da_mon);cprintf("-%d",d.da_year);
textcolor(c_1);cprintf(" ");
for(x=6;x<35;x++)
	{
	gtype("-",8,x,15);
	}
for(x=38;x<49;x++)
	{
	gtype("-",8,x,15);
	}
gtype("1.",c_1,7,12);
gtype("2.",c_1,7,13);
gtype("3.",c_1,7,14);
gtype("1.",c_1,7,16);
gtype("2.",c_1,7,17);
gtype("3.",c_1,7,18);
if(t==1)
	{
	gtype(" Ravens ",7,62,14);
	}
else if(t==2)
	{
	gtype(" Moevens ",7,62,14);
	}
else if(t==3)
	{
	gtype(" Pelicans ",7,61,14);
	}
else if(t==4)
	{
	gtype("Falcons",7,63,14);
	}
else if(t==5)
	{
	gtype("Elections Over \2",7,58,14);
	}

}
