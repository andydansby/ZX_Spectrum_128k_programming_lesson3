rem copy /b compiled_UNCONTENDED.bin + compiled_CODE.bin  UNCONTENDED.bin
rem appmake +zx -b UNCONTENDED.bin -o uncontended.tap --org 32768 --noloader --blockname uncontended

appmake +zx -b compiled_CODE.bin -o uncontended.tap --org 32768 --noloader --blockname uncontended


appmake +zx -b compiled_CONTENDED.bin -o contended.tap --org 24200 --noloader --blockname contended

rem ok
appmake +zx -b compiled_BANK_00.bin -o bank00.tap --org 49152 --noloader --blockname bank00

bas2tap -a10 -s128K loader.bas basloader.tap

copy /b basloader.tap + bank00.tap + contended.tap + uncontended.tap  1output.tap

del "loader.bas"
del "bank00.tap"
del "uncontended.tap"
del "contended.tap"

move "compiled_BANK_00.bin" "bin\"
move "compiled_CODE.bin" "bin\"
move "compiled_CONTENDED.bin" "bin\"
move "compiled_UNASSIGNED.bin" "bin\"
