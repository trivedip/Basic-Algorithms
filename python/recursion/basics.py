
def recursive_sum(num):
    # Adds all numbers till entered value recursively
    tot=0
    if num ==1:
        return 1
    else:
        tot= num+ recursive_sum(num-1)
    return tot

def factorial(n):
    # generates factorial recursively
    if n == 1: 
        return 1
    else:
        return n*factorial(n-1);

def fibonachi(n) :
    #generates fibonacci series
    if n==0:
        return 0
    if n==1:
        return 1
    else:
        return n * fibonachi(n-1)

def array_ele(arr):
    if not arr:
        return 
    else:
        print(arr[0])
        array_ele(arr[1:])

def number_of_digits(num):
    tot=0
    if not num:
        return 0
    else:
        tot = 1 + number_of_digits(int(num/10))
    return tot

def sum_of_digits(num):
    if not num:
        return 0
    else:
        return (num%10) + sum_of_digits(num//10)

def reverse_string(str1):
    rev_str=''
    if len(str1) ==0:
        return str1
    else:        
        rev_str =  reverse_string(str1[1:]) + str1[0] 
    return rev_str

def reverse_string(str1):
    #reverse string recursively
    if len(str1) <=1:
        return str1[-1]
    else:        
        return  str1[-1]  + reverse_string(str1[:-1])

def something():
    pass

if __name__ == '__main__':
    # n = input('Enter the number till you want sum of:')
    # print(n)
    print(fibonachi(4))
    arr=[2,5,4,8,5]
    print(array_ele(arr))
    # print(factorial(5))