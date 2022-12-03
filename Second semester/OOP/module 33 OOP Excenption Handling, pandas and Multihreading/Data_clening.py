# Data Cleaning
# dropna(), fillna()
import pandas as pd     
df = pd.read_csv("diabetes.csv", index_col='Outcome')
df_head = df.head()
# print(df_head.isnull())
# print(df_head.dropna())
# print(df_head.fillna(0))

dct = {'name':"Roni",'age':34}
dc = pd.DataFrame(dct,index=['first'])
print(dc)