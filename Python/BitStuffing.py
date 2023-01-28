a = input("\nEnter the data frame : ")
s,r,d = '','',''
c = 0
for i in a: # reading from the string bit by bit
    if i == '1':
        c += 1 # counting number if 1's
        s += i # appending to an empty string
        r += i
    else:
        c = 0 # counting from 0 if "0" occurs
        s += i
        r += i
    if c == 6:
        c = 0
        s = s[:len(s)-1] + '01'  # appending 01 after "11111" iff there are "111111"
        r += '@'
print("bit stuffed Data : "+s)
for i in r:
    if i != '@':
        d += i
print("Data recevied :",d)
if a == d:
    print("\n\tThe data has been recieved without errors.\n")
else:
    print("\n\tERROR\n")