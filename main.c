//SCHKUZ002 MLKTSH012
#include <stdint.h>

// change this function prototype to take appropriate arguments.
void find_closest_pair(uint16_t *data, uint16_t **small, uint16_t **large);
int main(void) {
    uint16_t array[10];  // allocate 10 spaces on the stack
    // individually set those spaces to some values. The automarker will change these!
    array[0] =  123;
    array[1] =  234;
    array[2] =  345;
    array[3] =  400;
    array[4] =  700;
    array[5] =  899;
    array[6] = 1000; // your algorithm should find this...
    array[7] = 1024; // ... and this element. 
    array[8] = 2048;
    array[9] = 4444;

    // allocate two pointers. These pointers should be set to point to the smaller and
    // larger elements of the closest adjacent pair by the find_closest_pair function.
    uint16_t *closest_pair_smaller_ptr;
    uint16_t *closest_pair_larger_ptr;
    
    // change this to call find_closest_pair with the arguments you need
    // This should be the only change to main which you make!!
    find_closest_pair(array, &closest_pair_smaller_ptr, &closest_pair_larger_ptr);

//    if ((*closest_pair_smaller_ptr == (array[6]))&&(*closest_pair_larger_ptr == (array[7])))
//    {
//        *(uint32_t*)0x40021014 |= 0x40000;
//        *(uint16_t*)0x48000400 = 0x00005555;
//        *(uint16_t*)0x48000414 = 0xAA;
//    }

    // hang in an infinite loop doing nothing.
    while(1) {
    }

}

// change my arguments as required, but don't change my return type!
void find_closest_pair(uint16_t *data, uint16_t **smL, uint16_t **lrG)
{
    uint32_t index = 0;
    uint32_t smallest_diff = UINT32_MAX;
    
    for (; index < 10; index++)
    {
        if((data[index+1]-data[index])<(smallest_diff))
        {
            smallest_diff = (data[index+1]-data[index]);
            *smL  = (uint16_t *)(data+index);
            *lrG = (uint16_t *)(data+index+1);
        }
    }
    
}