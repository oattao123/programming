a = int(input())
b = int(input())
c = int(input())
grading = a + b + c
if (grading >= 80 and grading <= 100):
    print("A")
elif(grading >= 75 and grading <= 79):
    print("B+")
elif(grading >= 70 and grading <= 74):
    print("B")
elif(grading >= 65 and grading <= 69):
    print("C+")
elif(grading >= 60 and grading <= 64):
    print("C")