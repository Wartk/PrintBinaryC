#include <stdio.h>
#include <stdint.h>

void printBinary(uint64_t binary, uint8_t bits){
   
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
       printf("%c", (binary & maxbit) ? '1' : '0');
       maxbit /= 2;
   }
   
}

int main(void){
    
    uint8_t x = 5;
    
    printBinary(x, 8);
    
    return 0;
}
