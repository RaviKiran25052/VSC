def intreverse(n):
   l=0
   r=0
   while(n>0):
      l = (n % 10)
      n=n // 10
      r=(r * 10) + l
   return r
print(intreverse(1234))