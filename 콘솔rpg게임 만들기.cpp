#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <ctime>


using namespace std;
int uslv=1;
int chr;
int wppiecerand=0;
int uppiecerand=0;
int hprand=0;

int item;
int hp30=30;
int hp50=50;
int hp100=100;

int swhp=300;
int swmp=10;
int swat=30;
int swexp=0;
int swcoin=0;
int swhp30=0;
int swhp50=0;
int swhp100=0;
int swup=0;
int swordup=1;

int arhp=200;
int armp=20;
int arat=30;
int arexp=0;
int arcoin=0;
int arhp30=0;
int arhp50=0;
int arhp100=0;
int arup=0;
int arrowup=1;

int wppiece1=0,wppiece2=0;
string choose;
string choosemap;
string checkhp;
string drinkhp;
void character()
{
	char chrst; 
	a:	while(1)
	{	
		cout<<"1.<검사> 2.<궁수>"<<endl;
		cout<<">>능력치를 확인해 보세요<<"<<endl;   
		cout<<"<<1,2>> 이외의 값을  입력하여 창을 나가십시오."<<endl;                       
		cin>>chrst;
		if(chrst=='1')
		{
		cout<<"STR :★★★"<<endl
			<<"HP  :★★★"<<endl
			<<"MP  :★"<<endl;
		}
		else if(chrst=='2')
		{
			cout<<"STR :★★★"<<endl
			<<"HP  :★★"<<endl
			<<"MP  :★★"<<endl;
		}
		else 
		{
			break;
		}
	} 
}

int  arexpf()
{
			if(uslv==1&&arexp>=30)
			{
				uslv=2;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==2&&arexp>=50)
			{
				uslv=3;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}else if(uslv==3&&arexp>=70)
			{
				uslv=4;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==4&&arexp>=90)
			{
				uslv=5;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==5&&arexp>=110)
			{
				uslv=6;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==6&&arexp>=130)
			{
				uslv=7;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==7&&arexp>=160)
			{
				uslv=8;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==8&&arexp>=190)
			{
				uslv=9;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==9&&arexp>=220)
			{
				uslv=10;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==10&&arexp>=250)
			{
				uslv=11;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
			}
			else if(uslv==11&&arexp>=280)
			{
				uslv=12;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==12&&arexp>=310)
			{
				uslv=13;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==13&&arexp>=340)
			{
				uslv=14;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==14&&arexp>=370)
			{
				uslv=15;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==15&&arexp>=400)
			{
				uslv=16;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==16&&arexp>=430)
			{
				uslv=17;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==17&&arexp>=460)
			{
				uslv=18;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==18&&arexp>=490)
			{
				uslv=19;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==19&&arexp>=520)
			{
				uslv=20;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==20&&arexp>=550)
			{
				uslv=20;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★MAX LEVEL!★★★★★★★★★★★★★★★"<<endl;
				cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			return uslv;
}

void swexpf()
{
	if(uslv==1&&swexp>=30)
	{
		uslv=2;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==2&&swexp>=50)
	{
		uslv=3;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==3&&swexp>=70)
	{
		uslv=4;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==4&&swexp>=90)
	{
		uslv=5;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==5&&swexp>=110)
	{
		uslv=6;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==6&&swexp>=130)
	{
		uslv=7;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==7&&swexp>=160)
	{
		uslv=8;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==8&&swexp>=190)
	{
		uslv=9;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==9&&swexp>=220)
	{
		uslv=10;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==10&&swexp>=250)
	{
		uslv=11;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==11&&swexp>=280)
	{
		uslv=12;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==12&&swexp>=310)
	{
		uslv=13;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==13&&swexp>=340)
	{
		uslv=14;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==14&&swexp>=370)
	{
		uslv=15;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==15&&swexp>=400)
	{
		uslv=16;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==16&&swexp>=430)
	{
		uslv=17;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}	
	else if(uslv==17&&swexp>=460)
	{
	uslv=18;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==18&&swexp>=490)
	{
		uslv=19;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==19&&swexp>=520)
	{
		uslv=20;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★LEVEL UP★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}	
	else if(uslv==20&&swexp>=550)
	{
		uslv=20;
		swexp=0;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★MAX LEVEL!★★★★★★★★★★★★★★★"<<endl;
		cout<<"★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}	
}

void epilogue()
{
	cout<<"◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆"<<endl
		<<"아주 먼 옛날 나는 한적한 마을 한곳에 살고 있었다."<<endl
		<<"우리는 이 마을이 영원히 평화로울줄 알았다."<<endl
		<<"하지만 어느날 눈을 떠보니 주변에는 온갖시체들과 불타는 집만이 남아있었다."<<endl
		<<"아직 꿈꾸는줄 알았던 나는 손에 작은 상처를 내보았지만 역시나 다를가 바뀌는건 없었다."<<endl
		<<"도대체 누가 이런 끔찍한 짓을 저지른것이지? 도대체 왜?."<<endl
		<<"그후로 나는 사건의 실말이를 찾기위해 모험을 떠났다."<<endl
		<<"◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆"<<endl;
}

int sweqm()
{
	int swuprand=0;
	char sweqmin='\0';
	while(1)
	{
		cout<<"안녕하신가 나는 대장장이일세~ 더 좋은 장비가 필요한가?"<<endl;
		cout<<"현재 장비 강화하기 PRESS E"<<endl;
		cout<<"현재 보유하고 있는 장비 강화권 수: "<<swup<<endl;
		cout<<"마을로 돌아가기 PRESS R."<<endl;
		cin>>sweqmin;
		if(sweqmin=='R')
		{
			return 0;
		}
		else if(sweqmin=='E')
		{
			if(swup>=1)
			{
				system("pause");
				if(swordup==1)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 1개가 소모 됩니다."<<endl;
					if(swup<1)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=1;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=90)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=5;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==2)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 2개가 소모 됩니다."<<endl;
					if(swup<2)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=2;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=80)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=7;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==3)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 3개가 소모 됩니다."<<endl;
					if(swup<3)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=3;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=70)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=9;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==4)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 4개가 소모 됩니다."<<endl;
					if(swup<4)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=4;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=60)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=11;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==5)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 6개가 소모 됩니다."<<endl;
					if(swup<6)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=6;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=50)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=13;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==6)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 8개가 소모 됩니다."<<endl;
					if(swup<8)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=8;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=40)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=15;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==7)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 10개가 소모 됩니다."<<endl;
					if(swup<10)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=10;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=30)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=20;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==8)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 12개가 소모 됩니다."<<endl;
					if(swup<12)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=12;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=20)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=25;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==9)
				{
					swuprand=rand()%100+1;
					cout<<"강화권 15개가 소모 됩니다."<<endl;
					if(swup<15)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					swup-=15;
					cout<<"남은 강화권 수: "<<swup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(swuprand<=10)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						swordup++;
						swat+=30;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
			}
			else
			{	
				cout<<"뭐야 강화권이 없잖아! 이러면 나도 강화를 못 해준다고..."<<endl;
				cout<<"유저가 보유하신 강화권 수: "<<swup<<endl;
				break;
			}	
		}
	}
	return swordup;	
}

int areqm()
{
	int aruprand=0;
	char areqmin='\0';
	while(1)
	{
		cout<<"안녕하신가 나는 대장장이일세~ 더 좋은 장비가 필요한가?"<<endl;
		cout<<"현재 장비 강화하기 PRESS E"<<endl;
		cout<<"현재 보유하고 있는 장비 강화권 수: "<<arup<<endl;
		cout<<"마을로 돌아가기 PRESS R."<<endl;
		cin>>areqmin;
		if(areqmin=='R')
		{
			return 0;
		}
		else if(areqmin=='E')
		{
			if(arup>=1)
			{
				system("pause");
				if(arrowup==1)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 1개가 소모 됩니다."<<endl;
					if(arup<1)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=1;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=90)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=5;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==2)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 2개가 소모 됩니다."<<endl;
					if(arup<2)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=2;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=80)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=7;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==3)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 3개가 소모 됩니다."<<endl;
					if(arup<3)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=3;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=70)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=9;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==4)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 4개가 소모 됩니다."<<endl;
					if(arup<4)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=4;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=60)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=11;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==5)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 6개가 소모 됩니다."<<endl;
					if(arup<6)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=6;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=50)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=13;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==6)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 8개가 소모 됩니다."<<endl;
					if(arup<8)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=8;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=40)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=15;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(swordup==7)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 10개가 소모 됩니다."<<endl;
					if(arup<10)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=10;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=30)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=20;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==8)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 12개가 소모 됩니다."<<endl;
					if(arup<12)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=12;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=20)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=25;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
				else if(arrowup==9)
				{
					aruprand=rand()%100+1;
					cout<<"강화권 15개가 소모 됩니다."<<endl;
					if(arup<15)
					{
						cout<<"강화권 부족."<<endl;
						break;
					}
					arup-=15;
					cout<<"남은 강화권 수: "<<arup<<endl;
					cout<<"강화 시작~! 뚱뚱뚱뚜우뚜우뚜우뚜우뚱뚱"<<endl;
					if(aruprand<=10)
					{
						cout<<"........휴~  강화 성공!!"<<endl;
						arrowup++;
						arat+=30;
					}
					else
					{
						cout<<".................미안하네 자네......"<<endl;
					}
				}
			}
			else
			{	
				cout<<"뭐야 강화권이 없잖아! 이러면 나도 강화를 못 해준다고..."<<endl;
				cout<<"유저가 보유하신 강화권 수: "<<arup<<endl;
				break;
			}	
		}
	}
	return arrowup;	
}

void woodsword()
{
	cout<<"STR :★"<<endl
		<<"SPEED :★"<<endl;
	if(chr==1&&swordup==1)
	{
		swat+=10;	
	}	
}

void quest1sword()
{
	int q1random=0;
	cout<<"주변에서 쓸만한 무기를 찾아보자"<<endl;
	while(1)
	{
		q1random=rand()%100;
		if(q1random<25)
		{
			cout<<"쓸만한 목검을 발견했다!!"<<endl;
			woodsword();
			break;
		}
		else
		{
			cout<<"다른곳을 찾아보자..... 무기없이 모험을 떠나는건 너무 위험해!"<<endl;
			system("pause"); 
		}
	}
} 

void quest1arrow()
{
	int q1random=0;
	cout<<"주변에서 쓸만한 무기를 찾아보자"<<endl;
	while(1)
	{
		q1random=rand()%100;
		if(q1random<25)
		{
			cout<<"쓸만한 활을 발견했다!!"<<endl;
			woodsword();
			break;
		}
		else
		{
			cout<<"다른곳을 찾아보자..... 무기없이 모험을 떠나는건 너무 위험해!"<<endl;
			system("pause"); 
		}
	}
} 

void map()
{
b:	cout<<"어느 곳으로 갈까? (1.푸른 농장LV:1 ~ 10),(2.나하리 사막LV:10 ~ 15),(3.해토기 바닷가LV:15 ~ 20)"<<endl;
	cin>>choosemap;
	if(choosemap=="1")
	{
		if(uslv>=1)
		{
			cout<<"푸른 농장으로 진입합니다."<<endl; 
		}
	}
	else if(choosemap=="2")
	{
		if(uslv>=10)
		{
			cout<<"나하리 사막으로 진입합니다."<<endl; 
		}
		else if(uslv<10)
		{
			cout<<"아직 모험가는 이 구역을 진입 하실수가  없습니다."<<endl;
			goto b;
		}
	}
	else if(choosemap=="3")
	{
		if(uslv>=15)
		{
			cout<<"해토끼 바닷가으로 진입합니다."<<endl; 
		}
		else if(uslv<15)
		{
			cout<<"아직 모험가는 이 구역을 진입 하실수가  없습니다."<<endl;
			goto b;
		}
	}
	else
	{
		cout<<"재대로 값을 입력 해주세요"<<endl;
		goto b;
	}
}

int swrand()
{
	int swrandom=0;
	swrandom=rand()%swat+1;
	return swrandom;
}

int arrand()
{
	int arrandom=0;
	arrandom=rand()%arat+1;
	return arrandom;
}

void map1monster1()
{
	int antrandom=0;
	int anthp=50;
	int antat=5;
	int swatrand,aratrand;
	cout<<"왕개미의 출연!"<<endl;
	cout<<"HP : "<<anthp<<" ATTACK : 1 ~ 5"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
f:			antrandom=rand()%5+1;
			if(chr==1)
			{
				swatrand=swrand();
				anthp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"왕개미의 HP : "<<anthp<<endl;
				swhp-=antrandom;
				cout<<"왕개미의 공격!! "<<antrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}	
				else if(anthp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%2+1;
					wppiecerand=rand()%2+1;
					if(hprand<=5)
					{
						cout<<"Hp 30 물약을 획득 하였습니다."<<endl;
						swhp30+=1;
					}
					cout<<"왕개미를 처치하였습니다."<<endl;	
					swexp+=10;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin++;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}
			}
			else if(chr==2)
			{
				aratrand=arrand();
				anthp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"왕개미의 HP : "<<anthp<<endl;
				arhp-=antrandom;
				cout<<"왕개미의 공격!! "<<antrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(anthp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%2+1;
					wppiecerand=rand()%2+1;
					if(hprand<=5)
					{
						cout<<"Hp 30 물약을 획득 하였습니다."<<endl;
						arhp30+=1;
					}
					cout<<"왕개미를 처치하였습니다."<<endl;	
					arexp+=10;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin++;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto f;
	}
}

void map1monster2()
{
	int hamrandom=0;
	int hamhp=100;
	int hamat=2;
	int swatrand,aratrand;
	
	cout<<"햄스터 출연!"<<endl;
	cout<<"HP : "<<hamhp<<" ATTACK : 1 ~ 2"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
g:			hamrandom=rand()%2+1;
			if(chr==1)
			{
				swatrand=swrand();
				hamhp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"햄스터의 HP : "<<hamhp<<endl;
				swhp-=hamrandom;
				cout<<"햄스터의 공격!! "<<hamrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(hamhp<=0)
				{
					wppiecerand=rand()%4+2;
					uppiecerand=rand()%4+2;
					hprand=rand()%30+1;
					if(hprand<=5)
					{
						cout<<"Hp 30 물약을 획득 하였습니다."<<endl;
						swhp30+=1;
					}
					cout<<"햄스터를 처치하였습니다."<<endl;	
					swexp+=15;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;	
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				hamhp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"햄스터의 HP : "<<hamhp<<endl;
				arhp-=hamrandom;
				cout<<"햄스터의 공격!! "<<hamrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}	
				else if(hamhp<=0)
				{
					wppiecerand=rand()%4+2;
					uppiecerand=rand()%4+2;
					hprand=rand()%30+1;
					if(hprand<=5)
					{
						cout<<"Hp 30 물약을 획득 하였습니다."<<endl;
						arhp30+=1;
					}
					cout<<"햄스터를 처치하였습니다."<<endl;	
					arexp+=15;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto g;
	}
}

void map1monster3()
{
	int frograndom=0;
	int froghp=200;
	int frogat=10;
	int swatrand,aratrand;
	cout<<"보스: 개구리의 출연!"<<endl;
	cout<<"HP : "<<froghp<<" ATTACK : 1 ~ 10"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
h:			frograndom=rand()%10+1;
			if(chr==1)
			{
				swatrand=swrand();
				froghp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"개구리의 HP : "<<froghp<<endl;
				swhp-=frograndom;
				cout<<"개구리의 공격!! "<<frograndom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(froghp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%4+1;
					wppiecerand=rand()%4+1;
					if(hprand<=5)
					{
						cout<<"Hp 50 물약을 획득 하였습니다."<<endl;
						swhp50+=1;
					}
					cout<<"개구리를 처치하였습니다."<<endl;	
					swexp+=20;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				froghp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"개구리의 HP : "<<froghp<<endl;
				arhp-=frograndom;
				cout<<"개구리의 공격!! "<<frograndom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(froghp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%4+1;
					wppiecerand=rand()%4+1;
					if(hprand<=5)
					{
						cout<<"Hp 50 물약을 획득 하였습니다."<<endl;
						arhp50+=1;
					}
					cout<<"개구리를 처치하였습니다."<<endl;	
					arexp+=20;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto h;
	}
}

void map2monster1()
{
	int camelrandom=0;
	int camelhp=250;
	int camelat=10;
	int swatrand,aratrand;
	cout<<"낙타 출연!"<<endl;
	cout<<"HP : "<<camelhp<<" ATTACK : 1 ~ 10"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
j:			camelrandom=rand()%10+1;
			if(chr==1)
			{
				swatrand=swrand();
				camelhp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"낙타의 HP : "<<camelhp<<endl;
				swhp-=camelrandom;
				cout<<"낙타의 공격!! "<<camelrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(camelhp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%4+1;
					wppiecerand=rand()%4+1;
					if(hprand<=5)
					{
						cout<<"Hp 50 물약을 획득 하였습니다."<<endl;
						swhp50+=1;
					}
					cout<<"낙타를 처치하였습니다."<<endl;	
					swexp+=20;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin++;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}
			}
			else if(chr==2)
			{
				aratrand=arrand();
				camelhp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"낙타의 HP : "<<camelhp<<endl;
				arhp-=camelrandom;
				cout<<"낙타의 공격!! "<<camelrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(camelhp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%4+1;
					wppiecerand=rand()%4+1;
					if(hprand<=5)
					{
						cout<<"Hp 50 물약을 획득 하였습니다."<<endl;
						arhp50+=1;
					}
					cout<<"낙타를 처치하였습니다."<<endl;	
					arexp+=20;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin++;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto j;
	}
}

void map2monster2()
{
	int	snakerandom=0;
	int snakehp=150;
	int snakeat=20;
	int swatrand,aratrand;
	cout<<"뱀 출연!"<<endl;
	cout<<"HP : "<<snakehp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
k:			snakerandom=rand()%20+1;
			if(chr==1)
			{
				swatrand=swrand();
				snakehp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"뱀의 HP : "<<snakehp<<endl;
				swhp-=snakerandom;
				cout<<"뱀의 공격!! "<<snakerandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(snakehp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%5+1;
					wppiecerand=rand()%5+1;
					if(hprand<=5)
					{
						cout<<"Hp 50 물약을 획득 하였습니다."<<endl;
						swhp50+=1;
					}
					cout<<"뱀를 처치하였습니다."<<endl;	
					swexp+=30;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin++;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				snakehp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"뱀의 HP : "<<snakehp<<endl;
				arhp-=snakerandom;
				cout<<"뱀의 공격!! "<<snakerandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(snakehp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%5+1;
					wppiecerand=rand()%5+1;
					if(hprand<=5)
					{
						cout<<"Hp 70 물약을 획득 하였습니다."<<endl;
						arhp50+=1;
					}
					cout<<"뱀를 처치하였습니다."<<endl;	
					arexp+=30;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin++;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto k;
	}	
} 
 
void map2monster3()
{
	int	zodiacrandom=0;
	int zodiachp=250;
	int zodiacat=30;
	int swatrand,aratrand;
	cout<<"보스: 전갈 출연!"<<endl;
	cout<<"HP : "<<zodiachp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
l:			zodiacrandom=rand()%30+1;
			if(chr==1)
			{
				swatrand=swrand();
				zodiachp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"전갈의 HP : "<<zodiachp<<endl;
				swhp-=zodiacrandom;
				cout<<"전갈의 공격!! "<<zodiacrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(zodiachp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						swhp100+=1;
					}
					cout<<"전갈를 처치하였습니다."<<endl;	
					swexp+=40;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				zodiachp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"전갈의 HP : "<<zodiachp<<endl;
				arhp-=zodiacrandom;
				cout<<"낙타의 공격!! "<<zodiacrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(zodiachp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						arhp100+=1;
					}
					cout<<"전갈를 처치하였습니다."<<endl;	
					arexp+=40;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto l;
	}		
} 

void map3monster1()
{
	int	nemorandom=0;
	int nemohp=400;
	int nemoat=30;
	int swatrand,aratrand;
	cout<<"니모 출연!"<<endl;
	cout<<"HP : "<<nemohp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
n:			nemorandom=rand()%30+1;
			if(chr==1)
			{
				swatrand=swrand();
				nemohp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"니모의 HP : "<<nemohp<<endl;
				swhp-=nemorandom;
				cout<<"니모의 공격!! "<<nemorandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(nemohp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						swhp100+=1;
					}
					cout<<"니모를 처치하였습니다."<<endl;	
					swexp+=50;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				nemohp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"니모의 HP : "<<nemohp<<endl;
				arhp-=nemorandom;
				cout<<"니모의 공격!! "<<nemorandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(nemohp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						arhp100+=1;
					}
					cout<<"니모를 처치하였습니다."<<endl;	
					arexp+=50;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto n;
	}		
}

void map3monster2()
{
	int	whalerandom=0;
	int whalehp=800;
	int whaleat=15;
	int swatrand,aratrand;
	cout<<"고래 출연!"<<endl;
	cout<<"HP : "<<whalehp<<" ATTACK : 1 ~ 15"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
m:			whalerandom=rand()%15+1;
			if(chr==1)
			{
				swatrand=swrand();
				whalehp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"고래의 HP : "<<whalehp<<endl;
				swhp-=whalerandom;
				cout<<"고래의 공격!! "<<whalerandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(whalehp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						swhp100+=1;
					}
					cout<<"고래를 처치하였습니다."<<endl;	
					swexp+=60;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=4;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				whalehp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"고래의 HP : "<<whalehp<<endl;
				arhp-=whalerandom;
				cout<<"고래의 공격!! "<<whalerandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(whalehp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						arhp100+=1;
					}
					cout<<"고래를 처치하였습니다."<<endl;	
					arexp+=60;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=4;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto m;
	}		
}

void map3monster3()
{
	int	sharkrandom=0;
	int sharkhp=800;
	int sharkat=40;
	int swatrand,aratrand;
	cout<<"보스: 상어 출연!"<<endl;
	cout<<"HP : "<<sharkhp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"싸우겠습니까? 1.Yes or 2.Run"<<endl;
	cin>>choose;
	if(choose=="1")
	{
		while(1)
		{
n:			sharkrandom=rand()%40+1;
			if(chr==1)
			{
				swatrand=swrand();
				sharkhp-=swatrand;
				cout<<"유저의 공격!! "<<swatrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"상어의 HP : "<<sharkhp<<endl;
				swhp-=sharkrandom;
				cout<<"상어의 공격!! "<<sharkrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					swhp=300;
					break;
				}
				else if(sharkhp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						swhp100+=1;
					}
					cout<<"상어를 처치하였습니다."<<endl;	
					swexp+=80;
					cout<<wppiecerand<<" 개의 무기 조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=5;
					cout<<"총 무기조각  곗수 :"<<wppiece1<<endl;
					cout<<"총 코인 곗수 :"<<swcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				sharkhp-=aratrand;
				cout<<"유저의 공격!! "<<aratrand<<" 의 데미지를 주었습니다"<<endl;
				cout<<"상어의 HP : "<<sharkhp<<endl;
				arhp-=sharkrandom;
				cout<<"상어의 공격!! "<<sharkrandom<<" 의 데미지를 받았습니다"<<endl;
				cout<<"유저가 남은 HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"유저가 사망하였습니다 마을로 돌아갑니다."<<endl; 
					system("pause");
					arhp=200;
					break;
				}
				else if(sharkhp<=0)
				{
					hprand=rand()%30+1;
					uppiecerand=rand()%6+1;
					wppiecerand=rand()%6+1;
					if(hprand<=5)
					{
						cout<<"Hp 100 물약을 획득 하였습니다."<<endl;
						arhp100+=1;
					}
					cout<<"상어를 처치하였습니다."<<endl;	
					arexp+=80;
					cout<<wppiecerand<<" 개의 무기조각을 획득 하였습니다."<<endl;
					cout<<uppiecerand<<" 개의 무기 강화권을 획득 하였습니다."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=5;
					cout<<"총 무기조각  곗수 :"<<wppiece2<<endl;
					cout<<"총 코인 곗수 :"<<arcoin<<endl;
					cout<<"총 무기 강화권 곗수 :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"무사히 도망쳤습니다....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"이런 늦어버렸어요....."<<endl;
		goto n;
	}		
} 

int main()
{
	srand(time(NULL));
	int wppieces1=0,wppieces2=0;
	char tresh1;
	int itemchoice;
	char case1,case2;
	int case1rand,case2rand;
	int ps;
	int map1random;
	
	cout<<"RPG 게임에 오신것을 환영합니다. "<<endl<<endl;
	cout<<"<케릭터를 선택해 주세요>"<<endl;
	character();
	
a:	cout<<"마음에 드는 케릭터를 고르셨습니까?"<<endl;
	cout<<"1번? 아니면 2번?"<<endl;
	cin>>chr;
	if(chr==1)
	{
		cout<<"당신은 검사를 선택하였습니다."<<endl;
		cout<<"모험을 시작하겠습니다."<<endl;
		epilogue();
	}
	else if(chr==2)
	{
		cout<<"당신은 궁수를 선택하였습니다."<<endl;
		cout<<"모험을 시작하겠습니다."<<endl;
		epilogue();
	} 
	else
	{
		cout<<"재대로된 입력을 해주십시오."<<endl;
		cout<<"능력치를 다시 보겠습니까? (press 1)"<<endl; 
		cin>>tresh1;
		if(tresh1=='1')
		{
			character();
			goto a;	
		}
			
		else
		{
			cout<<"재대로된 입력을 해주십시오."<<endl;
			cout<<"능력치를 다시 보겠습니까? (press 1)"<<endl;
			cin>>tresh1;
			if(tresh1=='1')
			{
				character();
				goto a;
			}	
		}
	}
	if(chr==1)
	{
		system("pause");
		quest1sword();
		cout<<"자 이제 모험을 떠나볼까?"<<endl;
		while(1)
		{
			map(); 
			map1random=rand()%3+1;
			if(choosemap=="1")
			{
				if(map1random==1)
				{
					map1monster1();		
				}
				else if(map1random==2)
				{
					map1monster2();
				}	
				else if(map1random==3)
				{
					map1monster3();
				}
			}
			else if(choosemap=="2")
			{
				if(map1random==1)
				{
					map2monster1();		
				}
				else if(map1random==2)
				{
					map2monster2();
				}	
				else if(map1random==3)
				{
					map2monster3();
				}
			} 
			else if(choosemap=="3")
			{
				if(map1random==1)
				{
					map3monster1();		
				}
				else if(map1random==2)
				{
					map3monster2();
				}	
				else if(map1random==3)
				{
					map3monster3();
				}
			}	
			swexpf();
					cout<<"물약을 먹겠습니까? PRESS Y/N"<<endl;
					cin>>checkhp;
					while(checkhp!="N")
					{
						cout<<"어떤 물약을 먹겠습니까? PRESS Y/N"<<endl;
						cin>>checkhp;
						if(checkhp=="Y")
						{
							cout<<"현재 보유하고 계신 물약수: PRESS hp30/hp50/hp100"<<endl;
							cout<<"HP : 30 : "<<swhp30<<endl;
							cout<<"HP : 50 : "<<swhp50<<endl;
							cout<<"HP : 100 : "<<swhp100<<endl;
							cin>>drinkhp;
							if(drinkhp=="hp30")
							{
								swhp30--;
								swhp+=30;
								if(swhp>=200)
								{
									swhp=200;
								}
							}
							else if(drinkhp=="hp50")
							{
								swhp50--;
								swhp+=50;
								if(swhp>=300)
								{
									swhp=300;
								}
							}
							else if(drinkhp=="hp100")
							{
								swhp100--;
								swhp+=100;
								if(swhp>=300)
								{
									swhp=300;
								}
							}
						}
					}
			cout<<"마을로 가시겠습니까(6.)? 아니면 계속 모험을 하시겠습니까(else things)?"<<endl;
			cout<<"현재 경험치 "<<swexp<<" HP "<<swhp<<endl;
			cin>>choose;
			if(choose=="6")//마을 기능 만들기 상점이랑 아이템 강화 아이템 뽑기 집 휴식등등. 
			{
				cout<<"마을로 돌아갑니다."<<endl;
				break;
			}
			else
			{
				continue;	
			}	
		}
c:		cout<<"1. 아이템 뽑기"<<endl;
		cout<<"2. 물약 상점."<<endl;
		cout<<"3. 사냥터로 다시 가기."<<endl;
		cout<<"4. 인벤토리 보기."<<endl;
		cout<<"5. 장비 강화하기."<<endl;//////////////////////////////////////////장비강화 
		 
		cin>>itemchoice;
		while(1)
		{
			if(itemchoice==1)
			{
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎룰렛 돌리기(PRESS E)◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"나가시려면 E키 외에 아무거나 눌러주세요......."<<endl; 
				cin>>case1;
				if(case1!='E')
				{
					cout<<"도박은 적당히 하는게 정신건강에 좋습니다."<<endl; 
					goto c;
				}
				else if(case1=='E'&&swcoin>0)
				{
					swcoin--;
					case1rand=rand()%100+1;
					system("pause");
					if(case1rand<=10)
					{
						cout<<"뭐야! 내돈...기계가 망가졌나보다.......ㅠㅠ"<<endl;
					}
					else if(case1rand>10&&case1rand<=30)
					{			
						ps=rand()%3+1;
						if(ps==1)
						{
							cout<<"hp50포션을 획득했다!"<<endl;
							swhp50+=1;
						}
						else if(ps==2)
						{
							cout<<"hp30포션을 획득했다!"<<endl;
							swhp30+=1;
						}
						else if(ps==3)
						{
							cout<<"hp100포션을 획득했다!"<<endl;
							swhp100+=1;
						}
					}
					else if(case1rand>30&&case1rand<=60)
					{
						wppiecerand=rand()%15+1;
						cout<<wppiecerand<<"개의 무기 강화권을 획득했다!"<<endl;
						swup+=wppiecerand; 
					}
					else if(case1rand>60&&case1rand<=99)
					{
						wppieces1=rand()%3+1;
						cout<<wppieces1<<" 개의 무기 조각을 획득했다!"<<endl;
						wppiece1+=wppieces1;
					}
					else if(case1rand==100)
					{
						cout<<"가끔 이런 날도 있는법이지..."<<endl;
						cout<<"최대HP+10"<<endl;
						swhp+=10;	
					}	
				}
			}
			else if(itemchoice==2)
			{
				cout<<"1.HP : 30  ->2$"<<endl;
				cout<<"2.HP : 50  ->3$"<<endl;
				cout<<"3.HP : 100 ->6$"<<endl;
				cout<<"나가시려면 1,2,3 키 외에 아무거나 눌러주세요......."<<endl; 
				cin>>case2;
				if(case2!='1'&&case2!='2'&&case2!='3')
				{
					cout<<"상점을 나갑니다!"<<endl; 
					goto c; 
				}
				if(case2=='1')
				{
					swhp30++;
					if(swcoin>=2)
					{
						swcoin-=2;
						cout<<"현재 용사님께서 소유하시고 계신 HP30 곗수:"<<swhp30<<endl;
					}
					else
					{
						cout<<"현재 용사님께서는 코인이 부족합니다."<<endl; 
					}
				
				} 
				else if(case2=='2')
				{
					swhp50++;
					if(swcoin>=3)
					{
						swcoin-=3;
						cout<<"현재 용사님께서 소유하시고 계신 HP50 곗수:"<<swhp50<<endl;
					}
					else
					{
						cout<<"현재 용사님께서는 코인이 부족합니다."<<endl; 
					}
				}
				else if(case2=='3')
				{
					swhp100++;
					if(swcoin>=6)
					{
						swcoin-=6;
						cout<<"현재 용사님께서 소유하시고 계신 HP100 곗수:"<<swhp100<<endl;	
					}
					else
					{
						cout<<"현재 용사님께서는 코인이 부족합니다."<<endl; 
					}	
				}
			}
			else if(itemchoice==3)
			{
				map(); 
				map1random=rand()%3+1;
				if(choosemap=="1")
				{
					if(map1random==1)
					{
						map1monster1();		
					}
					else if(map1random==2)
					{
						map1monster2();
					}	
					else if(map1random==3)
					{
						map1monster3();
					}
				}
				else if(choosemap=="2")
				{
					if(map1random==1)
					{
						map2monster1();		
					}
					else if(map1random==2)
					{
						map2monster2();
					}	
					else if(map1random==3)
					{
						map2monster3();
					}
				}
				else if(choosemap=="3")
				{
					if(map1random==1)
					{
						map3monster1();		
					}
					else if(map1random==2)
					{
						map3monster2();
					}	
					else if(map1random==3)
					{
						map3monster3();
					}
				}
				swexpf();
					cout<<"물약을 먹겠습니까? PRESS Y/N"<<endl;
					cin>>checkhp;
					while(checkhp!="N")
					{
						cout<<" 어떤물약을 먹겠습니까? PRESS Y/N"<<endl;
						cin>>checkhp;
						if(checkhp=="Y")
						{
							cout<<"현재 보유하고 계신 물약수: PRESS hp30/hp50/hp100"<<endl;
							cout<<"HP : 30 : "<<swhp30<<endl;
							cout<<"HP : 50 : "<<swhp50<<endl;
							cout<<"HP : 100 : "<<swhp100<<endl;
							cin>>drinkhp;
							if(drinkhp=="hp30")
							{
								swhp30--;
								swhp+=30;
								if(swhp>=200)
								{
									swhp=200;
								}
							}
							else if(drinkhp=="hp50")
							{
								swhp50--;
								swhp+=50;
								if(swhp>=300)
								{
									swhp=300;
								}
							}
							else if(drinkhp=="hp100")
							{
								swhp100--;
								swhp+=100;
								if(swhp>=300)
								{
									swhp=300;
								}
							}
						}
					}
					cout<<"마을로 가시겠습니까(6.)? 아니면 계속 모험을 하시겠습니까(else things)?"<<endl;
					cout<<"현재 경험치 "<<swexp<<" HP "<<swhp<<endl;
					cin>>choose;
					if(choose=="6")//마을 기능 만들기 상점이랑 아이템 강화 아이템 뽑기 집 휴식등등. 
					{
						cout<<"마을로 돌아갑니다."<<endl;
						goto c;
					}
					else
					{
						continue;	
					}	
				}
				else if(itemchoice==4)
				{
					cout<<"용사께서 소유하고 계신 아이템: =================="<<endl;
					cout<<"HP 30:"<<swhp30<<endl;
					cout<<"HP 50:"<<swhp50<<endl;
					cout<<"HP 100:"<<swhp100<<endl;
					cout<<"Coin:"<<swcoin<<endl;
					cout<<"무기 조각 곗수: "<<wppiece1<<endl;
					cout<<"무기 : 쓸만한 목검"<<endl; ///////////////////////////////////////나중에 string 으로 무기 이름 저장해서 부르기로 고치자.	
					goto c;
				}	
				else if(itemchoice==5)
				{	 
					if(sweqm()==0)
					{
						goto c;
					}
					else
					{
						sweqm();	
						cout<<"현재 용사님의 전투력: "<<swat<<endl;
						goto c;
					}		
				}
		}
	}
	if(chr==2)
	{
		system("pasue");
		quest1arrow();
		cout<<"자 이제 모험을 떠나볼까?"<<endl;
		while(1)
		{
			map();
			map1random=rand()%3+1;
			if(choosemap=="1")
			{
				if(map1random==1)
				{
					map1monster1();		
				}
				else if(map1random==2)
				{
					map1monster2();
				}	
				else if(map1random==3)
				{
					map1monster3();
				}
			}
			else if(choosemap=="2")
			{
				if(map1random==1)
				{
					map2monster1();		
				}
				else if(map1random==2)
				{
					map2monster2();
				}	
				else if(map1random==3)
				{
					map2monster3();
				}
			}
			else if(choosemap=="3")
			{
				if(map1random==1)
				{
					map3monster1();		
				}
				else if(map1random==2)
				{
					map3monster2();
				}	
				else if(map1random==3)
				{
					map3monster3();
				}
			}
			arexpf();
				cout<<"물약을 먹겠습니까? PRESS Y/N"<<endl;
				cin>>checkhp;
				while(checkhp!="N")
				{
					cout<<"어떤 물약을 먹겠습니까? PRESS Y/N"<<endl;
					cin>>checkhp;
					if(checkhp=="Y")
					{
						cout<<"현재 보유하고 계신 물약수: PRESS hp30/hp50/hp100"<<endl;
						cout<<"HP : 30 : "<<arhp30<<endl;
						cout<<"HP : 50 : "<<arhp50<<endl;
						cout<<"HP : 100 : "<<arhp100<<endl;
						cin>>drinkhp;
						if(drinkhp=="hp30")
						{
							arhp30--;
							arhp+=30;
							if(arhp>=200)
							{
								arhp=200;
							}
						}
						else if(drinkhp=="hp50")
						{
							arhp50--;
							arhp+=50;
							if(arhp>=200)
							{
								arhp=200;
							}
						}
						else if(drinkhp=="hp100")
						{
							arhp100--;
							arhp+=100;
							if(arhp>=200)
							{
								arhp=200;
							}
						}
					}
				}
			cout<<"현재 경험치 "<<arexp<<" HP "<<arhp<<endl;
			cout<<"마을로 가시겠습니까(6.)? 아니면 계속 모험을 하시겠습니까(else things)?"<<endl;
			cin>>choose;
			if(choose=="6")
			{
				cout<<"마을로 돌아갑니다."<<endl;
				break;
			}
			else
			{
				continue;	
			}
		}
d:		cout<<"1. 아이템 뽑기"<<endl;///////////////////////////////////장비 강화, 인벤토리 string 으로 재설정 레벨설정. 
		cout<<"2. 물약 상점."<<endl;
		cout<<"3. 사냥터로 다시 가기."<<endl;
		cout<<"4. 인벤토리 보기."<<endl;
		cout<<"5. 장비 강화하기."<<endl;
		cin>>itemchoice;
		while(1)
		{
			if(itemchoice==1)
			{
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎룰렛 돌리기(PRESS E)◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎"<<endl;
				cout<<"나가시려면 E키 외에 아무거나 눌러주세요......."<<endl; 
				cin>>case2;
				if(case2!='E')
				{
					cout<<"도박은 적당히 하는게 정신건강에 좋습니다."<<endl; 
					goto d;
				}
				else if(case2=='E'&&arcoin>0)
				{
					arcoin--;
					case2rand=rand()%100+1;
					system("pause");
					if(case2rand<=10)
					{
						cout<<"뭐야! 내돈...기계가 망가졌나보다.......ㅠㅠ"<<endl;
					}
					else if(case2rand>10&&case2rand<=30)
					{			
						ps=rand()%3+1;
						if(ps==1)
						{
							cout<<"hp50포션을 획득했다!"<<endl;
							arhp50+=1;
						}
						else if(ps==2)
						{
							cout<<"hp30포션을 획득했다!"<<endl;
							arhp30+=1;
						}
						else if(ps==3)
						{
							cout<<"hp100포션을 획득했다!"<<endl;
							arhp100+=1;
						}
					}
					else if(case2rand>30&&case2rand<=60)
					{
						cout<<"무기 강화권을 획득했다!"<<endl;
						arup+=1; 
					}
					else if(case2rand>60&&case2rand<=99)
					{
						wppieces2=rand()%3+1;
						cout<<wppieces2<<" 개의 무기 조각을 획득했다!"<<endl;
						wppiece2+=wppieces2;
					}
					else if(case2rand==100)
					{
						cout<<"가끔 이런 날도 있는법이지..."<<endl;
						cout<<"최대HP+10"<<endl;
						arhp+=10;	
					}	
				}
			}
			else if(itemchoice==2)
			{
				cout<<"1.HP : 30  ->2$"<<endl;
				cout<<"2.HP : 50  ->3$"<<endl;
				cout<<"3.HP : 100 ->6$"<<endl;
				cout<<"나가시려면 1,2,3 키 외에 아무거나 눌러주세요......."<<endl; 
				cin>>case2;
				if(case2!='1'&&case2!='2'&&case2!='3')
				{
					cout<<"상점을 나갑니다!"<<endl; 
					goto d;
				}
				if(case2=='1')
				{
					arhp30++;
					if(arcoin>=2)
					{
						arcoin-=2;
						cout<<"현재 용사님께서 소유하시고 계신 HP30 곗수:"<<arhp30<<endl;
					}
					else
					{
						cout<<"현재 용사님께서는 코인이 부족합니다."<<endl; 
					}
				
				} 
				else if(case2=='2')
				{
					arhp50++;
					if(arcoin>=3)
					{
						arcoin-=3;
						cout<<"현재 용사님께서 소유하시고 계신 HP50 곗수:"<<arhp50<<endl;
					}
					else
					{
						cout<<"현재 용사님께서는 코인이 부족합니다."<<endl; 
					}
				}
				else if(case2=='3')
				{
					arhp100++;
					if(arcoin>=6)
					{
						arcoin-=6;
						cout<<"현재 용사님께서 소유하시고 계신 HP100 곗수:"<<arhp100<<endl;	
					}
					else
					{
						cout<<"현재 용사님께서는 코인이 부족합니다."<<endl; 
					}	
				}
			}
			else if(itemchoice==3)
			{
				map(); 
				map1random=rand()%3+1;
				if(choosemap=="1")
				{
					if(map1random==1)
					{
						map1monster1();		
					}
					else if(map1random==2)
					{
						map1monster2();
					}	
					else if(map1random==3)
					{
						map1monster3();
					}
				}
				else if(choosemap=="2")
				{
					if(map1random==1)
					{
						map2monster1();		
					}
					else if(map1random==2)
					{
						map2monster2();
					}	
					else if(map1random==3)
					{
						map2monster3();
					}
				}
				else if(choosemap=="3")
				{
					if(map1random==1)
					{
						map3monster1();		
					}
					else if(map1random==2)
					{
						map3monster2();
					}	
					else if(map1random==3)
					{
						map3monster3();
					}
				} 
				arexpf();
				cout<<"물약을 먹겠습니까? PRESS Y/N"<<endl;
				cin>>checkhp;
				while(checkhp!="N")
				{
					cout<<"어떤 물약을 먹겠습니까? PRESS Y/N"<<endl;
					cin>>checkhp;
					if(checkhp=="Y")
					{
						cout<<"현재 보유하고 계신 물약수: PRESS hp30/hp50/hp100"<<endl;
						cout<<"HP : 30 : "<<arhp30<<endl;
						cout<<"HP : 50 : "<<arhp50<<endl;
						cout<<"HP : 100 : "<<arhp100<<endl;
						cin>>drinkhp;
						if(drinkhp=="hp30")
						{
							arhp30--;
							arhp+=30;
							if(arhp>=200)
							{
								arhp=200;
							}
						}
						else if(drinkhp=="hp50")
						{
							arhp50--;
							arhp+=50;
							if(arhp>=200)
							{
								arhp=200;
							}
						}
						else if(drinkhp=="hp100")
						{
							arhp100--;
							arhp+=100;
							if(arhp>=200)
							{
								arhp=200;
							}
						}
					}
				}
				cout<<"현재 경험치 "<<arexp<<" HP "<<arhp<<endl;
				cout<<"마을로 가시겠습니까(6.)? 아니면 계속 모험을 하시겠습니까(else things)?"<<endl;
				cin>>choose;
				if(choose=="6")
				{
					cout<<"마을로 돌아갑니다."<<endl;
					goto d;
				}
				else
				{
					continue;	
				}
			}
			else if(itemchoice==4)
			{
				cout<<"용사께서 소유하고 계신 아이템: =================="<<endl;
				cout<<"HP 30:"<<arhp30<<endl;
				cout<<"HP 50:"<<arhp50<<endl;
				cout<<"HP 100:"<<arhp100<<endl;
				cout<<"Coin:"<<arcoin<<endl;
				cout<<"무기 조각 곗수: "<<wppiece2<<endl;
				cout<<"무기 : 쓸만한 활"<<endl; ///////////////////////////////////////나중에 string 으로 무기 이름 저장해서 부르기로 고치자.
				goto d;
			}
			else if(itemchoice==5)
			{
				areqm();	
				cout<<"현재 용사님의 전투력: "<<arat<<endl;
				goto d;
			}			
		}	
	}			 
	return 0;
}

