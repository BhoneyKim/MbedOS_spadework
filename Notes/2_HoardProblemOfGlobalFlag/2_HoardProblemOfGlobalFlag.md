# Hoard Problem Of Global Flag
## Why global flag can't break main loop?

0. System Environment
   1. Hardware
      * Window10
      * [NUCLEO-F411RE](https://os.mbed.com/platforms/ST-Nucleo-F411RE/)
   2. Software (Tested with Both Environment)
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

2. By using sterm, the output is as follows:

   ```
   start
   ```

3. When you change `flag` variable into `volatile bool` type, the the output is as follows:
   ```
   start
   end
   ```
## Why it happens?
* In the short main loop, the value of `flag` variable is stored and handled at the register rather than accessing memory, I guess. So there's no action when the actual data of `flag` changed. More precisely, eventhough the value of `flag` variable changed, the register value isn't affected until it reload value from the memory. 
 

# Remaining works
   - [ ]  Checking register value.