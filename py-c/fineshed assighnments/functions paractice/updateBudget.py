
print("this is your new finacial calculator")

def usrinpt(type):
    return f"{type}"

income = float (usrinpt(input("whats your monthly income: ")))
rent = float (usrinpt(input("whats your monthly rent: ")))
utilitys = float (usrinpt(input("whats your monthly utilities: ")))
groseries = float (usrinpt(input("whats your monthly groseries: ")))
transportation = float (usrinpt(input("whats your monthly transportation: ")))
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