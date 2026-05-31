# for print the nth fibbonacci number 
# using loops first 
def fibo_term_1(n):
    a = 0
    b = 1

   
    if n <0:
        print("enter only positive numbers.")
    elif n == 1:
        print(0)
    elif n == 2:
        print(1)
    else:

        for i in range(n-2):
            new = a+b
            a = b
            b = new

        print(new)


# using recursion

def fibo_term_2(n):
    