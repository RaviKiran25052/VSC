graph = {
	'A' : ['B', 'C'],
	'B' : ['A', 'D', 'E'],
   'C' : ['A', 'F'],
   'D' : ['B', 'G', 'H'],
   'E' : ['B'],
   'F' : ['C', 'I', 'J'],
   'G' : ['D'],
   'H' : ['D', 'K'],
   'I' : ['F'],
   'J' : ['F', 'L'],
   'K' : ['H'],
   'L' : ['J']
}
def dls(start,depth,limit,goal,stack):    
   stack.append(start)
   if start == goal:
      return stack
   if depth == limit:
      return False
   for neighbour in graph[start]:
      if dls(neighbour,depth+1,limit,goal,stack):
         return stack
      stack.pop()
   return False
start = 'A'
depth = 0
limit = int(input('Enter the limit : '))
goal = input("Enter the Goal node : ")
print(" --> ".join(dls(start,depth,limit,goal,[])))