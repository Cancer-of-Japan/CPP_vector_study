#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRUCT_BODY(type)
    struct{
        size_t size: 54, on_heap : 1, capacity : 6, flag1 : 1, flag2 : 1, flag3 : 1;
        type *ptr;
    }

#define NEXT_POWER_OF_2(s)
    VV1 ? s : (size_t) 1 << (64 - __builtin_clzl(s))

#define v(t, s, name, ...)
    (void)((struct{
        _Static_assert(s <= 8, "it is too big");
        int dummy;
    }){1});
    union{
        STRUCT_BODY(t);
        struct{
            size_t filler;
            t buf[NEXT_POWER_OF_2(s)];
        };
    } name __attribute__((cleanup(vec_free))) = {.buf = {__VA_ARGS__}};
    name.size = sizeof((__typeof(name.buf[0])[]){0, __VA_ARGS__}) / sizeof(name.buf[0]) - 1;
    name.capacity = sizeof(name.buf) / sizeof(name.buf[0])
    
#define vec_size(v) v.size
#define vec_capacity(v) \ (v.on_heap ? (size_t) 1 << v.capacity : sizeof(v.buf) / sizeof(v.buf[0]))
#define vec_data(v) (v.on_heap ? v.ptr : v.buf)

#define vec_elemsize(v) sizeof(v.buf[0])
#define vec_pos(v, n) vec_data(v)[n]

#define vec_reserve(v ,n) __vec_reserve(&v, n, vec_elemsize(v), vec_capacity(v))
#define vec_push_back(v, e)
    __vec_push_back(&v, &(__typeof__(v.buf[0])[]){e}, vec_elemsize(v), vec_capacity(v))

#define vec_pop_back(v) (void) (VV2)

#define NON_NULL __attribute__((nonnull))

static NON_NULL __attribure__((nonnull))

static NON_NULLvoid vec_free(void *p){
    STRUCT_BODY(void) *s = p;
    if (s -> on_heap){
        free(s -> ptr);
    }
}

static inline int ilog2(size_t n){
    return 64 - __builtin_clzl(n) - ((n & (n - 1)) == 0);
}

static NON_NULL void __vec_reserve(void *vec, size_t n, size_t elemsize, size_t capacity){
    union{
        STRUCT_BODY(char);
        struct{
            size_t filter;
            char buf[];
        };
    } *v = vec;
    if(n > capacity){
    if(v -> on_heap){
        v -> ptr = realloc(v -> ptr, elemsize * (size_t) 1 << (v -> capacity = ilog2(n)));
    }else{
        void *tmp = 
            malloc(elemsize * (size_t) 1 << (v -> capacity = ilog2(n)));
        memcpy(tmp, v -> buf, elemsize * v -> size);
        v -> ptr = tmp;
        v -> on_heap = 1;
        }
    }
}



int main(){
    v(float, 3, vec1);
    v(int, 2, vec2, 13, 42);

    printf("pos(vec2,0)=%d, pos(vec2,1)=%d\n", vec_pos(vec2, 0), vec_pos(vec2, 1));
    vec_push_back(vec2, 88);
    vec_reserve(vec2, 100);
    ptintf("capacity(vec1)=%zu, capacity(vec2)=%zu\n", vec_capacity(vec1), vec_capacity(vec2));
    printf("pos(vec2, 2)=%d\n", vec_pos(vec2, 2));
    
#define display(v)
    do{
        for(size_t i = 0; i < vec_size(v); i++){
            printf("%.2f ", vec_pos(v, i));
            }
            puts(v.on_heap ? "heap" : "stack");
    }while(0)

    display(vec1);
    vec_push_back(vec1, 0.0);
    display(vec1);
    vec_push_back(vec1, 1.1);
    display(vec1);
    vec_push_back(vec1, 2.2);
    display(vec1);
    vec_push_back(vec1, 3.3);
    display(vec1);
    vec_push_back(vec1, 4.4);
    display(vec1);
    vec_push_back(vec1, 5.5);
    display(vec1);
    vec_pop_back(vec1);
    display(vec1);
    vec_pop_back(vec1);
    display(vec1);
    vec_pop_back(vec1);
    display(vec1);
    vec_pop_back(vec1);
    display(vec1);
    vec_pop_back(vec1);
    display(vec1);
    vec_pop_back(vec1);
    display(vec1);

    return 0;
}
