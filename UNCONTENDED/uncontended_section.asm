;; UNCONTENDED

;;uncontended memory from 32768 to 49151
;; 16383 bytes total



SECTION code_user
; assign read-only executable code to this section
;----------------------------------
    PUBLIC _border_Change_uncontended
_border_Change_uncontended:
    ld a, l     ;contents of l are loaded into a
    out (254), a
ret

SECTION rodata_user
; assign read-only data to this section
;; Variables
;; define C variables here to force placement in memory
PUBLIC _xyzzy2
_xyzzy2:
    defb 254
;----------------------------------

SECTION smc_user
; assign self-modifying code to this section
;----------------------------------

SECTION data_user
; assign non-zero initial data to this section
;----------------------------------

SECTION bss_user
; assign zero initial data to this section
;----------------------------------


