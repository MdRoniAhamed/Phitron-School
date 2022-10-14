
balance = 690

def total_cost(price,quantity):
    cost = price * quantity
    global balance
    # balance = 100
    # remaining = balance - cost
    # balance = remaining
    # print(remaining)
    balance -= cost
    return cost
print(f'outside balance before: {balance}')

pay = total_cost(10,3)
print(f'outside balance after: {balance}')
print(f'Please pay: {pay}')