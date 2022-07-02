inputS = input()
outputS = inputS.lower()
vowels = "aeiuoy"
for i in range(6):
    outputS = outputS.replace(vowels[i], '')

output = ""
for i in range(len(outputS)):
    output = output + "."+outputS[i]


print(output)
