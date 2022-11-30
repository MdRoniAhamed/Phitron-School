from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plt
import pandas as pd

# step 1: Data load
data = pd.read_csv("HR_comma_sep.csv")
# print(data.shape)
# step 2: missing data for any row and column
# print(data.isnull().values.any())

# step 3: check data type
# print(data.dtypes)
# step 4: check unique value
# print(data.salary.unique())
# print(data.Department.unique())

clean_up_values = {
    'low': 1,
    'medium': 2,
    'high': 3
}
data.replace(clean_up_values, inplace=True)
# print(data)

# step 5: get dummies for the Department
dummies = pd.get_dummies(data.Department)
# print(dummies)

# step 6: merge dummies (dummies column) with the original data
merged = pd.concat([data, dummies], axis='columns')
# print(merge)

# step 7: Drop unnecessary columns
final_data = merged.drop(['Department', 'technical'], axis='columns')
# print('Department' in list(merged.columns))

# step 8: plot data set to see the data relation
# plt.scatter(x=final_data.salary, y= final_data.left)
# plt.scatter(x=final_data.satisfaction_level, y= final_data.left)
# plt.scatter(x=final_data.time_spend_company, y= final_data.left)
# plt.show()

# step 8 : Draw model
X = final_data.drop('left', axis='columns')
Y = final_data.left

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=.2)

model = LogisticRegression()
model.fit(X_train, Y_train)

accuracy = model.score(X_test, Y_test)
# print(accuracy)

result = model.predict([[0.85, 0.87, 6, 232, 5, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 0, 0]])
print(result)
