n = int(input())
l = {i:[] for i in range(n)}

prerequisites = [[1,0],[0,1]]

for i in prerequistes:
	l[i[1]].append(i[0])
visited = set()	
def DFS(v):
	if v in visited:
		return False
	if l[v] == []:
		return True
	visited.add(v)
	for pre in l[v]:
		if not dfs(pre):
			return false
	visited.remove(v)
	l[v] = []
	return True	
for i in l
	

