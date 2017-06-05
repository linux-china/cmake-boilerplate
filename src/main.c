#include <stdio.h>
#include <sha1/sha1.h>
#include "welcome.h"

int main() {
    printf("Hello everybody.\n");
    welcome();
    blk_SHA_CTX s1;
    s1.size=111L;
    printf("size: %lld",s1.size);
    return 0;
}