#ifndef EXTERNS_H
#define EXTERNS_H
//UNCONTENDED RAM


//VARIABLES
extern unsigned char Variable_in_contended;//found in ramlow.asm
extern unsigned char Variable_in_Bank0;//found in ram0Z.asm


//FUNCTIONS
//found in ramlow.asm
extern unsigned char Border_color;


//found in ramlow.asm
extern void __FASTCALL__ border_Change_contended1();
extern void __FASTCALL__ border_Change_contended2(unsigned char color);


//found in uncontended_section.asm
extern void __FASTCALL__ border_Change_uncontended(unsigned char color);


//found in RAM0Z.asm
extern void __FASTCALL__ border_Change_RAM0(unsigned char color);


/*
__fastcall__
 Fastcall linkage allows one parameter
 to be passed by register in a subset of DEHL.
 So if the parameter is 8-bit, the value will
 be in L.  If the parameter is 16-bit,
 the value is in HL and if it is
 32-bit the value is in DEHL.
*/


#endif
