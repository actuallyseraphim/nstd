#include <stdio.h>
#include "vector.h"

int main(void) {
    vec3_float v3 = vec3_float_new(1,2,3);
    v3 = vec3_float_add(v3, vec3_float_new(4,5,6));
    printf("%f %f %f\n", v3.x, v3.y, v3.z);
    return 0;
}

