#ifndef WARTKBITS_H
#define WARTKBITS_H

#include <stdio.h>
#include <stdint.h>

void printBinary(uint64_t binary, uint8_t bits, uint8_t breakapart){
   
   uint64_t maxbit = 0;
   
   if(bits == 8){
       maxbit = 0x80;
   } else if(bits == 16){
       maxbit = 0x8000;
   } else if(bits == 32){
       maxbit = 0x80000000;
   } else if(bits == 64){
       maxbit = 0x8000000000000000;
   }
   
     for(int i = 0; i < bits; i++){
         
     if(breakapart == 4){
         if(i == breakapart || i == 8 || i == 12 || i == 16 || i == 20 || i == 24 || i == 28 || i == 32 || i == 36 || i == 40 || i == 44 || i == 48 || i == 52 || i == 56 || i == 60 || i == 64){
           printf(" ");
         }
     }
     
     if(breakapart == 8){
         if(i == breakapart || i == 16 || i == 24 || i == 32 || i == 40 || i == 48 || i == 56 || i == 64){
           printf(" ");
         }
     }
         
        printf("%c", (binary & maxbit) ? '1' : '0');
       
       maxbit /= 2;
   }
   
}

#endif
