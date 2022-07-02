sum = input()
sum = sum.rsplit("+")
newsum = list()
sum.sort(reverse=True)
for i in range(len(sum)):
    newsum.append(sum.pop())
    newsum.append("+")
newsum.pop()
print(''.join(newsum))
