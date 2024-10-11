num = int (input("pick a number "))
one = input("pick a word ")
two = input("pick another word ")
 

for n in range(0,num):
    if n%3 == 0 and n%5 == 0:
        print(one+two)
    elif n%3 == 0:
        print(one)
    elif n%5 == 0:
        print(two)
    else:
        print(n)
    