# for print the nth fibbonacci number 
# using loops first 

a = 0
b = 1

n = int(input("which nth fibo num you want to print:"))

if n <0:
    print("enter only positive numbers.")
elif n == 0:
    print(0)
elif n == 1:
    print(1)
else:

    for i in range(n-2):
        new = a+b
        a = b
        b = new

    print(new)
