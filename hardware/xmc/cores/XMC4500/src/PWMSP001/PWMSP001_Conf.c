/*******************************************************************************
**  DAVE App Name : PWMSP001       App Version: 1.0.32               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[pwmsp001Conf.c]*/

/*******************************************************************************
 Copyright (c) 2012, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without**
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000/XMC1000 Series                                 **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: Yes                                       **
**                                                                            **
** MODIFICATION DATE : November 21, 2012                                      **
**                                                                            **
*******************************************************************************/
/*******************************************************************************/
/**
 * @file  PWMSP001_Conf.c
 * @App Version PWMSP001 <1.0.32>
 * @brief This file contains App parameter data as per GUI configurations
 */
/* Revision History					 
 * 21 Nov 2012   v1.0.16   coding guidelines  
 */
/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** KS           App Developer                                                 **
*******************************************************************************/

#include <DAVE3.h>

extern void PWMSP001_lSetDutyCenterAlign(const void* HandlePtr,float Duty);
extern void PWMSP001_lSetDutyEdgeAlign(const void* HandlePtr,float Duty);
extern void PWMSP001_lSetDutyEdgeAlignTimerConcat(const void* HandlePtr,float Duty);
extern void PWMSP001_lSetCompareCenterAlign(const void* HandlePtr,uint32_t Compare);
extern void PWMSP001_lSetCompareEdgeAlign(const void* HandlePtr,uint32_t Compare);
extern void PWMSP001_lSetCompareEdgeAlignTimerConcat(const void* HandlePtr,uint32_t Compare);





  
 
PWMSP001_DynamicDataType PWMSP001_DynamicData0 =
{
  .StateType = PWMSP001_UNINITIALIZED
};

const PWMSP001_HandleType PWMSP001_Handle0 =
{
  .kTimerMode= 0U,
  .CountingModeType = PWMSP001_EDGE_ALIGNED,
  .kPassiveLevel= 0U,
  .kExtStartTrig=  0U, 
  .kExtStopTrig=  0U, 
  .kStartEdge = PWMSP001_NO_TRIGGER,
  .kStopEdge = PWMSP001_NO_TRIGGER,
  .ExtStartConfigType = PWMSP001_START_TIMER,
  .ExtStopConfigType = PWMSP001_STOP_TIMER,
  .kTrapEnable= 0U,
  .kTrapSync= 1U,
  .kTrapExitControl= 0U,
  .kTrapLevel= 1U,
  
  .kResolution = (float)8.333,
  .kCCUPrescalar= 0U,
  .kTimerConcatenation = 0U,
  .kCompareValue = 6000U,
  .kPeriodVal = 11999U,
  .kMaxPeriodVal= 65535U,
  .kDitherSetting= 0U,
  .kDitherCompare = 0U,  
  .FirstSlice=  PWMSP001_SLICE3 ,
  .SecondSlice= PWMSP001_SLICE3,
  .CC4yKernRegsPtr= (CCU4_GLOBAL_TypeDef*) CCU40_BASE,
  .CC4yRegsPtr= (CCU4_CC4_TypeDef*)CCU40_CC43 ,
  .CC4yRegs1Ptr= (CCU4_CC4_TypeDef*)CCU40_CC43,
  .DynamicDataType= &PWMSP001_DynamicData0,
  .StartControl = 0U,
  .InterruptControl = 0x1U,
  .SetCompareFuncPtr = PWMSP001_lSetCompareEdgeAlign,
  .SetDutyFuncPtr = PWMSP001_lSetDutyEdgeAlign,
};  
  
/*CODE_BLOCK_END*/

