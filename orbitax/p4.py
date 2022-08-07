# Plase note that external libraries, such as NumPy or Pandas
# are NOT available for this task

# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")


def solution(S):
    # write your code in Python 3.6
    files = S.rsplit('\n')
    for file in files:
        return file
    


with open("input4.txt", 'r') as f:
    S = f.read()

    
print(solution(S))