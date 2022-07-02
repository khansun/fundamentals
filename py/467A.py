rooms = int(input())
accomodation = 0
for i in range(rooms):
    memberCapacity = input()
    memberCapacity = memberCapacity.rsplit(" ")
    freeSeats = int(memberCapacity[1]) - int(memberCapacity[0])
    if(freeSeats > 1):
        accomodation = accomodation + 1

print(accomodation)
