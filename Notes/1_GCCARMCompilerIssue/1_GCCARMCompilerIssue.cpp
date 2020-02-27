#include "mbed.h"


int main()
{
    unsigned long long int count = 0;
    while (flag)
    {
        count++;
    }
    pc.printf("%u\r\n", count);
    // Output
    // Compiled with MbedCLI = 12477664
    // Compiled with WebIDE = 14285610
}