import pandas as pd

# df = pd.read_csv("diabetes.csv")
df = pd.read_csv("diabetes.csv", index_col='Outcome')
df_head = df.head()
# print(df.head())
# print(df.describe())
# print(df_head['Pregnancies'].sum())
# print(df_head.groupby("Pregnancies").sum())
# print(df_head.groupby("Pregnancies").mean())
# print(df_head.groupby("Pregnancies").value_counts())
# print(df_head["Outcome"].value_counts())
# print(df_head)
# print(df_head.loc[0])
# df_head.sort_values(["Age","BMI"],ascending=[True,False], inplace=True)
print(df_head)