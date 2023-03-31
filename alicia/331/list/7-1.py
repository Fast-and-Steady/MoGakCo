students = 5

scores = []
score_sum = 0

for i in range(students):
    value = int(input("input value: "))
    scores.append(value)
    score_sum += value

score_avr = score_sum / len(scores)
high_scores = 0
for i in range(len(scores)):
    if scores[i] >= 80:
        high_scores += 1

print("the average score is :", score_avr)
print("there are", high_scores, "students whose score is 80 or higher.")