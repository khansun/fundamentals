
input = list(input())
lucky = list()
lucky.append("4")
lucky.append("7")
an_integer = int(''.join(map(str, input)))
if(set(input) == set(lucky)):
    print("YES")
elif((an_integer % 4) == 0 or (an_integer % 7 == 0)or (an_integer % 47) == 0 or (an_integer%74)==0):
    print("YES")
else:
    print("NO")
