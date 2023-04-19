cc_number = input("Number: ")

digits = [int(d) for d in cc_number]

for i in range(len(digits) - 2, -1, -2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] = (digits[i] % 10) + 1

if sum(digits) % 10 == 0:
    if cc_number.startswith("34") or cc_number.startswith("37"):
        print("AMEX")
    elif cc_number.startswith("4"):
        print("VISA")
    elif cc_number.startswith("5"):
        print("MASTERCARD")
    else:
        print("INVALID")
else:
    print("INVALID")
