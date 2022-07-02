s = input()
n = len(s)


def find(word, letter, j, n):
    index = -1
    for i in range(j, n):
        if(word[i] == letter):
            index = i
            break

    return index


h = find(s, "h", 0, n)
e = find(s, "e", h, n)
l1 = find(s, "l", e, n)
l2 = find(s, "l", l1+1, n)
o = find(s, "o", l2, n)

if(h == -1 or e == -1 or l1 == -1 or l2 == -1 or o == -1):
    print("NO")
else:
    print("YES")
