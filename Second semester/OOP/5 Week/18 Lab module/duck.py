# from msilib.schema import tables
from unicodedata import name

class School:
    def __init__(self, name) -> None:
        self.schoolName = name
    
    def say_hello(self):
        print("Hello from School")

class Teacher:
    def __init__(self, name) -> None:
        self.teacherName = name
    def say_hello(self):
        print("Hello from Teacher")

    def entry_student(self, studentObj):
        self.students.append(studentObj)


class Student(Teacher):
    def __init__(self, name, Obj) -> None:
        self.studentName = name
        Obj.say_hello()

school = School("Trust School")
teacher = Teacher("Solaiman sir")
student = Student("Roni",school)
    

    
    # def entry_in_a_teacher(self, teacherObj):
    #     teacherObj.students.append(self)

    # def __repr__(self) -> str:
    #     return f"Student({self.studentName})"



# solaman_sir = Teacher("Solaman Sir")
# sojib_sir = Teacher("sojib Sir")
# ms_rahima = Teacher("Ms Rahima")

# student = Student("Emran")
# student.entry_in_a_teacher(sojib_sir)
# student.entry_in_a_teacher(ms_rahima)
# print(sojib_sir.students)
# print(ms_rahima.students)
