nk = input()
nk = nk.rsplit(" ")
scoreboard = list(map(int, input().strip().split()))[:int(nk[0])]
score = scoreboard[int(nk[1])-1]
scoreboard = list(filter(lambda a: a >= score and a != 0, scoreboard))
print(len(scoreboard))
