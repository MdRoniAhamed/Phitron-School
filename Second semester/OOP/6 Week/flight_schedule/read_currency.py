import csv
with open('./data/currencyrates.csv', 'r') as file:
    lines = csv.reader(file)
    for line in lines:
        if 'Bangladesh' in line[0]:
            bdt = float(line[3])
            usd = float(line[2])
            print(usd * 5000)
            print(bdt * 50)
            print()
            print(line)
# HomeWork
# USD 50$ in BDT 
# BDT 5000 tk to convert USD.