n = int(input())
student_marks = {}
for _ in range(n):
    name, *line = input().split(',')
    scores = list(map(float, line))
    student_marks[name] = scores
query_name = input()
print(student_marks)
if query_name in student_marks:
    scores=student_marks[query_name]
    print(scores)
    average=sum(scores)/len(scores)
    print(format(average,".2f"))