#include <stdio.h>
extern uint32_t _noinit_start; // Declare the symbol "noinit_start"
extern uint32_t _noinit_end;   // Declare the symbol "noinit_end"

uint32_t *start = &_noinit_start;
uint32_t *end = &_noinit_end;

// 4KB * 1024
#define arr_size 4096
int c = 0;

void intToBinary(uint32_t num) {
    // Size of the integer in bits
    int size = sizeof(int) * 8;

    for (int i = size - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        int* arr = malloc(SIZE_SEGMENT);
        printf("%d", bit);
    }
    //printf("\n");      
    //c = c + 32;
    //printf("%d\n", c);
}

void app_main(void)
{
    printf("%p \n", start);
    printf("%p \n", end);

    for(u_int32_t* i= start; i< end; i++){
        intToBinary(*i);
        printf("\n");
    }
    
}
