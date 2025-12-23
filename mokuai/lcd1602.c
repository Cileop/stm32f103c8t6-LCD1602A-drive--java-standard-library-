#include "stm32f10x.h"                  // Device header

///* ¦Ì¨¨¡äy¨°o?¡ì¡Á?¡À?o? */
//void LCD1602_Wait_Ready(void)
//{
//	u8 sta;
//	
//	DATAOUT(0xff);
//	LCD_RS_Clr();
//	LCD_RW_Set();
//	do
//	{
//		LCD_EN_Set();
//		delay_ms(5);	//?¨®¨º¡À5ms¡ê?¡¤?3¡ê??¨°a
// 		sta = GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_7);//?¨¢¨¨?¡Á¡ä¨¬?¡Á?
//		LCD_EN_Clr();
//	}while(sta & 0x80);//bit7¦Ì¨¨¨®¨²1¡À¨ª¨º?¨°o?¡ì?y?|¡ê????¡ä?¨¬2a?¡À¦Ì???¦Ì¨¨¨®¨²0?a?1
//}


//void LCD1602_Write_Cmd(u8 cmd)
//{
//	LCD1602_Wait_Ready();
//	LCD_RS_Clr();
//	LCD_RW_Clr();
//	DATAOUT(cmd);
//	LCD_EN_Set();
//	LCD_EN_Clr();
//}

///* ?¨°LCD1602¨°o?¡ìD¡ä¨¨?¨°?¡Á??¨²¨ºy?Y¡ê?dat-¡äyD¡ä¨¨?¨ºy?Y?¦Ì */
//void LCD1602_Write_Dat(u8 dat)
//{
//	LCD1602_Wait_Ready();
//	LCD_RS_Set();
//	LCD_RW_Clr();
//	DATAOUT(dat);
//	LCD_EN_Set();
//	LCD_EN_Clr();
//}

///* ???¨¢ */
//void LCD1602_ClearScreen(void)
//{
//	LCD1602_Write_Cmd(0x01);
//	
//}

///* ¨¦¨¨????¨º?RAM?e¨º?¦Ì??¡¤¡ê?¨°¨¤?¡ä1a¡À¨º????¡ê?(x,y)-??¨®|?¨¢??¨¦?¦Ì?¡Á?¡¤?¡Á?¡À¨º */
//void LCD1602_Set_Cursor(u8 x, u8 y)
//{
//	u8 addr;
//	
//	if (y == 0)
//		addr = 0x00 + x;
//	else
//		addr = 0x40 + x;
//	LCD1602_Write_Cmd(addr | 0x80);
//}

///* ?¨²¨°o?¡ì¨¦???¨º?¡Á?¡¤?¡ä?¡ê?(x,y)-??¨®|?¨¢??¨¦?¦Ì??e¨º?¡Á?¡À¨º¡ê?str-¡Á?¡¤?¡ä????? */
//void LCD1602_Show_Str(u8 x, u8 y, u8 *str)
//{
//	LCD1602_Set_Cursor(x, y);
//	while(*str != '\0')
//	{
//		LCD1602_Write_Dat(*str++);
//	}
//}

///* 3?¨º??¡¥1602¨°o?¡ì */
//void LCD1602_Init(void)
//{
//	LCDGPIO_Init();
//	LCD1602_Write_Cmd(0x38);	//16*2??¨º?¡ê?5*7¦Ì??¨®¡ê?8??¨ºy?Y?¨²
//	LCD1602_Write_Cmd(0x0c);	//?a??¨º?¡ê?1a¡À¨º1?¡À?
//	LCD1602_Write_Cmd(0x06);	//??¡Á?2??¡¥¡ê?¦Ì??¡¤¡Á??¡¥+1
//	LCD1602_Write_Cmd(0x01);	//???¨¢
//	
//}

