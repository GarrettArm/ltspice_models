*-----------------------------------------------------------------------
* Filename:		6ca7.inc  V3 23/01/2004
* Simulator:		PSpice
* Device type:		Power pentode
* Device model:		6CA7/EL34
*
* Author:		Duncan Munro
* Date:			2/5/97
* Copyright:		(C)1997-2004 Duncan Amplification
*
*
* V2 [12/10/97]: Screen current limited to prevent screen current
*		 draw at Vs = 0.
*
* V4 [23/01/04]: LIMIT{x,y,z} statements changed to LIMIT(x,y,z)
* 
* The following parameters are not modelled:
*
*   (1) Heater
*   (2) Grid current is an approximation
*
* Please note that this model is provided "as is" and
* no warranty is provided in respect of its suitability
* for any application.
*
* This model is provided for educational and non-profit use.
*
* Queries via the forum at http://www.duncanamps.com/
*
* Pins   A  Anode
*        S  Screen
*        G  Grid
*        K  Cathode
*
*-----------------------------------------------------------------------

.SUBCKT 6CA7 A S G K
*
* Calculate contribution to cathode current
*
Eat	at	0	VALUE={0.636*ATAN(V(A,K)/23)}
Egs	gs	0	VALUE={LIMIT(V(S,K)/9.3+V(G,K)*0.95,0,1E6)}
Egs2	gs2	0	VALUE={PWRS(V(gs),1.5)}
Ecath  	cc    	0 	VALUE={V(gs2)*V(at)}
*
* Calculate anode current
*
Ga     	A     	K     	VALUE={1.86E-3*V(cc)}
*
* Calculate screen current
*
Escrn	sc	0	VALUE={V(gs2)*(1.1-V(at))}
Gs     	S     	K	VALUE={1.518E-3*V(sc)*LIMIT(V(S,K),0,10)/10}
*
* Grid current (approximation - does not model low va/vs)
*
Gg	G	K	VALUE={PWR(LIMIT(V(G,K)+1,0,1E6),1.5)*50E-6}
*
* Capacitances
*
Cg1	G	K	15.4p
Cak	A	K	8.4p
Cg1a	G	A	1.1p

.ENDS 
