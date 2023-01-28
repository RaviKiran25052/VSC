from queue import PriorityQueue

path = []
def best_first_search(Src, target, n):
	visited = {chr(i+65) : False for i in range(0,n)}
	pq = PriorityQueue()
	pq.put((0, Src))
	visited[Src] = True
	while pq.empty() == False:
		u = pq.get()[1]
		path.append(u)
		if u == target:
			break
		for v, c in graph[u]:
			if visited[v] == False:
				visited[v] = True
				pq.put((c, v))
	return path
graph = {
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

Nodes = 9
source = 'S'
target = 'E'
print(" --> ".join(best_first_search(source, target, Nodes)))