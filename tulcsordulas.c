#include <stdio.h>
#include <limits.h>

int main(){
    int val = INT_MAX; // limits.h-ban van deklarálva ez a konstans
    printf("val = %d\n", val);

    val++;  // ugyanaz, mint val = val + 1, ami ugyanaz, mint val += 1
    printf("val = %d\n", val);

    return 0;
}