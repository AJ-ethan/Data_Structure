

def dfs(graph,source):
	stack = [source]
	while(len(stack)>0):
		current=stack.pop()
		print(current)
		a= graph[current]
		for i in a:
			stack.append(i)
def rec_dfs(graph,source):
	print(source)
	for neigbor in graph[source]:
		rec_dfs(graph,neigbor)
def bfs(graph,source):
	queue = [source]
	while(len(queue)>0):
		current=queue.pop(0)
		print(current)
		for neigbor in graph[current]:
			queue.append(neigbor)
		
		

graph = {
'a':['b','c',],
'b':['d'],
'c':['e'],
'd' : ['f'],
'e':[],
'f':[]
}
'''graph = {'0': set(['1', '2']),
         '1': set(['0', '3', '4']),
         '2': set(['0']),
         '3': set(['1']),
         '4': set(['2', '3'])}'''
bfs(graph,'a')
