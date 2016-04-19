/*
 * main.c
 *
 *  Created on: Jan 31, 2016
 *      Author: 7ossam
 */

/*******************************************/
/******************test*********************/
/*******************************************/
#include "Types.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "delay_interface.h"

//u8 PORT0 = 0;
//u8 PORT1 = 0;
//u8 PORT2 = 0;
//u8 PORT3 = 0;
//u8 DDR0 = 0b10101010;
//u8 DDR1 = 0b11111111;
//u8 DDR2 = 0b00000000;
//u8 DDR3 = 0b01010101;
//u8 PIN0 = 0b10101010;
//u8 PIN1 = 0b11111111;
//u8 PIN2 = 0b00000000;
//u8 PIN3 = 0b01010101;

int main(void) {
		u8 temp,temp1;
		u8 val;
		DIO_voidInit();
		for (u8 i = 0; i < 4; i++) {
			val = DIO_u8WritePortDir(i, 255);
			//DIO_u8WritePinVal(i,1);

//			printf("state = %d val = %d \n", val, temp);
		}
		val = DIO_u8WritePinDir(3,DIO_u8LOW);
		DIO_u8ReadPortDir(3, &temp1);
		DIO_u8WritePinVal(17,DIO_u8HIGH);
		DIO_u8WritePinVal(18,DIO_u8HIGH);
		DIO_u8WritePinVal(19,DIO_u8HIGH);
		DIO_u8ReadPortVal(2,&temp);
		DIO_u8WritePortVal(0,temp1);
		while(1)
		{
			DIO_u8WritePinVal(20,DIO_u8HIGH);
			delay_voidDelay(250);
			DIO_u8WritePinVal(20,DIO_u8LOW);
			delay_voidDelay(250);
		}
//		printf("DDRA= %d \n", DDR0);
//		printf("DDRB= %d \n", DDR1);
//		printf("DDRC= %d \n", DDR2);
//		printf("DDRD= %d \n", DDR3);
		return 0;
}

