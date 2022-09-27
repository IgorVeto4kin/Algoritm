#include <stdio.h>
#define XYECOC main
void sw(int* a, int* b){
    int st;
    st = *a;
    *a = *b;
    *b = st;
}

int XYECOC()
{

int q = 10, v = 5;
printf("%d %d\n", q,v);
sw(&q, &v);
printf("%d %d", q, v);

    return 0;
}
