from cmath import inf
from heapq import *

def dijsktra(graph,s,d):
   nodes = {'A':{'cost':inf,'pred':[]},
   'B':{'cost':inf,'pred':[]},
   'C':{'cost':inf,'pred':[]},
   'D':{'cost':inf,'pred':[]},
   'E':{'cost':inf,'pred':[]},
   'F':{'cost':inf,'pred':[]}
   }
   nodes[s]['cost'] = 0
   visited = []
   temp = s
   for i in range(5):
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

graph = {
'A':{'B':2,'C':4},
'B':{'A':2,'C':3,'D':8},
'C':{'A':4,'B':3,'E':5,'D':2},
'D':{'B':8,'C':2,'E':11,'F':22},
'E':{'C':5,'D':11,'F':1},
'F':{'D':22,'E':1}
}
source = input("Enter the soue for finding the short path : ")
for dination in graph:
  dijsktra(graph,source,dination)