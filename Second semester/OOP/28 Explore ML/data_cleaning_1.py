from ensurepip import version
import pandas
import matplotlib.pyplot as plt

data = pandas.read_csv('iphone_prices.csv')
plt.scatter(data['version'],data['price'])
plt.show()