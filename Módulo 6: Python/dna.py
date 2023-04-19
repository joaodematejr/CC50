import csv
import sys


if len(sys.argv) != 3:
    print("Usage: python dna.py database sequence")
    sys.exit(1)


with open(sys.argv[1], "r") as file:
    reader = csv.reader(file)
    data = [row for row in reader]


with open(sys.argv[2], "r") as file:
    sequence = file.read()


strs = data[0][1:]
counts = [0] * len(strs)
for i in range(len(strs)):
    str = strs[i]
    j = 0
    max_count = 0
    while j < len(sequence):
        count = 0
        if sequence[j:j+len(str)] == str:
            while sequence[j:j+len(str)] == str:
                count += 1
                j += len(str)
            if count > max_count:
                max_count = count
        else:
            j += 1
    counts[i] = str(max_count)

for row in data[1:]:
    if row[1:] == counts:
        print(row[0])
        sys.exit(0)

print("No match")
