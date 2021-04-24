class Classes:
    count=0
    clsList=[]
    def __init__(self,name):
        self.name=name
        self.stu=[]
    def addClass(cls):
        Classes.clsList.append(cls)
    def addStudent(self,Student):
        self.stu.append(Student)
        self.count+=1
    def delStudnet(self,Student):
        self.stu.remove(Student)
    def printClass():
        print([item.name for item in Classes.clsList])
    def printf(self):
        i=0
        print(self.name,":")
        while i<self.count:
            self.stu[i].printf()
            i+=1
class Student:
    def __init__(self,name,sex):
        self.name=name
        self.sex=sex
    def printf(self):
        print("Student name:",self.name,"Student sex:",self.sex)
s1=Student('David','male')
s2=Student('Victor','male')
s3=Student('Eric','male')
s4=Student('Phil','male')
s5=Student('Harry','female')
s6=Student('Paul','female')
s7=Student('Edinson','female')
s8=Student('Juan','female')
c1=Classes("Computer Science and Technology 5")
c2=Classes("Computer Science and Technology 6")
Classes.addClass(c1)
Classes.addClass(c2)
c1.addStudent(s1)
c1.addStudent(s2)
c1.addStudent(s5)
c1.addStudent(s6)
c2.addStudent(s3)
c2.addStudent(s4)
c2.addStudent(s7)
c2.addStudent(s8)
Classes.printClass()
c1.printf()
c2.printf()