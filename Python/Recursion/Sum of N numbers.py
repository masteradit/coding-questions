# Sum of N numbers using recursion

def sumOfN(num):

    if num == 1:
        return 1
    
    return (sumOfN(num-1) + num)
    
num = int(input('Enter a number'))
print(sumOfN(num))
