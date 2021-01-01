.SUBCKT VINT10 A B
R_RL          A       $N_0002  7.5  
R_RD1         $N_0002 $N_0003  12.5  
L_LD1         $N_0003 $N_0002  20mH  
C_CD1         $N_0002 $N_0003  195u  
R_RD2         $N_0003 $N_0004  0.5  
C_CD2         $N_0003 $N_0004  50u  
L_LD2         $N_0004 $N_0003  100uH  
L_LD3         B       $N_0004  120uH  
R_RD3	      B       $N_0004  20
.ENDS 
