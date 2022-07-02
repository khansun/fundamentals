inputA = input()
inputB = input()
inputA = inputA.lower()
inputB = inputB.lower()
if(inputA == inputB):
    print(0)
elif(inputA < inputB):
    print(-1)
else:
    print(1)
