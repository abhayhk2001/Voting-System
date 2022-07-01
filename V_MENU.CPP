void details(int );

void m1()
{
clrscr();
menu();
gtype("\20 1.New Elections",15,31,11);
delay(350);
gtype("\20 2.Previous Result",15,31,13);
delay(350);
gtype(" 'E'- Exit",15,31,15);
int_chk(m,2);
switch(ch)
	{
	int save;
	case 1 :
		miniload(1);
		clrscr();
		menu();
		gtype("\20 1.Ravens",3,31,10);
		delay(350);
		gtype("\20 2.Moevens",10,31,11);
		delay(350);
		gtype("\20 3.Pelicans",14,31,12);
		delay(350);
		gtype("\20 4.Falcons",4,31,13);
		delay(350);
		gtype("\20 5.Back",6,31,15);
		delay(350);
		gtype(" 'E' - Exit",15,31,17);
		int_chk(m,5);
		save=ch;
		switch(save)
			{
			case 1 :
				ch=0;
				miniload(1);
				details(1);
				text1();
				getch();
				while(ch<=3)
					{
					cap.output(1,3);
					int_chk(fvote,3);
					if(fvote[0]=='q')
						{
						break;
						}
					else
						{
						cap.count(ch);
						if(ch<=3)
							{
							miniload(2);
							vcap.output(2,3);
							int_chk(fvote,3);
							while(fvote[0]=='q')
								{
								gtype(" \4 Error \4 ",15+BLINK,36,24);
								int_chk(fvote,3);
								}
							vcap.count(ch);
							loading(3);
							}
						}
					}
					clrscr();
					cap.input_v();
					vcap.input_v();
					disp_result(1);
					getch();
					loading(5);
					break;
			case 2 :
				ch=0;
				miniload(1);
				details(2);
				text1();
				getch();
				while(ch<=3)
					{
					cap.output(1,10);
					int_chk(fvote,3);
					if(fvote[0]=='q')
						{
						break;
						}
					else
						{
						cap.count(ch);
						if(ch<=3)
							{
							miniload(2);
							vcap.output(2,10);
							int_chk(fvote,3);
							while(fvote[0]=='q')
								{
								gtype(" \4 Error \4 ",15+BLINK,36,24);
								int_chk(fvote,3);
								}
							vcap.count(ch);
							loading(3);
							}
						}
					}
					clrscr();
					cap.input_v();
					vcap.input_v();
					disp_result(2);
					getch();
					loading(5);
					break;
			case 3 :
				ch=0;
				miniload(1);
				details(3);
				text1();
				getch();
				while(ch<=3)
					{
					cap.output(1,14);
					int_chk(fvote,3);
					if(fvote[0]=='q')
						{
						break;
						}
					else
						{
						cap.count(ch);
						if(ch<=3)
							{
							miniload(2);
							vcap.output(2,14);
							int_chk(fvote,3);
							while(fvote[0]=='q')
								{
								gtype(" \4 Error \4 ",15+BLINK,36,24);
								int_chk(fvote,3);
								}
							vcap.count(ch);
							loading(3);
							}
						}
					}
					clrscr();
					cap.input_v();
					vcap.input_v();
					disp_result(3);
					getch();
					loading(5);
					break;
			case 4 :
				ch=0;
				miniload(1);
				details(4);
				text1();
				getch();
				while(ch<=3)
					{
					cap.output(1,4);
					int_chk(fvote,3);
					if(fvote[0]=='q')
						{
						break;
						}
					else
						{
						cap.count(ch);
						if(ch<=3)
							{
							miniload(2);
							vcap.output(2,4);
							int_chk(fvote,3);
							while(fvote[0]=='q')
								{
								gtype(" \4 Error \4 ",15+BLINK,36,24);
								int_chk(fvote,3);
								}
							vcap.count(ch);
							loading(3);
							}
						}
					}
					clrscr();
					cap.input_v();
					vcap.input_v();
					disp_result(4);
					getch();
					loading(5);
					break;
			case 5 :
				m1();
				break;
			}

		break;
	case 2 :
		clrscr();
		disp_result(5);
		getch();
		loading(5);
		break;
	}
}

