
print("this is your new finacial calculator")
income = float (input("how much do you make a month? "))
rent = float (input("whats your rent? "))
utilitys = float (input("how much do you spend on utilitys? "))
groseries = float (input("how much on groseries? "))
transportation = float (input("how much on transport? "))
expenses = rent+utilitys+groseries+transportation
savings = income*.2
total = income-expenses-savings
print("your income is", income)
print("here are your savings", savings)
print("here are your expenses", expenses)
print("heres what you have left to spend", total)
def percent(type,amount):
    per = amount/income*100
    return f"{type} is {per}% of your income"

print(percent("rent",rent))
print(percent("utillities",utilitys))
print(percent("grosseries",groseries))
print(percent("transportation",transportation))