#ifndef __delay_h__
#define __delay_h__
//#define _nop_() __asm NOP __endasm
void delay_ms(unsigned char i)
{
    unsigned char c,b,a;
    for(c=i;c>0;c--)
        for(b=142;b>0;b--)
            for(a=2;a>0;a--);
    
}

void delay_us(unsigned char i)
{
    unsigned char x;
    for(x=i;x>0;x--)
    _nop_();
   
}

void delay_s(unsigned char x)
{
    unsigned char c,b,a,p;
    for(p=x;p>0;p--)
        for(c=167;c>0;c--)
            for(b=171;b>0;b--)
                for(a=16;a>0;a--);

}
#endif
