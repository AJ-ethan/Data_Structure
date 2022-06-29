# DFS algorithm
def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)

    print(start)

    for next in graph[start] - visited:
        dfs(graph, next, visited)
    return visited
def bfs(graph,start):
	queue = [start]
	#if visited is none:
		#visited = set()
	#visited.add(start)
	visited = set()
	
	#print(start)
	while(len(queue)>0):
		current=queue.pop(0)
		if current not in visited:
			print(current)
		visited.add(current)
		for neigbor in graph[current]:
			if neigbor not in visited:
				queue.append(neigbor)
	print (visited)

	


graph = {'0': set(['1', '2']),
         '1': set(['0', '3', '4']),
         '2': set(['0']),
         '3': set(['1']),
         '4': set(['2', '3'])}

bfs(graph, '0')
