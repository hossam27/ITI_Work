/*
 * delay.c
 *
 *  Created on: Feb 1, 2016
 *      Author: 7ossam
 */

#include "Conc.h"
#include "Types.h"
#include "util.h"
#include "delay_interface.h"
#include "delay_config.h"
#include "delay_private.h"

extern void delay_voidDelay(u8 Copy_u8DelayVal)
{
	u32 Local_u32LoopItelation;
	for(Local_u32LoopItelation = ((Copy_u8DelayVal*DELAY_u32SYSCLOCK)/(Local_u32MILLISEC))
			; Local_u32LoopItelation>u8ZERO ; Local_u32LoopItelation--)
	{
		__asm__("NOP");
	}
}
