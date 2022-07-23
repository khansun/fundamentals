
tests = int(input())

for j in range(tests):
    eq=0
    n = int(input())
    arr =  list(map(int, input().strip().split()))[:n]
    i = 0
    while(i<n-1):
        
        if(i>0):
            
            if (arr[i]==arr[i-1]):
                eq += 1
                        
        i+=2
    print(eq)    

