# PWN F111 - Part 3

## Problem

We have to trigger the program to pass the if statement (in the decompiled code below)

```c
...
    if (local_2c == 0) {
      iVar1 = word_sum(local_78);
      iVar2 = word_sum("cruXcrypt{thr3ad5_and_r0p35}");
      if (iVar1 == iVar2 + 0x41) {
        local_80 = 0x33737233763372;
        uVar3 = word_sum(&local_80);
        printf("cruXcrypt{%s_%d_%d}\n",&local_80,(ulong)(local_1c * 0x10 - 1),(ulong)uVar3);
...
```

## Solution

We analyze the `word_sum` function. We note that we need to add the letter `A` to the string `cruXcrypt{thr3ad5_and_r0p35}`.

## Flag

```
cruXcrypt{r3v3rs3_111_614}
```
