age = int(input("what is your age: "))

if age >= 18:
    print("you are old enough to vote!")
elif age >= 16:
    print("you are old enough to drive!")
elif age >= 15:
    print("you are old enough to get a learners permit!")
elif age >= 5:
    print("you are old enough to go to school!")
else:
    print("you cant do anything:(")