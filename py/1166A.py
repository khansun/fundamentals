stoppages = int(input())
totalHumans = list()
population = 0
for i in range(stoppages):
    entryExit = input()
    entryExit = entryExit.rsplit(" ")
    population = population+(int(entryExit[1])-int(entryExit[0]))
    totalHumans.append(population)

print(max(totalHumans))
