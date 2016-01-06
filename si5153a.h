/*
 * si5153a.h
 *
 *  Created on: Nov 13, 2015
 *      Author: design
 */

#ifndef SI5153A_H_
#define SI5153A_H_
#include <stm32f4xx.h>

#define Si5153A_I2C_SPEED            100000

#define SI5351_ADDRESS            (0x60<<1)
#define SI5351_READBIT            (0x01)

#define Si5153A_I2C                  I2C3
#define Si5153A_CLK                  RCC_APB1Periph_I2C3
#define Si5153A_GPIO_CLOCK           (RCC_AHB1Periph_GPIOC | RCC_AHB1Periph_GPIOA)
#define Si5153A_GPIO_AF              GPIO_AF_I2C3
#define Si5153A_SCL_GPIO             GPIOA
#define Si5153A_SCL_PIN              GPIO_Pin_8
#define Si5153A_SCL_PINSRC           GPIO_PinSource8
#define Si5153A_SDA_GPIO             GPIOC
#define Si5153A_SDA_PIN              GPIO_Pin_9
#define Si5153A_SDA_PINSRC           GPIO_PinSource9

#define Si5153A_FLAG_TIMEOUT         ((uint32_t)0x1000)
#define Si5153A_LONG_TIMEOUT         ((uint32_t)(300 * Si5153A_FLAG_TIMEOUT))

#define Si5153a_ERROR_NONE					0
#define Si5153a_ERROR						1
#define Si5153a_ERROR_DEVICENOTINITIALISED	2
#define Si5153a_ERROR_INVALIDPARAMETER		4

enum
{
  SI5351_REGISTER_0_DEVICE_STATUS                       = 0,
  SI5351_REGISTER_1_INTERRUPT_STATUS_STICKY             = 1,
  SI5351_REGISTER_2_INTERRUPT_STATUS_MASK               = 2,
  SI5351_REGISTER_3_OUTPUT_ENABLE_CONTROL               = 3,
  SI5351_REGISTER_9_OEB_PIN_ENABLE_CONTROL              = 9,
  SI5351_REGISTER_15_PLL_INPUT_SOURCE                   = 15,
  SI5351_REGISTER_16_CLK0_CONTROL                       = 16,
  SI5351_REGISTER_17_CLK1_CONTROL                       = 17,
  SI5351_REGISTER_18_CLK2_CONTROL                       = 18,
  SI5351_REGISTER_19_CLK3_CONTROL                       = 19,
  SI5351_REGISTER_20_CLK4_CONTROL                       = 20,
  SI5351_REGISTER_21_CLK5_CONTROL                       = 21,
  SI5351_REGISTER_22_CLK6_CONTROL                       = 22,
  SI5351_REGISTER_23_CLK7_CONTROL                       = 23,
  SI5351_REGISTER_24_CLK3_0_DISABLE_STATE               = 24,
  SI5351_REGISTER_25_CLK7_4_DISABLE_STATE               = 25,
  SI5351_REGISTER_42_MULTISYNTH0_PARAMETERS_1           = 42,
  SI5351_REGISTER_43_MULTISYNTH0_PARAMETERS_2           = 43,
  SI5351_REGISTER_44_MULTISYNTH0_PARAMETERS_3           = 44,
  SI5351_REGISTER_45_MULTISYNTH0_PARAMETERS_4           = 45,
  SI5351_REGISTER_46_MULTISYNTH0_PARAMETERS_5           = 46,
  SI5351_REGISTER_47_MULTISYNTH0_PARAMETERS_6           = 47,
  SI5351_REGISTER_48_MULTISYNTH0_PARAMETERS_7           = 48,
  SI5351_REGISTER_49_MULTISYNTH0_PARAMETERS_8           = 49,
  SI5351_REGISTER_50_MULTISYNTH1_PARAMETERS_1           = 50,
  SI5351_REGISTER_51_MULTISYNTH1_PARAMETERS_2           = 51,
  SI5351_REGISTER_52_MULTISYNTH1_PARAMETERS_3           = 52,
  SI5351_REGISTER_53_MULTISYNTH1_PARAMETERS_4           = 53,
  SI5351_REGISTER_54_MULTISYNTH1_PARAMETERS_5           = 54,
  SI5351_REGISTER_55_MULTISYNTH1_PARAMETERS_6           = 55,
  SI5351_REGISTER_56_MULTISYNTH1_PARAMETERS_7           = 56,
  SI5351_REGISTER_57_MULTISYNTH1_PARAMETERS_8           = 57,
  SI5351_REGISTER_58_MULTISYNTH2_PARAMETERS_1           = 58,
  SI5351_REGISTER_59_MULTISYNTH2_PARAMETERS_2           = 59,
  SI5351_REGISTER_60_MULTISYNTH2_PARAMETERS_3           = 60,
  SI5351_REGISTER_61_MULTISYNTH2_PARAMETERS_4           = 61,
  SI5351_REGISTER_62_MULTISYNTH2_PARAMETERS_5           = 62,
  SI5351_REGISTER_63_MULTISYNTH2_PARAMETERS_6           = 63,
  SI5351_REGISTER_64_MULTISYNTH2_PARAMETERS_7           = 64,
  SI5351_REGISTER_65_MULTISYNTH2_PARAMETERS_8           = 65,
  SI5351_REGISTER_66_MULTISYNTH3_PARAMETERS_1           = 66,
  SI5351_REGISTER_67_MULTISYNTH3_PARAMETERS_2           = 67,
  SI5351_REGISTER_68_MULTISYNTH3_PARAMETERS_3           = 68,
  SI5351_REGISTER_69_MULTISYNTH3_PARAMETERS_4           = 69,
  SI5351_REGISTER_70_MULTISYNTH3_PARAMETERS_5           = 70,
  SI5351_REGISTER_71_MULTISYNTH3_PARAMETERS_6           = 71,
  SI5351_REGISTER_72_MULTISYNTH3_PARAMETERS_7           = 72,
  SI5351_REGISTER_73_MULTISYNTH3_PARAMETERS_8           = 73,
  SI5351_REGISTER_74_MULTISYNTH4_PARAMETERS_1           = 74,
  SI5351_REGISTER_75_MULTISYNTH4_PARAMETERS_2           = 75,
  SI5351_REGISTER_76_MULTISYNTH4_PARAMETERS_3           = 76,
  SI5351_REGISTER_77_MULTISYNTH4_PARAMETERS_4           = 77,
  SI5351_REGISTER_78_MULTISYNTH4_PARAMETERS_5           = 78,
  SI5351_REGISTER_79_MULTISYNTH4_PARAMETERS_6           = 79,
  SI5351_REGISTER_80_MULTISYNTH4_PARAMETERS_7           = 80,
  SI5351_REGISTER_81_MULTISYNTH4_PARAMETERS_8           = 81,
  SI5351_REGISTER_82_MULTISYNTH5_PARAMETERS_1           = 82,
  SI5351_REGISTER_83_MULTISYNTH5_PARAMETERS_2           = 83,
  SI5351_REGISTER_84_MULTISYNTH5_PARAMETERS_3           = 84,
  SI5351_REGISTER_85_MULTISYNTH5_PARAMETERS_4           = 85,
  SI5351_REGISTER_86_MULTISYNTH5_PARAMETERS_5           = 86,
  SI5351_REGISTER_87_MULTISYNTH5_PARAMETERS_6           = 87,
  SI5351_REGISTER_88_MULTISYNTH5_PARAMETERS_7           = 88,
  SI5351_REGISTER_89_MULTISYNTH5_PARAMETERS_8           = 89,
  SI5351_REGISTER_90_MULTISYNTH6_PARAMETERS             = 90,
  SI5351_REGISTER_91_MULTISYNTH7_PARAMETERS             = 91,
  SI5351_REGISTER_092_CLOCK_6_7_OUTPUT_DIVIDER          = 92,
  SI5351_REGISTER_165_CLK0_INITIAL_PHASE_OFFSET         = 165,
  SI5351_REGISTER_166_CLK1_INITIAL_PHASE_OFFSET         = 166,
  SI5351_REGISTER_167_CLK2_INITIAL_PHASE_OFFSET         = 167,
  SI5351_REGISTER_168_CLK3_INITIAL_PHASE_OFFSET         = 168,
  SI5351_REGISTER_169_CLK4_INITIAL_PHASE_OFFSET         = 169,
  SI5351_REGISTER_170_CLK5_INITIAL_PHASE_OFFSET         = 170,
  SI5351_REGISTER_177_PLL_RESET                         = 177,
  SI5351_REGISTER_183_CRYSTAL_INTERNAL_LOAD_CAPACITANCE	= 183
};

typedef enum
{
  SI5351_PLL_A = 0,
  SI5351_PLL_B,
} si5351PLL_t;

typedef enum
{
  SI5351_CRYSTAL_LOAD_6PF  = (1<<6),
  SI5351_CRYSTAL_LOAD_8PF  = (2<<6),
  SI5351_CRYSTAL_LOAD_10PF = (3<<6)
} si5351CrystalLoad_t;

typedef enum
{
  SI5351_CRYSTAL_FREQ_25MHZ = (25000000),
  SI5351_CRYSTAL_FREQ_27MHZ = (27000000)
} si5351CrystalFreq_t;

typedef enum
{
  SI5351_MULTISYNTH_DIV_4  = 4,
  SI5351_MULTISYNTH_DIV_6  = 6,
  SI5351_MULTISYNTH_DIV_8  = 8
} si5351MultisynthDiv_t;

typedef enum
{
  SI5351_R_DIV_1   = 0,
  SI5351_R_DIV_2   = 1,
  SI5351_R_DIV_4   = 2,
  SI5351_R_DIV_8   = 3,
  SI5351_R_DIV_16  = 4,
  SI5351_R_DIV_32  = 5,
  SI5351_R_DIV_64  = 6,
  SI5351_R_DIV_128 = 7,
} si5351RDiv_t;

typedef struct
{
  uint8_t                initialised;
  si5351CrystalFreq_t crystalFreq;
  si5351CrystalLoad_t crystalLoad;
  uint32_t            crystalPPM;
  uint8_t                plla_configured;
  uint32_t            plla_freq;
  uint8_t                pllb_configured;
  uint32_t            pllb_freq;
} si5351Config_t;

uint32_t setupPLLInt(si5351PLL_t pll, uint8_t mult);
uint32_t setupPLL(si5351PLL_t pll, uint8_t mult, uint32_t num, uint32_t denom);
uint32_t setupMultisynthInt(uint8_t output, si5351PLL_t pllSource, si5351MultisynthDiv_t div);
uint32_t setupRdiv(uint8_t output, si5351RDiv_t div);
uint32_t setupMultisynth(uint8_t output, si5351PLL_t pllSource, uint32_t div, uint32_t num, uint32_t denom);
uint32_t Si5351a_enableOutputs(uint8_t enabled);

void init_VCXO(void);
void init_Si5351a_registers(void);
void init_Si5351aConfig(void);

uint32_t I2C_TIMEOUT_UserCallback(void);
uint32_t I2C_WriteRegister(uint8_t RegisterAddr, uint8_t RegisterValue);
void init_Si5153a_i2c(void);
void init_Si5153a_gpio(void);



#endif /* SI5153A_H_ */