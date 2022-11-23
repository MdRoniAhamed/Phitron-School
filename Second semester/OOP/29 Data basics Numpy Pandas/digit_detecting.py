from sklearn.datasets import load_digits
from sklearn.metrics import plot_confusion_matrix
from sklearn.metrics import confusion_matrix
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
import matplotlib.pyplot as plt
digits = load_digits()
# print(digits.data.shape)
# print(digits.data.ndim)
# print(digits.data.size)
# print(dir(digits))


# plt.gray()
# print(digits.data[0])
# for i in range(0,5):
#     plt.matshow(digits.images[i])
#     plt.show()

X = digits.data
Y = digits.target
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)
model = LogisticRegression()
output = model.fit(X_train, Y_train)

# manual spot testing
# print('target value of the test: ', digits.target[1705])
# result = model.predict([digits.data[1705]])
# print('Test result:',result)
accuracy = model.score(X_test, Y_test)
# print(accuracy)

Y_predicted = model.predict(X_test)
confusion = confusion_matrix(Y_test, Y_predicted)
# print(confusion)
plot_confusion_matrix(model, X_test, Y_test)
plt.show()
