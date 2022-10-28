class unique_subsets:
    def sub_sets(self, lists):
        lists = sorted(lists)
        return self.sub_sets_find([], lists)

    def sub_sets_find(self, current, lists):
        if lists:
            return self.sub_sets_find(current, lists[1:]) + self.sub_sets_find(current + [lists[0]], lists[1:])
        return [current]


# Input format : 4 5 6
numbers = input().split()
for i, num in enumerate(numbers):
    numbers[i] = int(num)
lists = unique_subsets()
result = lists.sub_sets(numbers)
print(result)
