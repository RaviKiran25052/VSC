def XOR(a,b):
    c = ''
    for l in range(len(a)):
        if a[l] == b[l]:
            c += "0"
        else:
            c += "1"
    return c
def CRC(a, b):
    l = len(a)
    c = l-1
    t = b[:l]
    while(c <= len(b)-1):
        z = 0
        r = XOR(a,t)
        for i in r:
            if i == "0":
                z += 1
            else:
                break
        for i in range(z):
            c += 1
            if c >= len(b):
                return r[-(l-1):]
                break
            else:
                r += b[c]
        r = r[z:]
        t = r
qs = int(input("\nEnter the size of CRC generator : "))
q = input("Enter the CRC generator : ")
b = input("Enter the data frame : ")
d = b + "0"*(qs-1)
r = CRC(q, d)
print("The CRC remainder is :",r)
nd = b + r
print("\nThe deStuffed data was :",nd)
if CRC(q, nd) == "0"*(len(q)-1):
    print("The data was transmitted without ERROR's\n")
else:
    print("The data was not transmitted properly")