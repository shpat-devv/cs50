'''
get amount of change
calculate how much of each coin is needed to fill that change
return the overall amount
'''

from cs50 import get_float

available_change = [0.01, 0.05, 0.10, 0.25]

change_needed = get_float("Change: ")

while change_needed < 0:
    change_needed = get_float("Change: ")

change_given = 0.0  # change status
coins_given = 0  # coin amount staus

index = len(available_change) - 1  # current index (idk why i added this comment)

while change_given != change_needed:
    if round(change_given + available_change[index], 2) <= change_needed:
        change_given = round(change_given + available_change[index], 2)
        coins_given += 1

        print(
            f"change given: {available_change[index]}, coins given: {coins_given}, over all change: {change_given}")
    else:
        index -= 1


print(coins_given)
