input = (input())
input = input.rsplit(" ")
k = int(input[0])
dollars = int(input[1])
bananas = int(input[2])
cost = 0
for i in range(1, bananas+1):
    cost = cost + i*k

borrow = cost-dollars
if(borrow < 0):
    print(0)
else:
    print(borrow)
