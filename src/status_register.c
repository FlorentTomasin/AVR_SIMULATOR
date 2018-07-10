#include "status_register.h"

void update_S(void) {
    /*
     * S = N ^ V
     * Note: ^ is XOR operation.
     */
    WRITE_BIT(SREG, S_SHIFT,
              READ_BIT(SREG, N_SHIFT) ^ READ_BIT(SREG, V_SHIFT));
}
