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
		cout<<"1.<�˻�> 2.<�ü�>"<<endl;
		cout<<">>�ɷ�ġ�� Ȯ���� ������<<"<<endl;   
		cout<<"<<1,2>> �̿��� ����  �Է��Ͽ� â�� �����ʽÿ�."<<endl;                       
		cin>>chrst;
		if(chrst=='1')
		{
		cout<<"STR :�ڡڡ�"<<endl
			<<"HP  :�ڡڡ�"<<endl
			<<"MP  :��"<<endl;
		}
		else if(chrst=='2')
		{
			cout<<"STR :�ڡڡ�"<<endl
			<<"HP  :�ڡ�"<<endl
			<<"MP  :�ڡ�"<<endl;
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
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==2&&arexp>=50)
			{
				uslv=3;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}else if(uslv==3&&arexp>=70)
			{
				uslv=4;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==4&&arexp>=90)
			{
				uslv=5;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==5&&arexp>=110)
			{
				uslv=6;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==6&&arexp>=130)
			{
				uslv=7;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==7&&arexp>=160)
			{
				uslv=8;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==8&&arexp>=190)
			{
				uslv=9;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==9&&arexp>=220)
			{
				uslv=10;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==10&&arexp>=250)
			{
				uslv=11;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
			}
			else if(uslv==11&&arexp>=280)
			{
				uslv=12;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==12&&arexp>=310)
			{
				uslv=13;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==13&&arexp>=340)
			{
				uslv=14;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==14&&arexp>=370)
			{
				uslv=15;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==15&&arexp>=400)
			{
				uslv=16;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==16&&arexp>=430)
			{
				uslv=17;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==17&&arexp>=460)
			{
				uslv=18;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==18&&arexp>=490)
			{
				uslv=19;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==19&&arexp>=520)
			{
				uslv=20;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<arexp<<endl;
			}
			else if(uslv==20&&arexp>=550)
			{
				uslv=20;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�MAX LEVEL!�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
				cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
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
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==2&&swexp>=50)
	{
		uslv=3;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==3&&swexp>=70)
	{
		uslv=4;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==4&&swexp>=90)
	{
		uslv=5;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==5&&swexp>=110)
	{
		uslv=6;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==6&&swexp>=130)
	{
		uslv=7;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==7&&swexp>=160)
	{
		uslv=8;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==8&&swexp>=190)
	{
		uslv=9;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==9&&swexp>=220)
	{
		uslv=10;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==10&&swexp>=250)
	{
		uslv=11;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==11&&swexp>=280)
	{
		uslv=12;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==12&&swexp>=310)
	{
		uslv=13;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==13&&swexp>=340)
	{
		uslv=14;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==14&&swexp>=370)
	{
		uslv=15;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==15&&swexp>=400)
	{
		uslv=16;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==16&&swexp>=430)
	{
		uslv=17;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}	
	else if(uslv==17&&swexp>=460)
	{
	uslv=18;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==18&&swexp>=490)
	{
		uslv=19;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}
	else if(uslv==19&&swexp>=520)
	{
		uslv=20;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�LEVEL UP�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}	
	else if(uslv==20&&swexp>=550)
	{
		uslv=20;
		swexp=0;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�MAX LEVEL!�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�"<<endl;
		cout<<"USER LEVEL ->"<<uslv<<" :  USER EXP ->"<<swexp<<endl;
	}	
}

void epilogue()
{
	cout<<"�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�"<<endl
		<<"���� �� ���� ���� ������ ���� �Ѱ��� ��� �־���."<<endl
		<<"�츮�� �� ������ ������ ��ȭ�ο��� �˾Ҵ�."<<endl
		<<"������ ����� ���� ������ �ֺ����� �°���ü��� ��Ÿ�� ������ �����־���."<<endl
		<<"���� �޲ٴ��� �˾Ҵ� ���� �տ� ���� ��ó�� ���������� ���ó� �ٸ��� �ٲ�°� ������."<<endl
		<<"����ü ���� �̷� ������ ���� ������������? ����ü ��?."<<endl
		<<"���ķ� ���� ����� �Ǹ��̸� ã������ ������ ������."<<endl
		<<"�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�"<<endl;
}

int sweqm()
{
	int swuprand=0;
	char sweqmin='\0';
	while(1)
	{
		cout<<"�ȳ��ϽŰ� ���� ���������ϼ�~ �� ���� ��� �ʿ��Ѱ�?"<<endl;
		cout<<"���� ��� ��ȭ�ϱ� PRESS E"<<endl;
		cout<<"���� �����ϰ� �ִ� ��� ��ȭ�� ��: "<<swup<<endl;
		cout<<"������ ���ư��� PRESS R."<<endl;
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
					cout<<"��ȭ�� 1���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<1)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=1;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=90)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=5;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==2)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 2���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<2)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=2;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=80)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=7;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==3)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 3���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<3)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=3;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=70)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=9;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==4)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 4���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<4)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=4;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=60)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=11;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==5)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 6���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<6)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=6;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=50)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=13;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==6)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 8���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<8)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=8;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=40)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=15;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==7)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 10���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<10)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=10;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=30)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=20;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==8)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 12���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<12)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=12;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=20)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=25;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==9)
				{
					swuprand=rand()%100+1;
					cout<<"��ȭ�� 15���� �Ҹ� �˴ϴ�."<<endl;
					if(swup<15)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					swup-=15;
					cout<<"���� ��ȭ�� ��: "<<swup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(swuprand<=10)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						swordup++;
						swat+=30;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
			}
			else
			{	
				cout<<"���� ��ȭ���� ���ݾ�! �̷��� ���� ��ȭ�� �� ���شٰ�..."<<endl;
				cout<<"������ �����Ͻ� ��ȭ�� ��: "<<swup<<endl;
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
		cout<<"�ȳ��ϽŰ� ���� ���������ϼ�~ �� ���� ��� �ʿ��Ѱ�?"<<endl;
		cout<<"���� ��� ��ȭ�ϱ� PRESS E"<<endl;
		cout<<"���� �����ϰ� �ִ� ��� ��ȭ�� ��: "<<arup<<endl;
		cout<<"������ ���ư��� PRESS R."<<endl;
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
					cout<<"��ȭ�� 1���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<1)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=1;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=90)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=5;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==2)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 2���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<2)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=2;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=80)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=7;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==3)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 3���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<3)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=3;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=70)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=9;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==4)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 4���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<4)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=4;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=60)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=11;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==5)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 6���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<6)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=6;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=50)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=13;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==6)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 8���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<8)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=8;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=40)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=15;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(swordup==7)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 10���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<10)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=10;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=30)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=20;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==8)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 12���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<12)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=12;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=20)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=25;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
				else if(arrowup==9)
				{
					aruprand=rand()%100+1;
					cout<<"��ȭ�� 15���� �Ҹ� �˴ϴ�."<<endl;
					if(arup<15)
					{
						cout<<"��ȭ�� ����."<<endl;
						break;
					}
					arup-=15;
					cout<<"���� ��ȭ�� ��: "<<arup<<endl;
					cout<<"��ȭ ����~! �׶׶׶ѿ�ѿ�ѿ�ѿ�׶�"<<endl;
					if(aruprand<=10)
					{
						cout<<"........��~  ��ȭ ����!!"<<endl;
						arrowup++;
						arat+=30;
					}
					else
					{
						cout<<".................�̾��ϳ� �ڳ�......"<<endl;
					}
				}
			}
			else
			{	
				cout<<"���� ��ȭ���� ���ݾ�! �̷��� ���� ��ȭ�� �� ���شٰ�..."<<endl;
				cout<<"������ �����Ͻ� ��ȭ�� ��: "<<arup<<endl;
				break;
			}	
		}
	}
	return arrowup;	
}

void woodsword()
{
	cout<<"STR :��"<<endl
		<<"SPEED :��"<<endl;
	if(chr==1&&swordup==1)
	{
		swat+=10;	
	}	
}

void quest1sword()
{
	int q1random=0;
	cout<<"�ֺ����� ������ ���⸦ ã�ƺ���"<<endl;
	while(1)
	{
		q1random=rand()%100;
		if(q1random<25)
		{
			cout<<"������ ����� �߰��ߴ�!!"<<endl;
			woodsword();
			break;
		}
		else
		{
			cout<<"�ٸ����� ã�ƺ���..... ������� ������ �����°� �ʹ� ������!"<<endl;
			system("pause"); 
		}
	}
} 

void quest1arrow()
{
	int q1random=0;
	cout<<"�ֺ����� ������ ���⸦ ã�ƺ���"<<endl;
	while(1)
	{
		q1random=rand()%100;
		if(q1random<25)
		{
			cout<<"������ Ȱ�� �߰��ߴ�!!"<<endl;
			woodsword();
			break;
		}
		else
		{
			cout<<"�ٸ����� ã�ƺ���..... ������� ������ �����°� �ʹ� ������!"<<endl;
			system("pause"); 
		}
	}
} 

void map()
{
b:	cout<<"��� ������ ����? (1.Ǫ�� ����LV:1 ~ 10),(2.���ϸ� �縷LV:10 ~ 15),(3.����� �ٴ尡LV:15 ~ 20)"<<endl;
	cin>>choosemap;
	if(choosemap=="1")
	{
		if(uslv>=1)
		{
			cout<<"Ǫ�� �������� �����մϴ�."<<endl; 
		}
	}
	else if(choosemap=="2")
	{
		if(uslv>=10)
		{
			cout<<"���ϸ� �縷���� �����մϴ�."<<endl; 
		}
		else if(uslv<10)
		{
			cout<<"���� ���谡�� �� ������ ���� �ϽǼ���  �����ϴ�."<<endl;
			goto b;
		}
	}
	else if(choosemap=="3")
	{
		if(uslv>=15)
		{
			cout<<"���䳢 �ٴ尡���� �����մϴ�."<<endl; 
		}
		else if(uslv<15)
		{
			cout<<"���� ���谡�� �� ������ ���� �ϽǼ���  �����ϴ�."<<endl;
			goto b;
		}
	}
	else
	{
		cout<<"���� ���� �Է� ���ּ���"<<endl;
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
	cout<<"�հ����� �⿬!"<<endl;
	cout<<"HP : "<<anthp<<" ATTACK : 1 ~ 5"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�հ����� HP : "<<anthp<<endl;
				swhp-=antrandom;
				cout<<"�հ����� ����!! "<<antrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 30 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp30+=1;
					}
					cout<<"�հ��̸� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=10;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin++;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}
			}
			else if(chr==2)
			{
				aratrand=arrand();
				anthp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�հ����� HP : "<<anthp<<endl;
				arhp-=antrandom;
				cout<<"�հ����� ����!! "<<antrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 30 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp30+=1;
					}
					cout<<"�հ��̸� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=10;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin++;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto f;
	}
}

void map1monster2()
{
	int hamrandom=0;
	int hamhp=100;
	int hamat=2;
	int swatrand,aratrand;
	
	cout<<"�ܽ��� �⿬!"<<endl;
	cout<<"HP : "<<hamhp<<" ATTACK : 1 ~ 2"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�ܽ����� HP : "<<hamhp<<endl;
				swhp-=hamrandom;
				cout<<"�ܽ����� ����!! "<<hamrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 30 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp30+=1;
					}
					cout<<"�ܽ��͸� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=15;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;	
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				hamhp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�ܽ����� HP : "<<hamhp<<endl;
				arhp-=hamrandom;
				cout<<"�ܽ����� ����!! "<<hamrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 30 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp30+=1;
					}
					cout<<"�ܽ��͸� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=15;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto g;
	}
}

void map1monster3()
{
	int frograndom=0;
	int froghp=200;
	int frogat=10;
	int swatrand,aratrand;
	cout<<"����: �������� �⿬!"<<endl;
	cout<<"HP : "<<froghp<<" ATTACK : 1 ~ 10"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�������� HP : "<<froghp<<endl;
				swhp-=frograndom;
				cout<<"�������� ����!! "<<frograndom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 50 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp50+=1;
					}
					cout<<"�������� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=20;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				froghp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�������� HP : "<<froghp<<endl;
				arhp-=frograndom;
				cout<<"�������� ����!! "<<frograndom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 50 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp50+=1;
					}
					cout<<"�������� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=20;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto h;
	}
}

void map2monster1()
{
	int camelrandom=0;
	int camelhp=250;
	int camelat=10;
	int swatrand,aratrand;
	cout<<"��Ÿ �⿬!"<<endl;
	cout<<"HP : "<<camelhp<<" ATTACK : 1 ~ 10"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"��Ÿ�� HP : "<<camelhp<<endl;
				swhp-=camelrandom;
				cout<<"��Ÿ�� ����!! "<<camelrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 50 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp50+=1;
					}
					cout<<"��Ÿ�� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=20;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin++;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}
			}
			else if(chr==2)
			{
				aratrand=arrand();
				camelhp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"��Ÿ�� HP : "<<camelhp<<endl;
				arhp-=camelrandom;
				cout<<"��Ÿ�� ����!! "<<camelrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 50 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp50+=1;
					}
					cout<<"��Ÿ�� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=20;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin++;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto j;
	}
}

void map2monster2()
{
	int	snakerandom=0;
	int snakehp=150;
	int snakeat=20;
	int swatrand,aratrand;
	cout<<"�� �⿬!"<<endl;
	cout<<"HP : "<<snakehp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"���� HP : "<<snakehp<<endl;
				swhp-=snakerandom;
				cout<<"���� ����!! "<<snakerandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 50 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp50+=1;
					}
					cout<<"�츦 óġ�Ͽ����ϴ�."<<endl;	
					swexp+=30;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin++;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				snakehp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"���� HP : "<<snakehp<<endl;
				arhp-=snakerandom;
				cout<<"���� ����!! "<<snakerandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 70 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp50+=1;
					}
					cout<<"�츦 óġ�Ͽ����ϴ�."<<endl;	
					arexp+=30;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin++;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto k;
	}	
} 
 
void map2monster3()
{
	int	zodiacrandom=0;
	int zodiachp=250;
	int zodiacat=30;
	int swatrand,aratrand;
	cout<<"����: ���� �⿬!"<<endl;
	cout<<"HP : "<<zodiachp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"������ HP : "<<zodiachp<<endl;
				swhp-=zodiacrandom;
				cout<<"������ ����!! "<<zodiacrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp100+=1;
					}
					cout<<"������ óġ�Ͽ����ϴ�."<<endl;	
					swexp+=40;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				zodiachp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"������ HP : "<<zodiachp<<endl;
				arhp-=zodiacrandom;
				cout<<"��Ÿ�� ����!! "<<zodiacrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp100+=1;
					}
					cout<<"������ óġ�Ͽ����ϴ�."<<endl;	
					arexp+=40;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto l;
	}		
} 

void map3monster1()
{
	int	nemorandom=0;
	int nemohp=400;
	int nemoat=30;
	int swatrand,aratrand;
	cout<<"�ϸ� �⿬!"<<endl;
	cout<<"HP : "<<nemohp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�ϸ��� HP : "<<nemohp<<endl;
				swhp-=nemorandom;
				cout<<"�ϸ��� ����!! "<<nemorandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp100+=1;
					}
					cout<<"�ϸ� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=50;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				nemohp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"�ϸ��� HP : "<<nemohp<<endl;
				arhp-=nemorandom;
				cout<<"�ϸ��� ����!! "<<nemorandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp100+=1;
					}
					cout<<"�ϸ� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=50;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=2;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto n;
	}		
}

void map3monster2()
{
	int	whalerandom=0;
	int whalehp=800;
	int whaleat=15;
	int swatrand,aratrand;
	cout<<"�� �⿬!"<<endl;
	cout<<"HP : "<<whalehp<<" ATTACK : 1 ~ 15"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"���� HP : "<<whalehp<<endl;
				swhp-=whalerandom;
				cout<<"���� ����!! "<<whalerandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp100+=1;
					}
					cout<<"���� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=60;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=4;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				whalehp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"���� HP : "<<whalehp<<endl;
				arhp-=whalerandom;
				cout<<"���� ����!! "<<whalerandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp100+=1;
					}
					cout<<"���� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=60;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=4;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
		goto m;
	}		
}

void map3monster3()
{
	int	sharkrandom=0;
	int sharkhp=800;
	int sharkat=40;
	int swatrand,aratrand;
	cout<<"����: ��� �⿬!"<<endl;
	cout<<"HP : "<<sharkhp<<" ATTACK : 1 ~ 30"<<endl;
	cout<<"�ο�ڽ��ϱ�? 1.Yes or 2.Run"<<endl;
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
				cout<<"������ ����!! "<<swatrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"����� HP : "<<sharkhp<<endl;
				swhp-=sharkrandom;
				cout<<"����� ����!! "<<sharkrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<swhp<<endl;
				if(swhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						swhp100+=1;
					}
					cout<<"�� óġ�Ͽ����ϴ�."<<endl;	
					swexp+=80;
					cout<<wppiecerand<<" ���� ���� ������ ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece1+=wppiecerand;
					swup+=uppiecerand;
					swcoin+=5;
					cout<<"�� ��������  ��� :"<<wppiece1<<endl;
					cout<<"�� ���� ��� :"<<swcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<swup<<endl;
					system("pause");
					break; 
				}	
			}
			else if(chr==2)
			{
				aratrand=arrand();
				sharkhp-=aratrand;
				cout<<"������ ����!! "<<aratrand<<" �� �������� �־����ϴ�"<<endl;
				cout<<"����� HP : "<<sharkhp<<endl;
				arhp-=sharkrandom;
				cout<<"����� ����!! "<<sharkrandom<<" �� �������� �޾ҽ��ϴ�"<<endl;
				cout<<"������ ���� HP : "<<arhp<<endl;
				if(arhp<0)
				{
					cout<<"������ ����Ͽ����ϴ� ������ ���ư��ϴ�."<<endl; 
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
						cout<<"Hp 100 ������ ȹ�� �Ͽ����ϴ�."<<endl;
						arhp100+=1;
					}
					cout<<"�� óġ�Ͽ����ϴ�."<<endl;	
					arexp+=80;
					cout<<wppiecerand<<" ���� ���������� ȹ�� �Ͽ����ϴ�."<<endl;
					cout<<uppiecerand<<" ���� ���� ��ȭ���� ȹ�� �Ͽ����ϴ�."<<endl;
					wppiece2+=wppiecerand;
					arup+=uppiecerand;
					arcoin+=5;
					cout<<"�� ��������  ��� :"<<wppiece2<<endl;
					cout<<"�� ���� ��� :"<<arcoin<<endl;
					cout<<"�� ���� ��ȭ�� ��� :"<<arup<<endl;
					system("pause");
					break; 
				}	
			}
		}
	}
	else if(choose=="2")
	{
		cout<<"������ �����ƽ��ϴ�....."<<endl;
		system("pause");
	}
	else 
	{
		cout<<"�̷� �ʾ���Ⱦ��....."<<endl;
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
	
	cout<<"RPG ���ӿ� ���Ű��� ȯ���մϴ�. "<<endl<<endl;
	cout<<"<�ɸ��͸� ������ �ּ���>"<<endl;
	character();
	
a:	cout<<"������ ��� �ɸ��͸� ���̽��ϱ�?"<<endl;
	cout<<"1��? �ƴϸ� 2��?"<<endl;
	cin>>chr;
	if(chr==1)
	{
		cout<<"����� �˻縦 �����Ͽ����ϴ�."<<endl;
		cout<<"������ �����ϰڽ��ϴ�."<<endl;
		epilogue();
	}
	else if(chr==2)
	{
		cout<<"����� �ü��� �����Ͽ����ϴ�."<<endl;
		cout<<"������ �����ϰڽ��ϴ�."<<endl;
		epilogue();
	} 
	else
	{
		cout<<"���ε� �Է��� ���ֽʽÿ�."<<endl;
		cout<<"�ɷ�ġ�� �ٽ� ���ڽ��ϱ�? (press 1)"<<endl; 
		cin>>tresh1;
		if(tresh1=='1')
		{
			character();
			goto a;	
		}
			
		else
		{
			cout<<"���ε� �Է��� ���ֽʽÿ�."<<endl;
			cout<<"�ɷ�ġ�� �ٽ� ���ڽ��ϱ�? (press 1)"<<endl;
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
		cout<<"�� ���� ������ ��������?"<<endl;
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
					cout<<"������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
					cin>>checkhp;
					while(checkhp!="N")
					{
						cout<<"� ������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
						cin>>checkhp;
						if(checkhp=="Y")
						{
							cout<<"���� �����ϰ� ��� �����: PRESS hp30/hp50/hp100"<<endl;
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
			cout<<"������ ���ðڽ��ϱ�(6.)? �ƴϸ� ��� ������ �Ͻðڽ��ϱ�(else things)?"<<endl;
			cout<<"���� ����ġ "<<swexp<<" HP "<<swhp<<endl;
			cin>>choose;
			if(choose=="6")//���� ��� ����� �����̶� ������ ��ȭ ������ �̱� �� �޽ĵ��. 
			{
				cout<<"������ ���ư��ϴ�."<<endl;
				break;
			}
			else
			{
				continue;	
			}	
		}
c:		cout<<"1. ������ �̱�"<<endl;
		cout<<"2. ���� ����."<<endl;
		cout<<"3. ����ͷ� �ٽ� ����."<<endl;
		cout<<"4. �κ��丮 ����."<<endl;
		cout<<"5. ��� ��ȭ�ϱ�."<<endl;//////////////////////////////////////////���ȭ 
		 
		cin>>itemchoice;
		while(1)
		{
			if(itemchoice==1)
			{
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݷ귿 ������(PRESS E)�ݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�����÷��� EŰ �ܿ� �ƹ��ų� �����ּ���......."<<endl; 
				cin>>case1;
				if(case1!='E')
				{
					cout<<"������ ������ �ϴ°� ���Űǰ��� �����ϴ�."<<endl; 
					goto c;
				}
				else if(case1=='E'&&swcoin>0)
				{
					swcoin--;
					case1rand=rand()%100+1;
					system("pause");
					if(case1rand<=10)
					{
						cout<<"����! ����...��谡 ������������.......�Ф�"<<endl;
					}
					else if(case1rand>10&&case1rand<=30)
					{			
						ps=rand()%3+1;
						if(ps==1)
						{
							cout<<"hp50������ ȹ���ߴ�!"<<endl;
							swhp50+=1;
						}
						else if(ps==2)
						{
							cout<<"hp30������ ȹ���ߴ�!"<<endl;
							swhp30+=1;
						}
						else if(ps==3)
						{
							cout<<"hp100������ ȹ���ߴ�!"<<endl;
							swhp100+=1;
						}
					}
					else if(case1rand>30&&case1rand<=60)
					{
						wppiecerand=rand()%15+1;
						cout<<wppiecerand<<"���� ���� ��ȭ���� ȹ���ߴ�!"<<endl;
						swup+=wppiecerand; 
					}
					else if(case1rand>60&&case1rand<=99)
					{
						wppieces1=rand()%3+1;
						cout<<wppieces1<<" ���� ���� ������ ȹ���ߴ�!"<<endl;
						wppiece1+=wppieces1;
					}
					else if(case1rand==100)
					{
						cout<<"���� �̷� ���� �ִ¹�����..."<<endl;
						cout<<"�ִ�HP+10"<<endl;
						swhp+=10;	
					}	
				}
			}
			else if(itemchoice==2)
			{
				cout<<"1.HP : 30  ->2$"<<endl;
				cout<<"2.HP : 50  ->3$"<<endl;
				cout<<"3.HP : 100 ->6$"<<endl;
				cout<<"�����÷��� 1,2,3 Ű �ܿ� �ƹ��ų� �����ּ���......."<<endl; 
				cin>>case2;
				if(case2!='1'&&case2!='2'&&case2!='3')
				{
					cout<<"������ �����ϴ�!"<<endl; 
					goto c; 
				}
				if(case2=='1')
				{
					swhp30++;
					if(swcoin>=2)
					{
						swcoin-=2;
						cout<<"���� ���Բ��� �����Ͻð� ��� HP30 ���:"<<swhp30<<endl;
					}
					else
					{
						cout<<"���� ���Բ����� ������ �����մϴ�."<<endl; 
					}
				
				} 
				else if(case2=='2')
				{
					swhp50++;
					if(swcoin>=3)
					{
						swcoin-=3;
						cout<<"���� ���Բ��� �����Ͻð� ��� HP50 ���:"<<swhp50<<endl;
					}
					else
					{
						cout<<"���� ���Բ����� ������ �����մϴ�."<<endl; 
					}
				}
				else if(case2=='3')
				{
					swhp100++;
					if(swcoin>=6)
					{
						swcoin-=6;
						cout<<"���� ���Բ��� �����Ͻð� ��� HP100 ���:"<<swhp100<<endl;	
					}
					else
					{
						cout<<"���� ���Բ����� ������ �����մϴ�."<<endl; 
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
					cout<<"������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
					cin>>checkhp;
					while(checkhp!="N")
					{
						cout<<" ������� �԰ڽ��ϱ�? PRESS Y/N"<<endl;
						cin>>checkhp;
						if(checkhp=="Y")
						{
							cout<<"���� �����ϰ� ��� �����: PRESS hp30/hp50/hp100"<<endl;
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
					cout<<"������ ���ðڽ��ϱ�(6.)? �ƴϸ� ��� ������ �Ͻðڽ��ϱ�(else things)?"<<endl;
					cout<<"���� ����ġ "<<swexp<<" HP "<<swhp<<endl;
					cin>>choose;
					if(choose=="6")//���� ��� ����� �����̶� ������ ��ȭ ������ �̱� �� �޽ĵ��. 
					{
						cout<<"������ ���ư��ϴ�."<<endl;
						goto c;
					}
					else
					{
						continue;	
					}	
				}
				else if(itemchoice==4)
				{
					cout<<"��粲�� �����ϰ� ��� ������: =================="<<endl;
					cout<<"HP 30:"<<swhp30<<endl;
					cout<<"HP 50:"<<swhp50<<endl;
					cout<<"HP 100:"<<swhp100<<endl;
					cout<<"Coin:"<<swcoin<<endl;
					cout<<"���� ���� ���: "<<wppiece1<<endl;
					cout<<"���� : ������ ���"<<endl; ///////////////////////////////////////���߿� string ���� ���� �̸� �����ؼ� �θ���� ��ġ��.	
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
						cout<<"���� ������ ������: "<<swat<<endl;
						goto c;
					}		
				}
		}
	}
	if(chr==2)
	{
		system("pasue");
		quest1arrow();
		cout<<"�� ���� ������ ��������?"<<endl;
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
				cout<<"������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
				cin>>checkhp;
				while(checkhp!="N")
				{
					cout<<"� ������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
					cin>>checkhp;
					if(checkhp=="Y")
					{
						cout<<"���� �����ϰ� ��� �����: PRESS hp30/hp50/hp100"<<endl;
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
			cout<<"���� ����ġ "<<arexp<<" HP "<<arhp<<endl;
			cout<<"������ ���ðڽ��ϱ�(6.)? �ƴϸ� ��� ������ �Ͻðڽ��ϱ�(else things)?"<<endl;
			cin>>choose;
			if(choose=="6")
			{
				cout<<"������ ���ư��ϴ�."<<endl;
				break;
			}
			else
			{
				continue;	
			}
		}
d:		cout<<"1. ������ �̱�"<<endl;///////////////////////////////////��� ��ȭ, �κ��丮 string ���� �缳�� ��������. 
		cout<<"2. ���� ����."<<endl;
		cout<<"3. ����ͷ� �ٽ� ����."<<endl;
		cout<<"4. �κ��丮 ����."<<endl;
		cout<<"5. ��� ��ȭ�ϱ�."<<endl;
		cin>>itemchoice;
		while(1)
		{
			if(itemchoice==1)
			{
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݷ귿 ������(PRESS E)�ݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�"<<endl;
				cout<<"�����÷��� EŰ �ܿ� �ƹ��ų� �����ּ���......."<<endl; 
				cin>>case2;
				if(case2!='E')
				{
					cout<<"������ ������ �ϴ°� ���Űǰ��� �����ϴ�."<<endl; 
					goto d;
				}
				else if(case2=='E'&&arcoin>0)
				{
					arcoin--;
					case2rand=rand()%100+1;
					system("pause");
					if(case2rand<=10)
					{
						cout<<"����! ����...��谡 ������������.......�Ф�"<<endl;
					}
					else if(case2rand>10&&case2rand<=30)
					{			
						ps=rand()%3+1;
						if(ps==1)
						{
							cout<<"hp50������ ȹ���ߴ�!"<<endl;
							arhp50+=1;
						}
						else if(ps==2)
						{
							cout<<"hp30������ ȹ���ߴ�!"<<endl;
							arhp30+=1;
						}
						else if(ps==3)
						{
							cout<<"hp100������ ȹ���ߴ�!"<<endl;
							arhp100+=1;
						}
					}
					else if(case2rand>30&&case2rand<=60)
					{
						cout<<"���� ��ȭ���� ȹ���ߴ�!"<<endl;
						arup+=1; 
					}
					else if(case2rand>60&&case2rand<=99)
					{
						wppieces2=rand()%3+1;
						cout<<wppieces2<<" ���� ���� ������ ȹ���ߴ�!"<<endl;
						wppiece2+=wppieces2;
					}
					else if(case2rand==100)
					{
						cout<<"���� �̷� ���� �ִ¹�����..."<<endl;
						cout<<"�ִ�HP+10"<<endl;
						arhp+=10;	
					}	
				}
			}
			else if(itemchoice==2)
			{
				cout<<"1.HP : 30  ->2$"<<endl;
				cout<<"2.HP : 50  ->3$"<<endl;
				cout<<"3.HP : 100 ->6$"<<endl;
				cout<<"�����÷��� 1,2,3 Ű �ܿ� �ƹ��ų� �����ּ���......."<<endl; 
				cin>>case2;
				if(case2!='1'&&case2!='2'&&case2!='3')
				{
					cout<<"������ �����ϴ�!"<<endl; 
					goto d;
				}
				if(case2=='1')
				{
					arhp30++;
					if(arcoin>=2)
					{
						arcoin-=2;
						cout<<"���� ���Բ��� �����Ͻð� ��� HP30 ���:"<<arhp30<<endl;
					}
					else
					{
						cout<<"���� ���Բ����� ������ �����մϴ�."<<endl; 
					}
				
				} 
				else if(case2=='2')
				{
					arhp50++;
					if(arcoin>=3)
					{
						arcoin-=3;
						cout<<"���� ���Բ��� �����Ͻð� ��� HP50 ���:"<<arhp50<<endl;
					}
					else
					{
						cout<<"���� ���Բ����� ������ �����մϴ�."<<endl; 
					}
				}
				else if(case2=='3')
				{
					arhp100++;
					if(arcoin>=6)
					{
						arcoin-=6;
						cout<<"���� ���Բ��� �����Ͻð� ��� HP100 ���:"<<arhp100<<endl;	
					}
					else
					{
						cout<<"���� ���Բ����� ������ �����մϴ�."<<endl; 
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
				cout<<"������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
				cin>>checkhp;
				while(checkhp!="N")
				{
					cout<<"� ������ �԰ڽ��ϱ�? PRESS Y/N"<<endl;
					cin>>checkhp;
					if(checkhp=="Y")
					{
						cout<<"���� �����ϰ� ��� �����: PRESS hp30/hp50/hp100"<<endl;
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
				cout<<"���� ����ġ "<<arexp<<" HP "<<arhp<<endl;
				cout<<"������ ���ðڽ��ϱ�(6.)? �ƴϸ� ��� ������ �Ͻðڽ��ϱ�(else things)?"<<endl;
				cin>>choose;
				if(choose=="6")
				{
					cout<<"������ ���ư��ϴ�."<<endl;
					goto d;
				}
				else
				{
					continue;	
				}
			}
			else if(itemchoice==4)
			{
				cout<<"��粲�� �����ϰ� ��� ������: =================="<<endl;
				cout<<"HP 30:"<<arhp30<<endl;
				cout<<"HP 50:"<<arhp50<<endl;
				cout<<"HP 100:"<<arhp100<<endl;
				cout<<"Coin:"<<arcoin<<endl;
				cout<<"���� ���� ���: "<<wppiece2<<endl;
				cout<<"���� : ������ Ȱ"<<endl; ///////////////////////////////////////���߿� string ���� ���� �̸� �����ؼ� �θ���� ��ġ��.
				goto d;
			}
			else if(itemchoice==5)
			{
				areqm();	
				cout<<"���� ������ ������: "<<arat<<endl;
				goto d;
			}			
		}	
	}			 
	return 0;
}

