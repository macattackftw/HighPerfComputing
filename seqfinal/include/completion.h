#ifndef __COMPLETION_H__
#define __COMPLETION_H__

#include <stdint.h>     // uint32_t, uint64_t


const uint32_t complete19[19] = { 0, // So we don't have to perform N - 1
                                  1, 0, 0, 2, 10, 4,
                                  40, 92, 352, 724, 2680, 14200,
                                  73712, 365596, 2279184, 14772512, 95815104, 666090624};
// 0-16 factorial
const uint64_t factorials[19] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800,
                                  87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000};


/*------------------------------------------------------------------------------
 * Function:    correctCount
 * Purpose:     Checks if the passed in count is equal to complete[n].
 *
 * In arg:      N, count
 * Returns:     bool
 */
inline bool correctCount(const uint8_t &N, const uint32_t &count){
    return count == complete19[N];
}


#endif