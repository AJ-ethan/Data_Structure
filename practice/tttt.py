n = int(input())
l = list(map(int,input().split()))
while(len(l)>1):
	s = sum(l)/2
	c = s-0
	p = 0
	for i in range(len(l)):
		if (s-l[i] >= 0 and s-l[i]<c):
			c = l[i]
			p = i
	l.pop(p)
	
print l[0]
	
