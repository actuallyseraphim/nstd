@template T vec3
typedef struct {
    $T x;
    $T y;
    $T z;
} vec3@T;

vec3@T vec3@T_new($T x, $T y, $T z) {
    return (vec3@T){.x=x,.y=y,.z=z};
}

vec3@T vec3@T_add(vec3@T a, vec3@T b) {
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a;
}

@endtemplate
@needs float vec3
