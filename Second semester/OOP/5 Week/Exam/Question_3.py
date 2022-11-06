def nearly_equal(a, b):

    if len(a) <= len(b):
        j = 0
        for i in b:
            if a[j] == i:
                j += 1
                if j == len(a):
                    return True
    return False


str = nearly_equal('python', 'perl')
print(str)
str = nearly_equal('perl', 'pearl')
print(str)
