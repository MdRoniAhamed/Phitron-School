# def center_align(filename):
#     lines = filename.split('\n')
#     for line in lines:
#         print(line.center(100))


# center_align("I am sure that the shells are seashore shells. \nSo if she sells seashells on the seashore, \nThe shells that she sells are seashells, \nI am sure She sells seashells on the seashore;")


def center_align(filename):
    with open(filename,'r') as f:
        lines = f.readlines()
        for line in lines:
            new_line = line.center(60)
            print(new_line)

center_align("center.txt")
