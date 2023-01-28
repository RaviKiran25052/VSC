from cmath import inf
from heapq import *

def dijsktra(graph,n,s,d):
   nodes = {}
   l = 65
   for i in range(n):
      nodes.update({chr(l):{'cost':inf,'pred':[]}})
      l += 1
   nodes[s]['cost'] = 0
   visited = []
   temp = s
   for i in range(n-1):
      if temp not in visited:
         visited.append(temp)
         min_heap = []
         for j in graph[temp]:
            if j not in visited:
               cost = nodes[temp]['cost'] + graph[temp][j]
               if cost < nodes[j]['cost']:
                  nodes[j]['cost'] = cost
                  nodes[j]['pred'] = nodes[temp]['pred'] + list(temp)
               heappush(min_heap,(nodes[j]['cost'],j))
      heapify(min_heap)
      temp = min_heap[0][1]
   path = nodes[d]['pred']+list(d)
   final_cost = nodes[d]['cost']
   print("Short Path from ",end = "")
   for i in path:
      print(i+" --> ",end = "")
   print(str(final_cost))
    
graph = {}
vertices = int(input("Enter the No. of vertices : "))
for j in range(vertices):
   v = {}
   l = 65
   n = int(input("Enter the No. of neighbours for "+chr(l+j)+" : "))
   print('Enter the neighbours with cost seperated by ":" ')
   for i in range(n):
      data = input()
      temp = data.split(':')
      v.update({temp[0] : int(temp[1])})
   graph.update({chr(l+j):v})
   l += 1
source = input("Enter the soue for finding the short path : ")
for destination in graph:
  dijsktra(graph,vertices,source,destination)