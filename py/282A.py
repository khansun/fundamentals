statements = int(input())
x = 0
plus = "++"
for i in range(statements):
    state = input()
    if(plus in state):
        x = x+1
    else:
        x = x-1

print(x)
