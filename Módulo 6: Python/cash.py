
quarters = 25
dimes = 10
nickels = 5
pennies = 1

change = float(input("Change owed: "))

cents = round(change * 100)

num_quarters = cents // quarters
cents -= num_quarters * quarters

num_dimes = cents // dimes
cents -= num_dimes * dimes

num_nickels = cents // nickels
cents -= num_nickels * nickels

num_pennies = cents // pennies

total_coins = num_quarters + num_dimes + num_nickels + num_pennies

print(total_coins)
