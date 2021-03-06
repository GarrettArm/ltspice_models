*-----------------------------------------------------------------------
* Filename:		EF86s.inc  17/5/97 (Version 3)
* Simulator:		Spice 3f4
* Device type:		Pentode
* Device model:		EF86
*
* Author:		Duncan Munro
* Date:			16/5/97
* Copyright:		(C)1997-2000 Duncan Amplification
* 
* The following parameters are not modelled:
*
*   (1) Heater
*   (2) Grid current
*
* Please note that this model is provided "as is" and
* no warranty is provided in respect of its suitability
* for any application.
*
* This model is provided for educational and non-profit use.
*
* Email queries to postmaster@duncanamps.com
*
* Pins   A  Anode
*        S  Screen
*        G  Grid
*        K  Cathode
*
*-----------------------------------------------------------------------

.SUBCKT EF86 A S G K

*
* Calculate reduction in mu when Vg < -3V
*
Bmu	mu 0	V=V(G,K)+URAMP(V(K,G)-3)*0.4
*
* Calculate contribution to cathode current
*
Bat	at  0	V=0.636*ATAN(V(A,K)/15)
Bgs	gs  0	V=URAMP(V(S,K)/27.5+V(mu)*1.32+1)
Bgs2	gs2 0	V=URAMP(V(gs))^1.5
Bcath  	cc  0 	V=V(gs2)*V(at)
*
* Calculate anode current
*
Ba     	A   K  	I=5.83E-4*V(cc)
*
* Calculate screen current
*
Bs	S   K	I=0.5E-3*V(gs2)*(1.1-V(at))
*
* Capacitances
*
Cg1	G   K	3.8p
Cak	A   K	5.3p
Cg1a	G   A	0.05p
.ENDS 

