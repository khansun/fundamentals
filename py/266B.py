childernTime = input()
childernTime = childernTime.rsplit(" ")
line = list(input())
for j in range(int(childernTime[1])):
    ex = 1
    while(ex < int(childernTime[0])):
        if(line[ex] == "G" and line[ex-1] == "B"):
            line[ex-1] = "G"
            line[ex] = "B"
            ex = ex+1

        ex = ex+1


print(''.join(map(str, line)))
