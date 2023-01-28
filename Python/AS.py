def Astar(start, stop):
   open = set(start) 
   closed = set()
   g = {} 
   parents = {}
   g[start] = 0
   parents[start] = start
   while len(open) > 0:
      n = None
      for v in open:
         if n == None or g[v] + heuristic(v) < g[n] + heuristic(n):
            n = v
      if n == stop or Graph[n] == None:
         pass
      else:
         for (m, weight) in get_neighbors(n):
            if m not in open and m not in closed:
               open.add(m)
               parents[m] = n
               g[m] = g[n] + weight
            else:
               if g[m] > g[n] + weight:
                  g[m] = g[n] + weight
                  parents[m] = n
                  if m in closed:
                     closed.remove(m)
                     open.add(m)
      if n == None:
         print('Path does not exist!')
         return None
      if n == stop:
         path = []
         while parents[n] != n:
            path.append(n)
            n = parents[n]
         path.append(start)
         path.reverse()
         print('Path found : '+" --> ".join(path))
         return
      open.remove(n)
      closed.add(n)
   print('Path does not exist!')
   return None
   
def get_neighbors(v):
   if v in Graph:
      return Graph[v]
   else:
      return None
   
def heuristic(n):
   Heuristic_values = {
      'S': 5,
      'A': 11,
      'B': 6,
      'C': 9,
      'D': 1,
      'E': 7,
      'F': 4,
      'G': 0,
      'H': 2
   }
   return Heuristic_values[n] 
Graph = {
   'S' : [('A',3),('B',6),('C',5)],
	 'A' : [('S',3),('D',9), ('E',8)],
	 'B' : [('S',6), ('F',12), ('G',14)],
   'C' : [('A',5), ('H',7)],
   'D' : [('A',9)],
   'E' : [('A',8)],
   'F' : [('B',12)],
   'G' : [('B',14)],
   'H' : [('C',7)]
}
Astar('S', 'G')