#include "mbed.h"

Timeout timeout;

bool flag = true;
void changeFlag(){
    flag = false;
}


int main()
{
    printf("start\r\n");
    timeout.attach(&changeFlag, 1.0f);
    while (flag) {
        
    }
    printf("end\r\n");

    // output
    // start
    // ... (never ends)
    // 
}
