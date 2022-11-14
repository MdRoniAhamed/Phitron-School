from itertools import permutations


T = int(input())
for t in range(T):
    m = input()
    num = m.split(" ")
    N = int(num[0])
    K = int(num[1])
    list = []
    for i in range(N):
        list.append(chr(ord('A')+i))
    count = 0
    print(f"Case {t+1}:")
    for i in permutations(list):
        count += 1
        for j in i:
            print(j,end='')
        print()
        if count >= K:
            break