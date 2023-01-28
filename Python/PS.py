def isprime(n):
	fl = []
	for i in range(2, n+1):
		if n % i == 0:
			fl = fl + [i]
	return len(fl) == 1

def sumprime(l):
   s = 0
   for i in l:
      if isprime(i):
        s += i
   return s