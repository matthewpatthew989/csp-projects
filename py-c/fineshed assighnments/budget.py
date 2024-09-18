print("this is your new finacial calculator")
income = input("how much do you make a month? ")
rent = input("whats your rent? ")
utilitys = input("how much do you spend on utilitys? ")
groseries = input("how much on groseries? ")
transportation = input("how much on transport? ")
expenses = rent+utilitys+groseries+transportation
savings = income*.2
total = income-expenses-savings
print("your income is", income)
print("here are your savings", savings)
print("here are your expenses", expenses)
print("heres what you have left to spend", total)
prent = rent/income
putilities = utilitys/income
pgroseries = groseries/income
ptransportation = transportation/income
print("this is the percent of your rent out of your income", prent)
print("this is the percent of your utilitys out of your income", putilities)
print("this is the percent of your groseries out of your income", pgroseries)
print("this is the percent of your transportation out of your income", ptransportation)