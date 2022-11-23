import numpy as np

one_d = np.array([1, 2, 3, 4, 5, 6])
two_d = np.array([[1, 2], [3, 4],[5, 6]])
three_d = np.array([
    [[1, 2, 3], [4, 5, 6]],
    [[1, 2, 3], [4, 5, 6]],
    [[1, 2, 3], [4, 5, 6]]

])

shaped = one_d.reshape(3,2)
change = np.flip(shaped)
add = two_d * change
back_to_one = add.flatten()
""" # size 
print(three_d.size) """

""" # dimension 
print(three_d.ndim) """

# Shape
# print(three_d.shape)
# print(two_d.shape)

# DAta type
# print(three_d.dtype)

diff_type = back_to_one.astype('f')
back_to_one_again = np.copy(back_to_one)
sorted = np.sort(back_to_one_again)
print(sorted)
