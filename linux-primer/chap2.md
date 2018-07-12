# Chapter 2
> When power is first applied to desktop a software program called BIOS takes control of the processor  

---

Bios is complex set of system-configuration software routines that have knowledge of low-level details of hardware architecture.  
BIOS initialise SDRAM, I/O and graphics controllers  
All bootloaders have a command to load and execue an opering system image  

## Flash Memory
Flash memory is divided into many erasable blocks. We can chnage binary 1 to 0 by using software logic but we can not do the same with 0 to 1. We need to erase whole block.  
boot-block - Flash memory which have nonunifrom erasable blocks.  

### Flash memory layout
- Top of bootloader
-   - Bootloader
-   - Kernel
-   - Ramdisk
-   - Upgrade space  
-
---

