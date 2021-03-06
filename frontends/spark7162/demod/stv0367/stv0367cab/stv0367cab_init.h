/*****************************************************************************/
/* COPYRIGHT (C) 2009 STMicroelectronics - All Rights Reserved               */
/* ST makes no warranty express or implied including but not limited to,     */
/* any warranty of                                                           */
/*                                                                           */
/*   (i)  merchantability or fitness for a particular purpose and/or         */
/*   (ii) requirements, for a particular purpose in relation to the LICENSED */
/*        MATERIALS, which is provided "AS IS", WITH ALL FAULTS. ST does not */
/*        represent or warrant that the LICENSED MATERIALS provided here     */
/*        under is free of infringement of any third party patents,          */
/*        copyrights,trade secrets or other intellectual property rights.    */
/*        ALL WARRANTIES, CONDITIONS OR OTHER TERMS IMPLIED BY LAW ARE       */
/*        EXCLUDED TO THE FULLEST EXTENT PERMITTED BY LAW                    */
/*                                                                           */
/*****************************************************************************/
/**
 @File stv0367qam_init.h
 @brief

*/
#ifndef _STV0367QAM_INIT_H
#define _STV0367QAM_INIT_H

/* =======================================================================
-- Registers Declaration
-- -------------------------
-- Each register (R367CAB_XXXXX) is defined by its address (2 bytes).
--
-- Each field (F367CAB_XXXXX)is defined as follows:
-- [register address -- 2bytes][field sign -- 1byte][field mask -- 1byte]
=========================================================================== */
/* PLLMDIV */
/* ID */
#define R367CAB_ID                     0xF000
#define F367CAB_IDENTIFICATIONREGISTER 0xF00000FF

/* I2CRPT */
#define R367CAB_I2CRPT                 0xF001
#define F367CAB_I2CT_ON                0xF0010080
#define F367CAB_ENARPT_LEVEL           0xF0010070
#define F367CAB_SCLT_DELAY             0xF0010008
#define F367CAB_SCLT_NOD               0xF0010004
#define F367CAB_STOP_ENABLE            0xF0010002
#define F367CAB_SDAT_NOD               0xF0010001

/* TOPCTRL */
#define R367CAB_TOPCTRL                0xF002
#define F367CAB_STDBY                  0xF0020080
#define F367CAB_STDBY_CORE             0xF0020020
#define F367CAB_QAM_COFDM              0xF0020010
#define F367CAB_TS_DIS                 0xF0020008
#define F367CAB_DIR_CLK_216            0xF0020004

/* IOCFG0 */
#define R367CAB_IOCFG0                 0xF003
#define F367CAB_OP0_SD                 0xF0030080
#define F367CAB_OP0_VAL                0xF0030040
#define F367CAB_OP0_OD                 0xF0030020
#define F367CAB_OP0_INV                0xF0030010
#define F367CAB_OP0_DACVALUE_HI        0xF003000F

/* DAC0R */
#define R367CAB_DAC0R                  0xF004
#define F367CAB_OP0_DACVALUE_LO        0xF00400FF

/* IOCFG1 */
#define R367CAB_IOCFG1                 0xF005
#define F367CAB_IP0                    0xF0050040
#define F367CAB_OP1_OD                 0xF0050020
#define F367CAB_OP1_INV                0xF0050010
#define F367CAB_OP1_DACVALUE_HI        0xF005000F

/* DAC1R */
#define R367CAB_DAC1R                  0xF006
#define F367CAB_OP1_DACVALUE_LO        0xF00600FF

/* IOCFG2 */
#define R367CAB_IOCFG2                 0xF007
#define F367CAB_OP2_LOCK_CONF          0xF00700E0
#define F367CAB_OP2_OD                 0xF0070010
#define F367CAB_OP2_VAL                0xF0070008
#define F367CAB_OP1_LOCK_CONF          0xF0070007

/* SDFR */
#define R367CAB_SDFR                   0xF008
#define F367CAB_OP0_FREQ               0xF00800F0
#define F367CAB_OP1_FREQ               0xF008000F

/* AUX_CLK */
#define R367CAB_AUX_CLK                0xF00A
#define F367CAB_AUXFEC_CTL             0xF00A00C0
#define F367CAB_DIS_CKX4               0xF00A0020
#define F367CAB_CKSEL                  0xF00A0018
#define F367CAB_CKDIV_PROG             0xF00A0006
#define F367CAB_AUXCLK_ENA             0xF00A0001

/* FREESYS1 */
#define R367CAB_FREESYS1               0xF00B
#define F367CAB_FREESYS_1              0xF00B00FF

/* FREESYS2 */
#define R367CAB_FREESYS2               0xF00C
#define F367CAB_FREESYS_2              0xF00C00FF

/* FREESYS3 */
#define R367CAB_FREESYS3               0xF00D
#define F367CAB_FREESYS_3              0xF00D00FF

/* GPIO_CFG */
#define R367CAB_GPIO_CFG               0xF00E
#define F367CAB_GPIO7_OD               0xF00E0080
#define F367CAB_GPIO7_CFG              0xF00E0040
#define F367CAB_GPIO6_OD               0xF00E0020
#define F367CAB_GPIO6_CFG              0xF00E0010
#define F367CAB_GPIO5_OD               0xF00E0008
#define F367CAB_GPIO5_CFG              0xF00E0004
#define F367CAB_GPIO4_OD               0xF00E0002
#define F367CAB_GPIO4_CFG              0xF00E0001

/* GPIO_CMD */
#define R367CAB_GPIO_CMD               0xF00F
#define F367CAB_GPIO7_VAL              0xF00F0008
#define F367CAB_GPIO6_VAL              0xF00F0004
#define F367CAB_GPIO5_VAL              0xF00F0002
#define F367CAB_GPIO4_VAL              0xF00F0001

/* TSTRES */
#define R367CAB_TSTRES                 0xF0C0
#define F367CAB_FRES_DISPLAY           0xF0C00080
#define F367CAB_FRES_FIFO_AD           0xF0C00020
#define F367CAB_FRESRS                 0xF0C00010
#define F367CAB_FRESACS                0xF0C00008
#define F367CAB_FRESFEC                0xF0C00004
#define F367CAB_FRES_PRIF              0xF0C00002
#define F367CAB_FRESCORE               0xF0C00001

/* ANACTRL */
#define R367CAB_ANACTRL                0xF0C1
#define F367CAB_BYPASS_XTAL            0xF0C10040
#define F367CAB_BYPASS_PLLXN           0xF0C1000C
#define F367CAB_DIS_PAD_OSC            0xF0C10002
#define F367CAB_STDBY_PLLXN            0xF0C10001

/* TSTBUS */
#define R367CAB_TSTBUS                 0xF0C2
#define F367CAB_TS_BYTE_CLK_INV        0xF0C20080
#define F367CAB_CFG_IP                 0xF0C20070
#define F367CAB_CFG_TST                0xF0C2000F

/* RF_AGC1 */
#define R367CAB_RF_AGC1                0xF0D4
#define F367CAB_RF_AGC1_LEVEL_HI       0xF0D400FF

/* RF_AGC2 */
#define R367CAB_RF_AGC2                0xF0D5
#define F367CAB_REF_ADGP               0xF0D50080
#define F367CAB_STDBY_ADCGP            0xF0D50020
#define F367CAB_RF_AGC1_LEVEL_LO       0xF0D50003

/* ANADIGCTRL */
#define R367CAB_ANADIGCTRL             0xF0D7
#define F367CAB_SEL_CLKDEM             0xF0D70020
#define F367CAB_EN_BUFFER_Q            0xF0D70010
#define F367CAB_EN_BUFFER_I            0xF0D70008
#define F367CAB_ADC_RIS_EGDE           0xF0D70004
#define F367CAB_SGN_ADC                0xF0D70002
#define F367CAB_SEL_AD12_SYNC          0xF0D70001

/* PLLMDIV */
#define R367CAB_PLLMDIV                0xF0D8
#define F367CAB_PLL_MDIV               0xF0D800FF

/* PLLNDIV */
#define R367CAB_PLLNDIV                0xF0D9
#define F367CAB_PLL_NDIV               0xF0D900FF

/* PLLSETUP */
#define R367CAB_PLLSETUP               0xF0DA
#define F367CAB_PLL_PDIV               0xF0DA0070
#define F367CAB_PLL_KDIV               0xF0DA000F

/* DUAL_AD12 */
#define R367CAB_DUAL_AD12              0xF0DB
#define F367CAB_FS20M                  0xF0DB0020
#define F367CAB_FS50M                  0xF0DB0010
#define F367CAB_INMODE0                0xF0DB0008
#define F367CAB_POFFQ                  0xF0DB0004
#define F367CAB_POFFI                  0xF0DB0002
#define F367CAB_INMODE1                0xF0DB0001

/* TSTBIST */
#define R367CAB_TSTBIST                0xF0DC
#define F367CAB_TST_BYP_CLK            0xF0DC0080
#define F367CAB_TST_GCLKENA_STD        0xF0DC0040
#define F367CAB_TST_GCLKENA            0xF0DC0020
#define F367CAB_TST_MEMBIST            0xF0DC001F

/* CTRL_1 */
#define R367CAB_CTRL_1                 0xF402
#define F367CAB_SOFT_RST               0xF4020080
#define F367CAB_EQU_RST                0xF4020008
#define F367CAB_CRL_RST                0xF4020004
#define F367CAB_TRL_RST                0xF4020002
#define F367CAB_AGC_RST                0xF4020001

/* CTRL_2 */
#define R367CAB_CTRL_2                 0xF403
#define F367CAB_DEINT_RST              0xF4030008
#define F367CAB_RS_RST                 0xF4030004

/* IT_STATUS1 */
#define R367CAB_IT_STATUS1             0xF408
#define F367CAB_SWEEP_OUT              0xF4080080
#define F367CAB_FSM_CRL                0xF4080040
#define F367CAB_CRL_LOCK               0xF4080020
#define F367CAB_MFSM                   0xF4080010
#define F367CAB_TRL_LOCK               0xF4080008
#define F367CAB_TRL_AGC_LIMIT          0xF4080004
#define F367CAB_ADJ_AGC_LOCK           0xF4080002
#define F367CAB_AGC_QAM_LOCK           0xF4080001

/* IT_STATUS2 */
#define R367CAB_IT_STATUS2             0xF409
#define F367CAB_TSMF_CNT               0xF4090080
#define F367CAB_TSMF_EOF               0xF4090040
#define F367CAB_TSMF_RDY               0xF4090020
#define F367CAB_FEC_NOCORR             0xF4090010
#define F367CAB_SYNCSTATE              0xF4090008
#define F367CAB_DEINT_LOCK             0xF4090004
#define F367CAB_FADDING_FRZ            0xF4090002
#define F367CAB_TAPMON_ALARM           0xF4090001

/* IT_EN1 */
#define R367CAB_IT_EN1                 0xF40A
#define F367CAB_SWEEP_OUTE             0xF40A0080
#define F367CAB_FSM_CRLE               0xF40A0040
#define F367CAB_CRL_LOCKE              0xF40A0020
#define F367CAB_MFSME                  0xF40A0010
#define F367CAB_TRL_LOCKE              0xF40A0008
#define F367CAB_TRL_AGC_LIMITE         0xF40A0004
#define F367CAB_ADJ_AGC_LOCKE          0xF40A0002
#define F367CAB_AGC_LOCKE              0xF40A0001

/* IT_EN2 */
#define R367CAB_IT_EN2                 0xF40B
#define F367CAB_TSMF_CNTE              0xF40B0080
#define F367CAB_TSMF_EOFE              0xF40B0040
#define F367CAB_TSMF_RDYE              0xF40B0020
#define F367CAB_FEC_NOCORRE            0xF40B0010
#define F367CAB_SYNCSTATEE             0xF40B0008
#define F367CAB_DEINT_LOCKE            0xF40B0004
#define F367CAB_FADDING_FRZE           0xF40B0002
#define F367CAB_TAPMON_ALARME          0xF40B0001

/* CTRL_STATUS */
#define R367CAB_CTRL_STATUS            0xF40C
#define F367CAB_QAMFEC_LOCK            0xF40C0004
#define F367CAB_TSMF_LOCK              0xF40C0002
#define F367CAB_TSMF_ERROR             0xF40C0001

/* TEST_CTL */
#define R367CAB_TEST_CTL               0xF40F
#define F367CAB_TST_BLK_SEL            0xF40F0060
#define F367CAB_TST_BUS_SEL            0xF40F001F

/* AGC_CTL */
#define R367CAB_AGC_CTL                0xF410
#define F367CAB_AGC_LCK_TH             0xF41000F0
#define F367CAB_AGC_ACCUMRSTSEL        0xF4100007

/* AGC_IF_CFG */
#define R367CAB_AGC_IF_CFG             0xF411
#define F367CAB_AGC_IF_BWSEL           0xF41100F0
#define F367CAB_AGC_IF_FREEZE          0xF4110002

/* AGC_RF_CFG */
#define R367CAB_AGC_RF_CFG             0xF412
#define F367CAB_AGC_RF_BWSEL           0xF4120070
#define F367CAB_AGC_RF_FREEZE          0xF4120002

/* AGC_PWM_CFG */
#define R367CAB_AGC_PWM_CFG            0xF413
#define F367CAB_AGC_RF_PWM_TST         0xF4130080
#define F367CAB_AGC_RF_PWM_INV         0xF4130040
#define F367CAB_AGC_IF_PWM_TST         0xF4130008
#define F367CAB_AGC_IF_PWM_INV         0xF4130004
#define F367CAB_AGC_PWM_CLKDIV         0xF4130003

/* AGC_PWR_REF_L */
#define R367CAB_AGC_PWR_REF_L          0xF414
#define F367CAB_AGC_PWRREF_LO          0xF41400FF

/* AGC_PWR_REF_H */
#define R367CAB_AGC_PWR_REF_H          0xF415
#define F367CAB_AGC_PWRREF_HI          0xF4150003

/* AGC_RF_TH_L */
#define R367CAB_AGC_RF_TH_L            0xF416
#define F367CAB_AGC_RF_TH_LO           0xF41600FF

/* AGC_RF_TH_H */
#define R367CAB_AGC_RF_TH_H            0xF417
#define F367CAB_AGC_RF_TH_HI           0xF417000F

/* AGC_IF_LTH_L */
#define R367CAB_AGC_IF_LTH_L           0xF418
#define F367CAB_AGC_IF_THLO_LO         0xF41800FF

/* AGC_IF_LTH_H */
#define R367CAB_AGC_IF_LTH_H           0xF419
#define F367CAB_AGC_IF_THLO_HI         0xF419000F

/* AGC_IF_HTH_L */
#define R367CAB_AGC_IF_HTH_L           0xF41A
#define F367CAB_AGC_IF_THHI_LO         0xF41A00FF

/* AGC_IF_HTH_H */
#define R367CAB_AGC_IF_HTH_H           0xF41B
#define F367CAB_AGC_IF_THHI_HI         0xF41B000F

/* AGC_PWR_RD_L */
#define R367CAB_AGC_PWR_RD_L           0xF41C
#define F367CAB_AGC_PWR_WORD_LO        0xF41C00FF

/* AGC_PWR_RD_M */
#define R367CAB_AGC_PWR_RD_M           0xF41D
#define F367CAB_AGC_PWR_WORD_ME        0xF41D00FF

/* AGC_PWR_RD_H */
#define R367CAB_AGC_PWR_RD_H           0xF41E
#define F367CAB_AGC_PWR_WORD_HI        0xF41E0003

/* AGC_PWM_IFCMD_L */
#define R367CAB_AGC_PWM_IFCMD_L        0xF420
#define F367CAB_AGC_IF_PWMCMD_LO       0xF42000FF

/* AGC_PWM_IFCMD_H */
#define R367CAB_AGC_PWM_IFCMD_H        0xF421
#define F367CAB_AGC_IF_PWMCMD_HI       0xF421000F

/* AGC_PWM_RFCMD_L */
#define R367CAB_AGC_PWM_RFCMD_L        0xF422
#define F367CAB_AGC_RF_PWMCMD_LO       0xF42200FF

/* AGC_PWM_RFCMD_H */
#define R367CAB_AGC_PWM_RFCMD_H        0xF423
#define F367CAB_AGC_RF_PWMCMD_HI       0xF423000F

/* IQDEM_CFG */
#define R367CAB_IQDEM_CFG              0xF424
#define F367CAB_IQDEM_CLK_SEL          0xF4240004
#define F367CAB_IQDEM_INVIQ            0xF4240002
#define F367CAB_IQDEM_A2DTYPE          0xF4240001

/* MIX_NCO_LL */
#define R367CAB_MIX_NCO_LL             0xF425
#define F367CAB_MIX_NCO_INC_LL         0xF42500FF

/* MIX_NCO_HL */
#define R367CAB_MIX_NCO_HL             0xF426
#define F367CAB_MIX_NCO_INC_HL         0xF42600FF

/* MIX_NCO_HH */
#define R367CAB_MIX_NCO_HH             0xF427
#define F367CAB_MIX_NCO_INVCNST        0xF4270080
#define F367CAB_MIX_NCO_INC_HH         0xF427007F

/* SRC_NCO_LL */
#define R367CAB_SRC_NCO_LL             0xF428
#define F367CAB_SRC_NCO_INC_LL         0xF42800FF

/* SRC_NCO_LH */
#define R367CAB_SRC_NCO_LH             0xF429
#define F367CAB_SRC_NCO_INC_LH         0xF42900FF

/* SRC_NCO_HL */
#define R367CAB_SRC_NCO_HL             0xF42A
#define F367CAB_SRC_NCO_INC_HL         0xF42A00FF

/* SRC_NCO_HH */
#define R367CAB_SRC_NCO_HH             0xF42B
#define F367CAB_SRC_NCO_INC_HH         0xF42B007F

/* IQDEM_GAIN_SRC_L */
#define R367CAB_IQDEM_GAIN_SRC_L       0xF42C
#define F367CAB_GAIN_SRC_LO            0xF42C00FF

/* IQDEM_GAIN_SRC_H */
#define R367CAB_IQDEM_GAIN_SRC_H       0xF42D
#define F367CAB_GAIN_SRC_HI            0xF42D0003

/* IQDEM_DCRM_CFG_LL */
#define R367CAB_IQDEM_DCRM_CFG_LL      0xF430
#define F367CAB_DCRM0_DCIN_L           0xF43000FF

/* IQDEM_DCRM_CFG_LH */
#define R367CAB_IQDEM_DCRM_CFG_LH      0xF431
#define F367CAB_DCRM1_I_DCIN_L         0xF43100FC
#define F367CAB_DCRM0_DCIN_H           0xF4310003

/* IQDEM_DCRM_CFG_HL */
#define R367CAB_IQDEM_DCRM_CFG_HL      0xF432
#define F367CAB_DCRM1_Q_DCIN_L         0xF43200F0
#define F367CAB_DCRM1_I_DCIN_H         0xF432000F

/* IQDEM_DCRM_CFG_HH */
#define R367CAB_IQDEM_DCRM_CFG_HH      0xF433
#define F367CAB_DCRM1_FRZ              0xF4330080
#define F367CAB_DCRM0_FRZ              0xF4330040
#define F367CAB_DCRM1_Q_DCIN_H         0xF433003F

/* IQDEM_ADJ_COEFF0 */
#define R367CAB_IQDEM_ADJ_COEFF0       0xF434
#define F367CAB_ADJIIR_COEFF10_L       0xF43400FF

/* IQDEM_ADJ_COEFF1 */
#define R367CAB_IQDEM_ADJ_COEFF1       0xF435
#define F367CAB_ADJIIR_COEFF11_L       0xF43500FC
#define F367CAB_ADJIIR_COEFF10_H       0xF4350003

/* IQDEM_ADJ_COEFF2 */
#define R367CAB_IQDEM_ADJ_COEFF2       0xF436
#define F367CAB_ADJIIR_COEFF12_L       0xF43600F0
#define F367CAB_ADJIIR_COEFF11_H       0xF436000F

/* IQDEM_ADJ_COEFF3 */
#define R367CAB_IQDEM_ADJ_COEFF3       0xF437
#define F367CAB_ADJIIR_COEFF20_L       0xF43700C0
#define F367CAB_ADJIIR_COEFF12_H       0xF437003F

/* IQDEM_ADJ_COEFF4 */
#define R367CAB_IQDEM_ADJ_COEFF4       0xF438
#define F367CAB_ADJIIR_COEFF20_H       0xF43800FF

/* IQDEM_ADJ_COEFF5 */
#define R367CAB_IQDEM_ADJ_COEFF5       0xF439
#define F367CAB_ADJIIR_COEFF21_L       0xF43900FF

/* IQDEM_ADJ_COEFF6 */
#define R367CAB_IQDEM_ADJ_COEFF6       0xF43A
#define F367CAB_ADJIIR_COEFF22_L       0xF43A00FC
#define F367CAB_ADJIIR_COEFF21_H       0xF43A0003

/* IQDEM_ADJ_COEFF7 */
#define R367CAB_IQDEM_ADJ_COEFF7       0xF43B
#define F367CAB_ADJIIR_COEFF22_H       0xF43B000F

/* IQDEM_ADJ_EN */
#define R367CAB_IQDEM_ADJ_EN           0xF43C
#define F367CAB_ALLPASSFILT_EN         0xF43C0008
#define F367CAB_ADJ_AGC_EN             0xF43C0004
#define F367CAB_ADJ_COEFF_FRZ          0xF43C0002
#define F367CAB_ADJ_EN                 0xF43C0001

/* IQDEM_ADJ_AGC_REF */
#define R367CAB_IQDEM_ADJ_AGC_REF      0xF43D
#define F367CAB_ADJ_AGC_REF            0xF43D00FF

/* ALLPASSFILT1 */
#define R367CAB_ALLPASSFILT1           0xF440
#define F367CAB_ALLPASSFILT_COEFF1_LO  0xF44000FF

/* ALLPASSFILT2 */
#define R367CAB_ALLPASSFILT2           0xF441
#define F367CAB_ALLPASSFILT_COEFF1_ME  0xF44100FF

/* ALLPASSFILT3 */
#define R367CAB_ALLPASSFILT3           0xF442
#define F367CAB_ALLPASSFILT_COEFF2_LO  0xF44200C0
#define F367CAB_ALLPASSFILT_COEFF1_HI  0xF442003F

/* ALLPASSFILT4 */
#define R367CAB_ALLPASSFILT4           0xF443
#define F367CAB_ALLPASSFILT_COEFF2_MEL 0xF44300FF

/* ALLPASSFILT5 */
#define R367CAB_ALLPASSFILT5           0xF444
#define F367CAB_ALLPASSFILT_COEFF2_MEH 0xF44400FF

/* ALLPASSFILT6 */
#define R367CAB_ALLPASSFILT6           0xF445
#define F367CAB_ALLPASSFILT_COEFF3_LO  0xF44500F0
#define F367CAB_ALLPASSFILT_COEFF2_HI  0xF445000F

/* ALLPASSFILT7 */
#define R367CAB_ALLPASSFILT7           0xF446
#define F367CAB_ALLPASSFILT_COEFF3_MEL 0xF44600FF

/* ALLPASSFILT8 */
#define R367CAB_ALLPASSFILT8           0xF447
#define F367CAB_ALLPASSFILT_COEFF3_MEH 0xF44700FF

/* ALLPASSFILT9 */
#define R367CAB_ALLPASSFILT9           0xF448
#define F367CAB_ALLPASSFILT_COEFF4_LO  0xF44800FC
#define F367CAB_ALLPASSFILT_COEFF3_HI  0xF4480003

/* ALLPASSFILT10 */
#define R367CAB_ALLPASSFILT10          0xF449
#define F367CAB_ALLPASSFILT_COEFF4_ME  0xF44900FF

/* ALLPASSFILT11 */
#define R367CAB_ALLPASSFILT11          0xF44A
#define F367CAB_ALLPASSFILT_COEFF4_HI  0xF44A00FF

/* TRL_AGC_CFG */
#define R367CAB_TRL_AGC_CFG            0xF450
#define F367CAB_TRL_AGC_FREEZE         0xF4500080
#define F367CAB_TRL_AGC_REF            0xF450007F

/* TRL_LPF_CFG */
#define R367CAB_TRL_LPF_CFG            0xF454
#define F367CAB_NYQPOINT_INV           0xF4540040
#define F367CAB_TRL_SHIFT              0xF4540030
#define F367CAB_NYQ_COEFF_SEL          0xF454000C
#define F367CAB_TRL_LPF_FREEZE         0xF4540002
#define F367CAB_TRL_LPF_CRT            0xF4540001

/* TRL_LPF_ACQ_GAIN */
#define R367CAB_TRL_LPF_ACQ_GAIN       0xF455
#define F367CAB_TRL_GDIR_ACQ           0xF4550070
#define F367CAB_TRL_GINT_ACQ           0xF4550007

/* TRL_LPF_TRK_GAIN */
#define R367CAB_TRL_LPF_TRK_GAIN       0xF456
#define F367CAB_TRL_GDIR_TRK           0xF4560070
#define F367CAB_TRL_GINT_TRK           0xF4560007

/* TRL_LPF_OUT_GAIN */
#define R367CAB_TRL_LPF_OUT_GAIN       0xF457
#define F367CAB_TRL_GAIN_OUT           0xF4570007

/* TRL_LOCKDET_LTH */
#define R367CAB_TRL_LOCKDET_LTH        0xF458
#define F367CAB_TRL_LCK_THLO           0xF4580007

/* TRL_LOCKDET_HTH */
#define R367CAB_TRL_LOCKDET_HTH        0xF459
#define F367CAB_TRL_LCK_THHI           0xF45900FF

/* TRL_LOCKDET_TRGVAL */
#define R367CAB_TRL_LOCKDET_TRGVAL     0xF45A
#define F367CAB_TRL_LCK_TRG            0xF45A00FF

/* IQ_QAM */
#define R367CAB_IQ_QAM                 0xF45C
#define F367CAB_IQ_INPUT               0xF45C0008
#define F367CAB_DETECT_MODE            0xF45C0007
/* FSM_STATE */
#define R367CAB_FSM_STATE              0xF460
#define F367CAB_CRL_DFE                0xF4600080
#define F367CAB_DFE_START              0xF4600040
#define F367CAB_CTRLG_START            0xF4600030
#define F367CAB_FSM_FORCESTATE         0xF460000F

/* FSM_CTL */
#define R367CAB_FSM_CTL                0xF461
#define F367CAB_FEC2_EN                0xF4610040
#define F367CAB_SIT_EN                 0xF4610020
#define F367CAB_TRL_AHEAD              0xF4610010
#define F367CAB_TRL2_EN                0xF4610008
#define F367CAB_FSM_EQA1_EN            0xF4610004
#define F367CAB_FSM_BKP_DIS            0xF4610002
#define F367CAB_FSM_FORCE_EN           0xF4610001

/* FSM_STS */
#define R367CAB_FSM_STS                0xF462
#define F367CAB_FSM_STATUS             0xF462000F

/* FSM_SNR0_HTH */
#define R367CAB_FSM_SNR0_HTH           0xF463
#define F367CAB_SNR0_HTH               0xF46300FF

/* FSM_SNR1_HTH */
#define R367CAB_FSM_SNR1_HTH           0xF464
#define F367CAB_SNR1_HTH               0xF46400FF

/* FSM_SNR2_HTH */
#define R367CAB_FSM_SNR2_HTH           0xF465
#define F367CAB_SNR2_HTH               0xF46500FF

/* FSM_SNR0_LTH */
#define R367CAB_FSM_SNR0_LTH           0xF466
#define F367CAB_SNR0_LTH               0xF46600FF

/* FSM_SNR1_LTH */
#define R367CAB_FSM_SNR1_LTH           0xF467
#define F367CAB_SNR1_LTH               0xF46700FF

/* FSM_EQA1_HTH */
#define R367CAB_FSM_EQA1_HTH           0xF468
#define F367CAB_SNR3_HTH_LO            0xF46800F0
#define F367CAB_EQA1_HTH               0xF468000F

/* FSM_TEMPO */
#define R367CAB_FSM_TEMPO              0xF469
#define F367CAB_SIT                    0xF46900C0
#define F367CAB_WST                    0xF4690038
#define F367CAB_ELT                    0xF4690006
#define F367CAB_SNR3_HTH_HI            0xF4690001

/* FSM_CONFIG */
#define R367CAB_FSM_CONFIG             0xF46A
#define F367CAB_FEC2_DFEOFF            0xF46A0004
#define F367CAB_PRIT_STATE             0xF46A0002
#define F367CAB_MODMAP_STATE           0xF46A0001

/* EQU_I_TESTTAP_L */
#define R367CAB_EQU_I_TESTTAP_L        0xF474
#define F367CAB_I_TEST_TAP_L           0xF47400FF

/* EQU_I_TESTTAP_M */
#define R367CAB_EQU_I_TESTTAP_M        0xF475
#define F367CAB_I_TEST_TAP_M           0xF47500FF

/* EQU_I_TESTTAP_H */
#define R367CAB_EQU_I_TESTTAP_H        0xF476
#define F367CAB_I_TEST_TAP_H           0xF476001F

/* EQU_TESTAP_CFG */
#define R367CAB_EQU_TESTAP_CFG         0xF477
#define F367CAB_TEST_FFE_DFE_SEL       0xF4770040
#define F367CAB_TEST_TAP_SELECT        0xF477003F

/* EQU_Q_TESTTAP_L */
#define R367CAB_EQU_Q_TESTTAP_L        0xF478
#define F367CAB_Q_TEST_TAP_L           0xF47800FF

/* EQU_Q_TESTTAP_M */
#define R367CAB_EQU_Q_TESTTAP_M        0xF479
#define F367CAB_Q_TEST_TAP_M           0xF47900FF

/* EQU_Q_TESTTAP_H */
#define R367CAB_EQU_Q_TESTTAP_H        0xF47A
#define F367CAB_Q_TEST_TAP_H           0xF47A001F

/* EQU_TAP_CTRL */
#define R367CAB_EQU_TAP_CTRL           0xF47B
#define F367CAB_MTAP_FRZ               0xF47B0010
#define F367CAB_PRE_FREEZE             0xF47B0008
#define F367CAB_DFE_TAPMON_EN          0xF47B0004
#define F367CAB_FFE_TAPMON_EN          0xF47B0002
#define F367CAB_MTAP_ONLY              0xF47B0001

/* EQU_CTR_CRL_CONTROL_L */
#define R367CAB_EQU_CTR_CRL_CONTROL_L  0xF47C
#define F367CAB_EQU_CTR_CRL_CONTROL_LO 0xF47C00FF

/* EQU_CTR_CRL_CONTROL_H */
#define R367CAB_EQU_CTR_CRL_CONTROL_H  0xF47D
#define F367CAB_EQU_CTR_CRL_CONTROL_HI 0xF47D00FF

/* EQU_CTR_HIPOW_L */
#define R367CAB_EQU_CTR_HIPOW_L        0xF47E
#define F367CAB_CTR_HIPOW_L            0xF47E00FF

/* EQU_CTR_HIPOW_H */
#define R367CAB_EQU_CTR_HIPOW_H        0xF47F
#define F367CAB_CTR_HIPOW_H            0xF47F00FF

/* EQU_I_EQU_LO */
#define R367CAB_EQU_I_EQU_LO           0xF480
#define F367CAB_EQU_I_EQU_L            0xF48000FF

/* EQU_I_EQU_HI */
#define R367CAB_EQU_I_EQU_HI           0xF481
#define F367CAB_EQU_I_EQU_H            0xF4810003

/* EQU_Q_EQU_LO */
#define R367CAB_EQU_Q_EQU_LO           0xF482
#define F367CAB_EQU_Q_EQU_L            0xF48200FF

/* EQU_Q_EQU_HI */
#define R367CAB_EQU_Q_EQU_HI           0xF483
#define F367CAB_EQU_Q_EQU_H            0xF4830003

/* EQU_MAPPER */
#define R367CAB_EQU_MAPPER             0xF484
#define F367CAB_QUAD_AUTO              0xF4840080
#define F367CAB_QUAD_INV               0xF4840040
#define F367CAB_QAM_MODE               0xF4840007

/* EQU_SWEEP_RATE */
#define R367CAB_EQU_SWEEP_RATE         0xF485
#define F367CAB_SNR_PER                0xF48500C0
#define F367CAB_SWEEP_RATE             0xF485003F

/* EQU_SNR_LO */
#define R367CAB_EQU_SNR_LO             0xF486
#define F367CAB_SNR_LO                 0xF48600FF

/* EQU_SNR_HI */
#define R367CAB_EQU_SNR_HI             0xF487
#define F367CAB_SNR_HI                 0xF48700FF

/* EQU_GAMMA_LO */
#define R367CAB_EQU_GAMMA_LO           0xF488
#define F367CAB_GAMMA_LO               0xF48800FF

/* EQU_GAMMA_HI */
#define R367CAB_EQU_GAMMA_HI           0xF489
#define F367CAB_GAMMA_ME               0xF48900FF

/* EQU_ERR_GAIN */
#define R367CAB_EQU_ERR_GAIN           0xF48A
#define F367CAB_EQA1MU                 0xF48A0070
#define F367CAB_CRL2MU                 0xF48A000E
#define F367CAB_GAMMA_HI               0xF48A0001

/* EQU_RADIUS */
#define R367CAB_EQU_RADIUS             0xF48B
#define F367CAB_RADIUS                 0xF48B00FF

/* EQU_FFE_MAINTAP */
#define R367CAB_EQU_FFE_MAINTAP        0xF48C
#define F367CAB_FFE_MAINTAP_INIT       0xF48C00FF

/* EQU_FFE_LEAKAGE */
#define R367CAB_EQU_FFE_LEAKAGE        0xF48E
#define F367CAB_LEAK_PER               0xF48E00F0
#define F367CAB_EQU_OUTSEL             0xF48E0002
#define F367CAB_PNT2DFE                0xF48E0001

/* EQU_FFE_MAINTAP_POS */
#define R367CAB_EQU_FFE_MAINTAP_POS    0xF48F
#define F367CAB_FFE_LEAK_EN            0xF48F0080
#define F367CAB_DFE_LEAK_EN            0xF48F0040
#define F367CAB_FFE_MAINTAP_POS        0xF48F003F

/* EQU_GAIN_WIDE */
#define R367CAB_EQU_GAIN_WIDE          0xF490
#define F367CAB_DFE_GAIN_WIDE          0xF49000F0
#define F367CAB_FFE_GAIN_WIDE          0xF490000F

/* EQU_GAIN_NARROW */
#define R367CAB_EQU_GAIN_NARROW        0xF491
#define F367CAB_DFE_GAIN_NARROW        0xF49100F0
#define F367CAB_FFE_GAIN_NARROW        0xF491000F

/* EQU_CTR_LPF_GAIN */
#define R367CAB_EQU_CTR_LPF_GAIN       0xF492
#define F367CAB_CTR_GTO                0xF4920080
#define F367CAB_CTR_GDIR               0xF4920070
#define F367CAB_SWEEP_EN               0xF4920008
#define F367CAB_CTR_GINT               0xF4920007

/* EQU_CRL_LPF_GAIN */
#define R367CAB_EQU_CRL_LPF_GAIN       0xF493
#define F367CAB_CRL_GTO                0xF4930080
#define F367CAB_CRL_GDIR               0xF4930070
#define F367CAB_SWEEP_DIR              0xF4930008
#define F367CAB_CRL_GINT               0xF4930007

/* EQU_GLOBAL_GAIN */
#define R367CAB_EQU_GLOBAL_GAIN        0xF494
#define F367CAB_CRL_GAIN               0xF49400F8
#define F367CAB_CTR_INC_GAIN           0xF4940004
#define F367CAB_CTR_FRAC               0xF4940003

/* EQU_CRL_LD_SEN */
#define R367CAB_EQU_CRL_LD_SEN         0xF495
#define F367CAB_CTR_BADPOINT_EN        0xF4950080
#define F367CAB_CTR_GAIN               0xF4950070
#define F367CAB_LIMANEN                0xF4950008
#define F367CAB_CRL_LD_SEN             0xF4950007

/* EQU_CRL_LD_VAL */
#define R367CAB_EQU_CRL_LD_VAL         0xF496
#define F367CAB_CRL_BISTH_LIMIT        0xF4960080
#define F367CAB_CARE_EN                0xF4960040
#define F367CAB_CRL_LD_PER             0xF4960030
#define F367CAB_CRL_LD_WST             0xF496000C
#define F367CAB_CRL_LD_TFS             0xF4960003

/* EQU_CRL_TFR */
#define R367CAB_EQU_CRL_TFR            0xF497
#define F367CAB_CRL_LD_TFR             0xF49700FF

/* EQU_CRL_BISTH_LO */
#define R367CAB_EQU_CRL_BISTH_LO       0xF498
#define F367CAB_CRL_BISTH_LO           0xF49800FF

/* EQU_CRL_BISTH_HI */
#define R367CAB_EQU_CRL_BISTH_HI       0xF499
#define F367CAB_CRL_BISTH_HI           0xF49900FF

/* EQU_SWEEP_RANGE_LO */
#define R367CAB_EQU_SWEEP_RANGE_LO     0xF49A
#define F367CAB_SWEEP_RANGE_LO         0xF49A00FF

/* EQU_SWEEP_RANGE_HI */
#define R367CAB_EQU_SWEEP_RANGE_HI     0xF49B
#define F367CAB_SWEEP_RANGE_HI         0xF49B00FF

/* EQU_CRL_LIMITER */
#define R367CAB_EQU_CRL_LIMITER        0xF49C
#define F367CAB_BISECTOR_EN            0xF49C0080
#define F367CAB_PHEST128_EN            0xF49C0040
#define F367CAB_CRL_LIM                0xF49C003F

/* EQU_MODULUS_MAP */
#define R367CAB_EQU_MODULUS_MAP        0xF49D
#define F367CAB_PNT_DEPTH              0xF49D00E0
#define F367CAB_MODULUS_CMP            0xF49D001F

/* EQU_PNT_GAIN */
#define R367CAB_EQU_PNT_GAIN           0xF49E
#define F367CAB_PNT_EN                 0xF49E0080
#define F367CAB_MODULUSMAP_EN          0xF49E0040
#define F367CAB_PNT_GAIN               0xF49E003F

/* FEC_AC_CTR_0 */
#define R367CAB_FEC_AC_CTR_0           0xF4A8
#define F367CAB_BE_BYPASS              0xF4A80020
#define F367CAB_REFRESH47              0xF4A80010
#define F367CAB_CT_NBST                0xF4A80008
#define F367CAB_TEI_ENA                0xF4A80004
#define F367CAB_DS_ENA                 0xF4A80002
#define F367CAB_TSMF_EN                0xF4A80001

/* FEC_AC_CTR_1 */
#define R367CAB_FEC_AC_CTR_1           0xF4A9
#define F367CAB_DEINT_DEPTH            0xF4A900FF

/* FEC_AC_CTR_2 */
#define R367CAB_FEC_AC_CTR_2           0xF4AA
#define F367CAB_DEINT_M                0xF4AA00F8
#define F367CAB_DIS_UNLOCK             0xF4AA0004
#define F367CAB_DESCR_MODE             0xF4AA0003

/* FEC_AC_CTR_3 */
#define R367CAB_FEC_AC_CTR_3           0xF4AB
#define F367CAB_DI_UNLOCK              0xF4AB0080
#define F367CAB_DI_FREEZE              0xF4AB0040
#define F367CAB_MISMATCH               0xF4AB0030
#define F367CAB_ACQ_MODE               0xF4AB000C
#define F367CAB_TRK_MODE               0xF4AB0003

/* FEC_STATUS */
#define R367CAB_FEC_STATUS             0xF4AC
#define F367CAB_DEINT_SMCNTR           0xF4AC00E0
#define F367CAB_DEINT_SYNCSTATE        0xF4AC0018
#define F367CAB_DEINT_SYNLOST          0xF4AC0004
#define F367CAB_DESCR_SYNCSTATE        0xF4AC0002

/* RS_COUNTER_0 */
#define R367CAB_RS_COUNTER_0           0xF4AE
#define F367CAB_BK_CT_L                0xF4AE00FF

/* RS_COUNTER_1 */
#define R367CAB_RS_COUNTER_1           0xF4AF
#define F367CAB_BK_CT_H                0xF4AF00FF

/* RS_COUNTER_2 */
#define R367CAB_RS_COUNTER_2           0xF4B0
#define F367CAB_CORR_CT_L              0xF4B000FF

/* RS_COUNTER_3 */
#define R367CAB_RS_COUNTER_3           0xF4B1
#define F367CAB_CORR_CT_H              0xF4B100FF

/* RS_COUNTER_4 */
#define R367CAB_RS_COUNTER_4           0xF4B2
#define F367CAB_UNCORR_CT_L            0xF4B200FF

/* RS_COUNTER_5 */
#define R367CAB_RS_COUNTER_5           0xF4B3
#define F367CAB_UNCORR_CT_H            0xF4B300FF

/* BERT_0 */
#define R367CAB_BERT_0                 0xF4B4
#define F367CAB_RS_NOCORR              0xF4B40004
#define F367CAB_CT_HOLD                0xF4B40002
#define F367CAB_CT_CLEAR               0xF4B40001

/* BERT_1 */
#define R367CAB_BERT_1                 0xF4B5
#define F367CAB_BERT_ON                0xF4B50020
#define F367CAB_BERT_ERR_SRC           0xF4B50010
#define F367CAB_BERT_ERR_MODE          0xF4B50008
#define F367CAB_BERT_NBYTE             0xF4B50007

/* BERT_2 */
#define R367CAB_BERT_2                 0xF4B6
#define F367CAB_BERT_ERRCOUNT_L        0xF4B600FF

/* BERT_3 */
#define R367CAB_BERT_3                 0xF4B7
#define F367CAB_BERT_ERRCOUNT_H        0xF4B700FF

/* OUTFORMAT_0 */
#define R367CAB_OUTFORMAT_0            0xF4B8
#define F367CAB_CLK_POLARITY           0xF4B80080
#define F367CAB_FEC_TYPE               0xF4B80040
#define F367CAB_SYNC_STRIP             0xF4B80008
#define F367CAB_TS_SWAP                0xF4B80004
#define F367CAB_OUTFORMAT              0xF4B80003

/* OUTFORMAT_1 */
#define R367CAB_OUTFORMAT_1            0xF4B9
#define F367CAB_CI_DIVRANGE            0xF4B900FF

/* SMOOTHER_2 */
#define R367CAB_SMOOTHER_2             0xF4BE
#define F367CAB_FIFO_BYPASS            0xF4BE0020

/* TSMF_CTRL_0 */
#define R367CAB_TSMF_CTRL_0            0xF4C0
#define F367CAB_TS_NUMBER              0xF4C0001E
#define F367CAB_SEL_MODE               0xF4C00001

/* TSMF_CTRL_1 */
#define R367CAB_TSMF_CTRL_1            0xF4C1
#define F367CAB_CHECK_ERROR_BIT        0xF4C10080
#define F367CAB_CHCK_F_SYNC            0xF4C10040
#define F367CAB_H_MODE                 0xF4C10008
#define F367CAB_D_V_MODE               0xF4C10004
#define F367CAB_MODE                   0xF4C10003

/* TSMF_CTRL_3 */
#define R367CAB_TSMF_CTRL_3            0xF4C3
#define F367CAB_SYNC_IN_COUNT          0xF4C300F0
#define F367CAB_SYNC_OUT_COUNT         0xF4C3000F

/* TS_ON_ID_0 */
#define R367CAB_TS_ON_ID_0             0xF4C4
#define F367CAB_TS_ID_L                0xF4C400FF

/* TS_ON_ID_1 */
#define R367CAB_TS_ON_ID_1             0xF4C5
#define F367CAB_TS_ID_H                0xF4C500FF

/* TS_ON_ID_2 */
#define R367CAB_TS_ON_ID_2             0xF4C6
#define F367CAB_ON_ID_L                0xF4C600FF

/* TS_ON_ID_3 */
#define R367CAB_TS_ON_ID_3             0xF4C7
#define F367CAB_ON_ID_H                0xF4C700FF

/* RE_STATUS_0 */
#define R367CAB_RE_STATUS_0            0xF4C8
#define F367CAB_RECEIVE_STATUS_L       0xF4C800FF

/* RE_STATUS_1 */
#define R367CAB_RE_STATUS_1            0xF4C9
#define F367CAB_RECEIVE_STATUS_LH      0xF4C900FF

/* RE_STATUS_2 */
#define R367CAB_RE_STATUS_2            0xF4CA
#define F367CAB_RECEIVE_STATUS_HL      0xF4CA00FF

/* RE_STATUS_3 */
#define R367CAB_RE_STATUS_3            0xF4CB
#define F367CAB_RECEIVE_STATUS_HH      0xF4CB003F

/* TS_STATUS_0 */
#define R367CAB_TS_STATUS_0            0xF4CC
#define F367CAB_TS_STATUS_L            0xF4CC00FF

/* TS_STATUS_1 */
#define R367CAB_TS_STATUS_1            0xF4CD
#define F367CAB_TS_STATUS_H            0xF4CD007F

/* TS_STATUS_2 */
#define R367CAB_TS_STATUS_2            0xF4CE
#define F367CAB_ERROR                  0xF4CE0080
#define F367CAB_EMERGENCY              0xF4CE0040
#define F367CAB_CRE_TS                 0xF4CE0030
#define F367CAB_VER                    0xF4CE000E
#define F367CAB_M_LOCK                 0xF4CE0001

/* TS_STATUS_3 */
#define R367CAB_TS_STATUS_3            0xF4CF
#define F367CAB_UPDATE_READY           0xF4CF0080
#define F367CAB_END_FRAME_HEADER       0xF4CF0040
#define F367CAB_CONTCNT                0xF4CF0020
#define F367CAB_TS_IDENTIFIER_SEL      0xF4CF000F

/* T_O_ID_0 */
#define R367CAB_T_O_ID_0               0xF4D0
#define F367CAB_ON_ID_I_L              0xF4D000FF

/* T_O_ID_1 */
#define R367CAB_T_O_ID_1               0xF4D1
#define F367CAB_ON_ID_I_H              0xF4D100FF

/* T_O_ID_2 */
#define R367CAB_T_O_ID_2               0xF4D2
#define F367CAB_TS_ID_I_L              0xF4D200FF

/* T_O_ID_3 */
#define R367CAB_T_O_ID_3               0xF4D3
#define F367CAB_TS_ID_I_H              0xF4D300FF

#define STV0367CAB_NBREGS              187
#define STV0367CAB_NBFIELDS            403

#endif  // _STV0367QAM_INIT_H
// vim:ts=4
