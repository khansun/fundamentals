tasks = int(input())
implementations = 0
for i in range(tasks):
    binary = input()
    binary = binary.rsplit(" ")
    if(binary.count('1') > 1):
        implementations = implementations + 1
print(implementations)
