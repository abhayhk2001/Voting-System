#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct date d;
struct time t;
typedef char string[30];

/// Global Variables ///////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

char m[1];
int ch;
int chk=0;
int check=1;
char fvote[1];
int cvote;
string cnames={"cnames.dat"};
string vcnames={"vcnames.dat"};
string cvotes={"cvotes.txt"};
string vcvotes={"vcvotes.txt"};

////////////////////////////////////////////////////////////////////////////////////////
/// classes ///////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

class captains
{
private :
	string team;
public :
	string c1;
	string c2;
	string c3;
	int count1;
	int count2;
	int count3;
	void input_v();
	void name();
	void output(int ,int );
	void getinfo();
	void count(int );
	captains()
		{
		strcpy(team,"team");
		strcpy(c1,"Candidate a");
		strcpy(c2,"Candidate b");
		strcpy(c3,"Candidate c");
		count1=0;
		count2=0;
		count3=0;
		}
};

class vice_captains
{
private :
	string team;
public :
	string v1;
	string v2;
	string v3;
	int count1;
	int count2;
	int count3;
	void input_v();
	void name();
	void output(int ,int );
	void getinfo();
	void count(int );
	vice_captains()
		{
		strcpy(team,"team");
		strcpy(v1,"Candidate a");
		strcpy(v2,"Candidate b");
		strcpy(v3,"Candidate c");
		count1=0;
		count2=0;
		count3=0;
		}
};

////////////////////////////////////////////////////////////////////////////////////////
/// Objects  /////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

captains cap;
vice_captains vcap;

////////////////////////////////////////////////////////////////////////////////////////
/// Functions  /////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void disp_result(int);
void loading(int );

void gtype(char string[200],int color,int x=wherex(),int y=wherey())
{
gotoxy(x,y);textcolor(color);cprintf(string);
}

void time_date()
{
getdate(&d);
gettime(&t);
}

void int_chk(char l[],int s)
{
do
	{
	l[0]=getch();
	if(l[0]=='e' || l[0]=='E')
		{
		chk=1;
		loading(5);
		exit(0);
		}
	else if(l[0]=='q' || l[0]=='Q')
		{
		chk=1;
		break;
		}
	else
		{
		chk=1;
		if(!(isdigit(m[0])))
			{
			chk=0;
			gtype(" \4 Error \4 ",15+BLINK,36,24);
			}
		else
			{
			ch=atoi(l);
			if(ch>0 && ch<=s)
				{
				chk=1;
				}
			else
				{
				chk=0;
				gtype(" \4 Error \4 ",15+BLINK,36,24);
				}
			}
		}
	}
	while(chk==0);
}

void char_chk(char var[],int x,int y)
{
do
	{
	gets(var);
	check=1;
	for(int j=0;j<strlen(var);j++)
		{
		if(isalpha(var[j])||var[j]=='\0');
		else
			{
			check=0;
			gtype("                ",4,x,y);
			gotoxy(x,y);
			break;
			}
		}
	}
while(check==0);
}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////