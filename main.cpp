#include <stdio.h>
#include <base.h>

#define EvalPrint(x) printf("%s = %d\n", #x, (i32)(x))
#define EvalPrintLL(x) printf("%s = %lld\n", #x, (i64)(x))
#define EvalPrintU(x) printf("%s = %u\n", #x, (i32u)(x))
#define EvalPrintLLU(x) printf("%s = %llu\n", #x, (i64u)(x))
#define EvalPrintF(x) printf("%s = %f\n", #x, (f32)(x))
#define EvalPrintD(x) printf("%s = %lf\n", #x, (f64)(x))

struct TestStruct {
    int a;
    int b;
    int c;
    int d;
};

int main(int argc, const char* argv[]){
    int foo[100];
    for (int i = 0; i < ArrayCount(foo); i += 1) {
        foo[i] = i;
    }

    EvalPrint(ArrayCount(foo));

    int bar[100];
    MemoryCopyArray(bar, foo);
    EvalPrint(bar[50]);
    EvalPrint(MemoryMatch(foo, bar, sizeof(foo)));
    MemoryZeroArray(bar);
    EvalPrint(bar[50]);
    EvalPrint(MemoryMatch(foo, bar, sizeof(foo)));

    EvalPrint(OffsetOfMember(TestStruct, a));
    EvalPrint(OffsetOfMember(TestStruct, b));
    EvalPrint(OffsetOfMember(TestStruct, c));
    EvalPrint(OffsetOfMember(TestStruct, d));

    TestStruct t = {1, 2, 3, 4};
    EvalPrint(t.a);
    EvalPrint(t.d);
    MemoryZeroStruct(&t);
    EvalPrint(t.a);
    EvalPrint(t.d);

    EvalPrint(Min(1, 10));
    EvalPrint(Min(10, 1));
    EvalPrint(Max(1, 10));
    EvalPrint(Max(10, 1));
    EvalPrint(Clamp(1, 10, 100));
    EvalPrint(Clamp(1, 0, 100));
    EvalPrint(Clamp(1, 500, 100));

    EvalPrint(i8_MIN);
    EvalPrint(i16_MIN);
    EvalPrint(i32_MIN);
    EvalPrintLL(i64_MIN);

    EvalPrint(i8u_MAX);
    EvalPrint(i16_MAX);
    EvalPrint(i32_MAX);
    EvalPrintLL(i64_MAX); 

    EvalPrintU(i8u_MAX);
    EvalPrintU(i16u_MAX);
    EvalPrintU(i32u_MAX);
    EvalPrintLLU(i64u_MAX);

    EvalPrintF(f32_MACHINE_EPSILON);
    EvalPrintF(f32_GOLD_BIG);
    EvalPrintF(f32_GOLD_SMALL);

    EvalPrintD(f64_MACHINE_EPSILON);
    EvalPrintD(f64_GOLD_BIG);
    EvalPrintD(f64_GOLD_SMALL);

    EvalPrintF(inf_f32());
    EvalPrintF(ninf_f32());
    EvalPrintD(inf_f64());
    EvalPrintD(ninf_f64());

    return 0;
}
