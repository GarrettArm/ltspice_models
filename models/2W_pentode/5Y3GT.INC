*-----------------------------------------------------------------------
* Filename:		5y3gt.inc  17/5/97
* Simulator:		PSpice
* Device type:		Valve rectifier
* Device model:		5Y3GT
*
* Author:		Duncan Munro
* Date:			25/4/97
* Copyright:		(C)1997-2000 Duncan Amplification
* 
* The following parameters are not modelled:
*
*   (1) Heater
*   (2) Reverse voltage breakdown
*   (3) Saturation
*   (4) Interelectrode capacitance
*
* Please note that this model is provided "as is" and
* no warranty is provided in respect of its suitability
* for any application.
*
* This model is provided for educational and non-profit use.
*
* Email queries to postmaster@duncanamps.com
*
*-----------------------------------------------------------------------

.SUBCKT 5Y3GT A K
GP  A  K  VALUE={2.69E-4*(PWR(V(A,K),1.5)+PWRS(V(A,K),1.5))/2}
.ENDS 5Y3GT

