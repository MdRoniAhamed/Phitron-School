from unicodedata import name


class School:
    def __init__(self, name) -> None:
        self.schoolName = name
    
    def say_name(self):
        print(f"Hello, I am {self.schoolName}\n")

    def __repr__(self) -> str:
        return f"School({self.schoolName})"


class Teacher:
    def __init__(self, name) -> None:
        self.teacherName = name
    
    def say_name(self):
        print(f"Hello, I am {self.teacherName}\n")

    def __repr__(self) -> str:
        return f"Teacher({self.teacherName})"


class Student(Teacher, School):
    def __init__(self, name, teacherName, schoolName) -> None:
        Teacher.__init__(self, teacherName)
        School.__init__(self, schoolName)
        self.studentName = name

    def say_name(self):
        print(f"Hello, I am {self.studentName}\n")

    def __repr__(self) -> str:
        return f"Student({self.studentName})"


student = Student("Abdullah", "MS Rahima", "Trust School")
print(student.teacherName, student.schoolName)
student.say_name()