import pandas as pd
import json
import math


def calculate_mean(data):
    sum = 0
    len1 = 0
    for val in data:
        sum += val
        len1 += 1
    mean = sum/len1
    return mean


data = pd.read_csv("./Datasets/salary.csv")
header = data.columns.values
# print(data[header[0]])
# print(data["Years of Experience"])

X = data[header[0]]
Y = data[header[1]]
X = X.truncate(0,4899)
Y = Y.truncate(0,4899)
X_mean = calculate_mean(X)
Y_mean = calculate_mean(Y)
upper = 0
lower = 0
for index in range(len(X)):
    upper += (X[index] - X_mean) * (Y[index]-Y_mean)
    lower += math.pow(X[index]-X_mean, 2)
m = upper/lower
c = Y_mean - (m * X_mean)

trained_data = {}
trained_data['m'] = m
trained_data['c'] = c
trained_data["Y_mean"] = Y_mean
with open('./trained/trained_data.txt', 'w') as file:
    file.write(json.dumps(trained_data))