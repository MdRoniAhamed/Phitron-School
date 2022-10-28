size = int(input())
lists = []
for i in range(0, size):
    student_name = input('\n')
    mark = input()
    student_id = i
    lists.append({'student_id': i, 'student_name': student_name, 'mark': mark})

print()
with open('data.txt', 'w') as file_write:
    file_write.write('')

for student_info in lists:
    with open('data.txt', 'a') as file_write:
        file_write.write(str(student_info)+'\n')
