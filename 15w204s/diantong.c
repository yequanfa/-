#include "stc15.h"
#define uchar unsigned char
#define uint unsigned int
#define INT0 P32 //��������绽��
#define PVOL P55 //��ѹ��ʾ
#define SWITCH P54  //����
//#include "intrins.h"

bit FLAG; 
uchar num;
/*
void Delay1000ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 46;
	j = 153;
	k = 245;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}
*/
void delay_ms(uint k)		//@12.000MHz
{
	unsigned char i, j,l;
	l=255;
	i = 255;
	j = 255;
	do
	{{{
		while (--j);
	} while (--i);
}while(--l);
	} while(--k);
}
/*
void dianya(uint n)
{ 
	for(n;n>0;n--)
	{
		if
	}
}
*/


void main(void)
{uint x;
	
	          //ȫ���жϿ�
	EX0=1;         //�ⲿ�ж�0��
	IT0=1;         //��ƽ����
	while(1)
	{
		for(x=2000;x>0;x--)
		{
			delay_ms(100);
			if(INT0==0)
			{
			delay_ms(10);
			if(INT0==0)
			{
				while(INT0==0)
				{
				num++;
				delay_ms(100);
				if(num>35)
				{
				break;
				}
				
			}
				delay_ms(10);
			//	while(!key6);
			}
			
		}
			if(num<30 && num>0) 
					{
						SWITCH=~SWITCH;
						num=0;
					}
				if(num>=30) 
						{
							PVOL=~PVOL;
							num=0;
						}
			while(!INT0);			
		}
		PVOL=1;
		EA=1;
	//	_nop_();
		PCON=0x02;
	}
}

void Key_INT(void) interrupt 0
{	
//	_nop_();
	 EA=0;
	FLAG = INT0; 
	
	//PCON=0x02;
}
