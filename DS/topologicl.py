graph = {'0': set(['1', '5']),
         '1': set(['5', '4']),
         '2': set(['1','3']),
         '3': set(['1','4']),
         '4': set(['5']),
         '5': set([]),
         '6':set(['5','4'])}
indegree = {}
for key,value in graph.items():
	if key not in indegree:
		indegree[key] = 0
	for i in value:
		if i not in indegree.keys():
			indegree[i] = 0
		indegree[i] +=1
print(indegree) 
#def dfs():
def topoLo_(indegree):
	
