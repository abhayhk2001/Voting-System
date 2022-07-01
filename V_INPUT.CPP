void captains :: getinfo()
{
gtype("\20",15+BLINK,6,14);
gotoxy(10,14);char_chk(c1,10,14);
gtype(" ",0,6,14);
gtype("\20",15+BLINK,6,15);
gotoxy(10,15);char_chk(c2,10,15);
gtype(" ",0,6,15);
gtype("\20",15+BLINK,6,16);
gotoxy(10,16);char_chk(c3,10,16);
gtype(" ",0,6,16);
}

void vice_captains :: getinfo()
{
gtype("\20",15+BLINK,28,14);
gotoxy(32,14);char_chk(v1,32,14);
gtype(" ",0,28,14);
gtype("\20",15+BLINK,28,15);
gotoxy(32,15);char_chk(v2,32,15);
gtype(" ",0,28,15);
gtype("\20",15+BLINK,28,16);
gotoxy(32,16);char_chk(v3,32,16);
gtype(" ",0,28,16);
}

void captains :: count(int )
{
if(ch==1)
	{
	count1++;
	}
else if(ch==2)
	{
	count2++;
	}
else if(ch==3)
	{
	count3++;
	}
}

void vice_captains :: count(int )
{
if(ch==1)
	{
	count1++;
	}
else if(ch==2)
	{
	count2++;
	}
else if(ch==3)
	{
	count3++;
	}
}

void captains :: name()
{
int c;
gotoxy(12,12);cout<<cap.c1;
gotoxy(12,13);cout<<cap.c2;
gotoxy(12,14);cout<<cap.c3;
}

void c_input_n()
{
ofstream ofile;
ofile.open(cnames);
cap.getinfo();
ofile.write((char*)&cap,sizeof(cap));
ofile.close();
}

void c_disp_n()
{
ifstream ifile;
ifile.open(cnames,ios :: trunc);
ifile.read((char*)&cap,sizeof(cap));
while(!ifile.eof())
	{
	cap.name();
	ifile.read((char*)&cap,sizeof(cap));
	}
ifile.close();
}

void captains :: input_v()
{
ofstream ofile;
ofile.open(cvotes,ios :: trunc);
ofile<<count1<<endl;
ofile<<count2<<endl;
ofile<<count3<<endl;
ofile.close();
}

void c_disp_v()
{
ifstream ifile;
ifile.open(cvotes);
while(!ifile.eof())
	{
	ifile>>cap.count1;gotoxy(42,12);cout<<cap.count1;
	ifile>>cap.count2;gotoxy(42,13);cout<<cap.count2;
	ifile>>cap.count3;gotoxy(42,14);cout<<cap.count3;
	}
ifile.close();
}

void vice_captains :: name()
{
gotoxy(12,16);cout<<vcap.v1;
gotoxy(12,17);cout<<vcap.v2;
gotoxy(12,18);cout<<vcap.v3;
}

void vc_input_n()
{
ofstream ofile;
ofile.open(vcnames,ios :: trunc);
vcap.getinfo();
ofile.write((char*)&vcap,sizeof(vcap));
ofile.close();
}

void vc_disp_n()
{
ifstream ifile;
ifile.open(vcnames);
ifile.read((char*)&vcap,sizeof(vcap));
while(!ifile.eof())
	{
	vcap.name();
	ifile.read((char*)&vcap,sizeof(vcap));
	}
ifile.close();
}

void vice_captains :: input_v()
{
ofstream ofile;
ofile.open(vcvotes,ios :: trunc);
ofile<<count1<<endl;
ofile<<count2<<endl;
ofile<<count3<<endl;
ofile.close();
}

void vc_disp_v()
{
ifstream ifile;
ifile.open(vcvotes);
while(!ifile.eof())
	{
	ifile>>vcap.count1;gotoxy(42,16);cout<<vcap.count1;
	ifile>>vcap.count2;gotoxy(42,17);cout<<vcap.count2;
	ifile>>vcap.count3;gotoxy(42,18);cout<<vcap.count3;
	}
ifile.close();
}

void details(int z)
{
info(z);
c_input_n();
vc_input_n();
gtype(" \4 Press Enter \4 ",15,34,24);
getch();
clrscr();
}

void disp_result(int z)
{
result(z);
c_disp_v();
vc_disp_v();
c_disp_n();
vc_disp_n();
}



