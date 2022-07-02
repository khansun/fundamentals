caps = input()
upperCaps = caps.upper()
if(caps == upperCaps):
    print(caps.lower())

elif(caps[1:] == upperCaps[1:]):
    print(caps.capitalize())
else:
    print(caps)
