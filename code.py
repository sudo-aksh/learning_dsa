# for print the nth fibbonacci number 
# using loops first 
def fibo_term_1(n):
    a = 0
    b = 1
  
    if n <=0:
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
    
    if n ==1:
        print(0)
        return
    elif n ==2:
        print(1)
        return
    elif n<=0:
        print("enter only positve numbers.")
    else:
        def fibo(a,b,c):
            if c ==n:
               print(b)
            else:
                return fibo(b,b+a,c+1)          
                        
        return fibo(0,1,2)


# optimised apporch using recursion

def fibo_term_3(n):
    if n<=1:
        return n
    return print(fibo_term_3(n-1) + fibo_term_3(n-2))

fibo_term_1(9)
fibo_term_2(9)
fibo_term_3(9)