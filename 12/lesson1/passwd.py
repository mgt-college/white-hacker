#!/usr/bin/python3

import base64

print("Please enter password:")
p = input()

print(base64.b64encode(str(p).encode()))
