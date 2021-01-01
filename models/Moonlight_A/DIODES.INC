
*
* Diode's spice subcircuits library
*
* Francesco Pintavalle, October 27, 1997
* Version 1.1
*
*
* MODEL
*    Ip = (Vp^1.5) / c
*
* IMPLEMENTED
*		v1.0
*    GZ30
*    GZ40
*    GZ41
*    5W4
*    5Y3-G, aka 5X3
*    GZ33
*    GZ34
*    GZ37
*    5U4G
*    5U4-GB
*    5R4-GY
*    5V4-G, aka 83V
*    EZ11
*    EZ90
*    6X5
*    6202
*    6203
*    EZ12
*    EZ80
*    EZ81
*    6AX5-GT
*    7Z4
*    CY32
*    EZ150
*
*		v1.1
*    5U4, sophia measured
*
*		v1.2
*    CK1006, gas pwr rectifier
*    83, gas pwr rectifier
*    80S, gas rectifier
*
*
* TESTED
*
* TO BE IMPLEMENTED
* 
*    CK1006, gas pwr rectifier
*    83, gas pwr rectifier
*    80S, gas rectifier
*
* FUTURE WORK
*    - try a best fit with graphic system.
*
*
* NOTES
*    - curve is modeled through 1 point in the output plane,
*      around the max Plate dissipation.
*
*
* REFERENCES
*    Electronic Universal Vade Mecum (EUVM)
*    RCA receiving tube manual
*

*. GZ30, model based on EUVM type 406
*- Filament 5V/2A, max 1400V
.subckt GZ30 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/1314.53
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/1314.53
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends GZ30


*. GZ40, model based on EUVM type 406
*- Filament 5V/0.75A
.subckt GZ40 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/3975.23
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/3975.23
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends GZ40

*. GZ41, model based on EUVM type 406
*- Filament 5V/0.75A
.subckt GZ41 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2885.25
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2885.25
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends GZ41 

*. 5W4, model based on EUVM type 406
*- Filament 5V/1.5A
.subckt 5W4 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/7150.12
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/7150.12
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5W4

*. 5Y3-G, model based on EUVM type 406, aka 5X3
*- Filament 5V/2A
.subckt 5Y3-G a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/7071.07
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/7071.07
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5Y3-G

*. GZ33, model based on EUVM type 407
*- Filament 5V/3A
.subckt GZ33 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/387.298
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/387.298
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends GZ33

*. GZ34, model based on EUVM type 407
*- Filament 5V/1.9A
.subckt GZ34 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/500
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/500
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends GZ34

*. GZ37, model based on EUVM type 407
*- Filament 5V/2.8A
.subckt GZ37 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2529.82
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2529.82
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends GZ37

*. 5U4G, model based on EUVM type 407
*- Filament 5V/3A
.subckt 5U4G a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/4078.91
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/4078.91
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5U4G

*. 5U4-GB, model based on EUVM type 407
*- Filament 5V/3A
.subckt 5U4-GB a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2620.23
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2620.23
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5U4-GB

*. 5R4-GY, model based on EUVM type 408
*- Filament 5V/2A
.subckt 5R4-GY a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/3872.98
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/3872.98
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5R4-GY

*. 5V4-G, model based on EUVM type 408, aka 83V
*- Filament 5V/2A
.subckt 5V4-G a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/1470.59
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/1470.59
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5V4-G

*. EZ11, model based on EUVM type 409
.subckt EZ11 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2133.33
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2133.33
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends EZ11

*. EZ90, model based on EUVM type 409
.subckt EZ90 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2981.42
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2981.42
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends EZ90

*. 6X5, model based on EUVM type 409
.subckt 6X5 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2941.44
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2941.44
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 6X5

*. 6202, model based on EUVM type 409
.subckt 6202 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/4141.26
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/4141.26
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 6202

*. 6203, model based on EUVM type 409
.subckt 6203 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2856.04
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2856.04
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 6203

*. EZ12, model based on EUVM type 410
.subckt EZ12 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/1987.62
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/1987.62
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends EZ12

*. EZ80, model based on EUVM type 410
.subckt EZ80 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2981.42
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2981.42
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends EZ80

*. EZ81, model based on EUVM type 410
.subckt EZ81 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/1192.57
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/1192.57
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends EZ81

*. 6AX5-GT, model based on EUVM type 410
.subckt 6AX5-GT a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/6037.38
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/6037.38
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 6AX5-GT

*. 7Z4, model based on EUVM type 410
.subckt 7Z4 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/5059.64
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/5059.64
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 7Z4

*. CY32, model based on EUVM type 410
.subckt CY32 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/2545.58
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/2545.58
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends CY32

*. EZ150, model based on EUVM type 410
.subckt EZ150 a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/987.747
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/987.747
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends EZ150

*. 5U4/sop, Model based on "The Tube Directory" sophia measured.
.subckt 5U4/sop a1 a2 k
Bout1  ap1  k    i = ((uramp(v(ap1, k)))^1.5)/3335.41
Bout2  ap2  k    i = ((uramp(v(ap2, k)))^1.5)/3335.41
D1     a1   ap1  dx
D2     a2   ap2  dx
.model dx D(is=1.0e-12 rs=1.0)
.ends 5U4/sop
