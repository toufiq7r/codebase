// NOTE(Toufiq): Float Constant Functions

static f32 
inf_f32(void) {
    union{ f32 f; i32u u; } r;
    r.u = 0x7f800000;
    return (r.f);
}

static f32 
ninf_f32(void) {
    union{ f32 f; i32u u; } r;
    r.u = 0xff800000;
    return (r.f);
}

static f64 
inf_f64(void) {
    union{ f64 f; i64u u; } r;
    r.u = 0x7f800000000000000;
    return (r.f);
}

static f64 
ninf_f64(void) {
    union{ f64 f; i64u u; } r;
    r.u = 0xff800000000000000;
    return (r.f);
}