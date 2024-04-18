# Fun with Flags

## Solution

- We were given a text file with a with a lot of strings in the flag format and a `SHA 256` hash at the bottom

- We figured that the hash would correspond to the real flag

- We used hashcat and inputted the initial file as the wordlist

```
hashcat -m 1400 -a 0 '40d837cb7b2d41a543e4f46fb2d69164ee9e54e02703f11d0ea507b315426fde' fun-with-flags.txt
```

- This got us the real flag

## Flag

```
cruXcrypt{tasks_connectors}
```
