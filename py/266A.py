stones = int(input())
stones = list(input/())
for i in range(len(stones)):

    if(stones[i] == stones[i+1]):
        del stones[i]
print(stones)
