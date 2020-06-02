# Calculate Number of paths in n x m matrix using recursion

def path(m, n):
    if m == 1 or n == 1:
        return 1
        
    return path(m-1, n) + path(m, n-1)

m = int(input())
n = int(input())

print(path(m, n))

# Source of question and explaination: https://youtu.be/AqHoXqOgctU
