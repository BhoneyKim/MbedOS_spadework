# Where could we import `mbed-os`?

## Where is the latest mbed-os library?

0. Context
   1. Web IDE
      > thru Web IDE( ide.mbed.com ), we have 2 options to import library which are 'Import Wizard' and 'Import from URL'.
      Although Import Wizard is useful, there's no appropriate library.

      Using the second option, which is 'Import from URL', you could import officially latest library from [`ARMmbed/mbed-os` github](https://github.com/armmbed/mbed-os)
      
   2. MBED CLI
      > Mbed CLI support `mbed new` command but, its speed is too slow to wait. so, the easier way is just import it with Web IDE as we checked right before, and then use `mbed import` command that clone your Web IDE's project into local CLI environment.