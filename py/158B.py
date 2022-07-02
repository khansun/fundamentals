totalgroups = int(input())
groupConfig = list(map(int, input().strip().split()))[:totalgroups]
one = groupConfig.count(1)
two = groupConfig.count(2)
three = groupConfig.count(3)
four = groupConfig.count(4)
taxi = four
taxi = taxi+three
one = one-three
if(one < 0):
    one = 0
couple = two/2
taxi = taxi + int(couple)
if(two % 2 != 0 or (couple < 1.0 and couple > 0.0)):
    one = one+2

taxi = taxi + (one/4)
if(one % 4 != 0):
    taxi = taxi+1
print(int(taxi))
