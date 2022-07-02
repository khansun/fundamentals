lucky = list(input())
four = lucky.count('4')
seven = lucky.count('7')
luckyNumbers = four+seven
if(luckyNumbers == 4 or luckyNumbers == 7):
    print("YES")
else:
    print("NO")
