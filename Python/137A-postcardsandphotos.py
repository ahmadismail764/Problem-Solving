s = input()
print(sum([(len(i)+4) // 5 for i in (s.split('C') + s.split('P'))]))
