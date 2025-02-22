#include "Config.h"
#include "main.h"
#include "stdio.h"
#include "tim.h"

#include "MotorControl.h"

void Servo_Init(TIM_HandleTypeDef *htim, uint32_t channel){
	HAL_TIM_PWM_Start(htim, channel);
	HAL_TIMEx_PWMN_Start(htim, channel);
}

void Servo_Angle(int8_t angle){
	uint16_t value;

	value = (float)(angle + 90) / 180 * Servo_MAXus + Servo_MINus;
	TIM1->CCR1 = value;
}

void Motor_Power(int16_t power){
	if(power > 0){

	}
	else if(power < 0){

	}
	else{

	}
}
