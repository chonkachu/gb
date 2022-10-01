#include <iostream>

using namespace std;

struct Cpu {
   
    // accumulator and flags -> flags lower 8 bits 
    // bit 7 -> zero flag 
    // bit 6 subtraction flag
    // bit 5 half carry flag
    // bit 4 carry flag
    uint16_t af;
    // registers BC DE HL, from which we can access high or low 8 bits
    uint16_t regs[3];
    uint16_t sp;
    uint16_t pc;
    
    uint8_t mem[64*1024];

    int read(){
        return 0;
    }
    void write(){}
};

struct Lcd{
    uint8_t pixels[160][144];

};
int main(){

    return 0;
}
