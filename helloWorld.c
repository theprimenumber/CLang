#include <stdio.h>
#include <stdint.h>

#define BYTE_SIZE 8
#define MINI_BYTE 4

int main(void){
    const uint64_t intEnc = 0x20485764656c6f72ULL;
    uint64_t intByt = 0x0000042015712236ULL;
    while (intByt != 0){
        putchar((intEnc >> (intByt & 0xF)*BYTE_SIZE & 0xFF));
        intByt = intByt >> MINI_BYTE;
    }
}
