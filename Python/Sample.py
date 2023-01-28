# from queue import PriorityQueue
# q = PriorityQueue()
# print(q.empty())
# q.put(['Ravi',4])
# q.put(['Mani',3])
# q.put(['Sanju',6])
# q.put(['Partha',5])
# q.put(['Likki',7])
# print(q.get()[1])
# print(q.get()[1])
# print(q.get()[1])
# print(q.get()[1])
# print(q.get()[1])
# print(q.empty())
# open = []
# closed = []

# def bfs(open,closed, graph, src):
#    closed.append(src)
#    open.append(src)
#    while open:
#       s = open.pop(0)
#       for n in graph[s]:
#          if n not in open and closed:
#             open.append(n)
#             closed.append(n)
#    return open

def Astar(start_node, stop_node):
   open_set = set(start_node) 
   closed_set = set()
   g = {} 
   parents = {}
   g[start_node] = 0
   parents[start_node] = start_node
   while len(open_set) > 0:
      n = None
      for v in open_set:
         if n == None or g[v] + heuristic(v) < g[n] + heuristic(n):
            n = v
      if n == stop_node or Graph_nodes[n] == None:
         pass
      else:
         for (m, weight) in get_neighbors(n):
            if m not in open_set and m not in closed_set:
               open_set.add(m)
               parents[m] = n
               g[m] = g[n] + weight
            else:
               if g[m] > g[n] + weight:
                  g[m] = g[n] + weight
                  parents[m] = n
                  if m in closed_set:
                     closed_set.remove(m)
                     open_set.add(m)
      if n == None:
         print('Path does not exist!')
         return None
      if n == stop_node:
         path = []
         while parents[n] != n:
            path.append(n)
            n = parents[n]
         path.append(start_node)
         path.reverse()
         print('Path found : '+" --> ".join(path))
         return path
      open_set.remove(n)
      closed_set.add(n)
   print('Path does not exist!')
   return None
   
def get_neighbors(v):
   if v in Graph_nodes:
      return Graph_nodes[v]
   else:
      return None
   
def heuristic(n):
   H_dist = {
      'S': 5,
      'A': 11,
      'B': 6,
      'C': 99,
      'D': 1,
      'E': 7,
      'F': 4,
      'G': 0,
      'H': 2
	}
   return H_dist[n] 
Graph_nodes = {
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