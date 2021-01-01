[Transient Analysis]
{
   Npanes: 4
   Active Pane: 3
   {
      traces: 1 {524292,0,"V(n031)*Ix(U8:Plate)"}
      X: ('m',0,0,0.001,0.01)
      Y[0]: (' ',1,-0.5,0.5,5)
      Y[1]: (' ',0,1e+308,10,-1e+308)
      Units: "W" (' ',0,0,1,-0.5,0.5,5)
      Log: 0 0 0
   },
   {
      traces: 2 {524294,0,"(V(n024)-V(b))*Ix(U3:5)"} {589827,0,"(V(n038)-V(a))*Ix(U3:2)"}
      X: ('m',0,0,0.001,0.01)
      Y[0]: (' ',0,-1,1,11)
      Y[1]: (' ',0,1e+308,1,-1e+308)
      Units: "W" (' ',0,0,0,-1,1,11)
      Log: 0 0 0
   },
   {
      traces: 2 {524290,0,"V(n023)"} {524293,0,"V(n037)"}
      X: ('m',0,0,0.001,0.01)
      Y[0]: (' ',0,-45,5,5)
      Y[1]: (' ',0,1e+308,1,-1e+308)
      Volts: (' ',0,0,0,-45,5,5)
      Log: 0 0 0
   },
   {
      traces: 1 {524295,0,"V(n019)"}
      X: ('m',0,0,0.001,0.01)
      Y[0]: (' ',0,-8,2,16)
      Y[1]: (' ',0,1e+308,1,-1e+308)
      Volts: (' ',0,0,0,-8,2,16)
      Log: 0 0 0
   }
}
