
def build(edges):
	graph = {}
	for i in edges:
		a = i[0]
		b = i[1]
		if(a not in graph):
			graph[a] = []
		if(b not in graph):
			graph[b] = []
		graph[a].append(b)
		graph[b].append(a)
	return graph
def bfs_s(edges,nodeA,nodeB):
	graph = build(edges)
	visited = set(nodeA)
	que = [[nodeA,0]]
	
	while(len(que)>0):
		node,dis = que.pop(0)
		
		if (node== nodeB):
			return dis;
		for i in graph[node]:
			if(i not in visited):
				visited.add(i)
				que.append([i,dis+1])
				
	return -1


edges = [
  ['w', 'x'],
  ['x', 'y'],
  ['z', 'y'],
  ['z', 'v'],
  ['w', 'v']
]

result = bfs_s(edges, 'w', 'z')
print(result)	
	
