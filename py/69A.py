n = int(input())
xVal = 0
yVal = 0
zVal = 0
for i in range(n):

    force = input()
    force = force.rsplit(" ")
    xVal = xVal+int(force[0])
    yVal = yVal+int(force[1])
    zVal = zVal+int(force[2])


resultant = [xVal, yVal, zVal]
if(resultant.count(0) == 3):
    print("YES")
else:
    print("NO")
