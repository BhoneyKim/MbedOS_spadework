# GCCARM Compiler Issue
## Difference between WebIDE Compiler and GCC_ARM (Mbed CLI Compiler)

0. System Environment
   1. Hardware
      * Window10
      * [NUCLEO-F411RE](https://os.mbed.com/platforms/ST-Nucleo-F411RE/)
   2. Software
      * MBED_CLI 1.8.3 ( [GCC_ARM Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads) )
      * [WebIDE](https://ide.mbed.com)

1. I compiled [the code](../1_GCCARMCompilerIssue/1_GCCARMCompilerIssue.cpp) with the command using mbed-cli

    ``` > mbed compile -m NUCLEO_F411RE -t GCC_ARM -f --sterm ```
    
    One of the output is as follows :

    ```
    ...
    [Warning] Compiler version mismatch: Have 6.3.1; expected version >= 9.0.0 and < 10.0.0
    ...
    ```

2. By using sterm which shows UART output from Nucleo Board, there is 12.7% performance lose on MbedCLI
    * Compiled with MbedCLI = 12477664
    * Compiled with WebIDE  = 14285610

# Remaining works
   - [ ]  Can user set latest compiler for MbedCLI?