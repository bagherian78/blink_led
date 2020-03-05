#include "stm32f4xx.h"                  // Device header
int main(){
	RCC->AHB1ENR|=0x08;
	GPIOD->MODER|=1<<24|1<<26|1<<28|1<<30;
	while(1){
		for(int i = 0;i<=220000;i++){
			GPIOD->ODR=1<<12|1<<13|1<<14|1<<15;
		}
		GPIOD->ODR=0<<12|0<<13|0<<14|0<<15;
		for(int i = 0;i<=220000;i++);
	}
}
