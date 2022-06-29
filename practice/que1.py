nw = int(input())
w = []
w =list(map(int,input().split()))
na = int(input())
a =list(map(int,input().split()))
check = 0
s = 0
if w[0]>a[0]:
	check = 1
i = 0
j=0
while i<nw and j<na:
	if(w[i]<a[j]):
		if(check == 1):
			s += 1
			check = 0
		i += 1
	else:
		if(check == 0):
			s +=1
			check = 1
		j +=1 
while i<nw:
	if(check ==1):
		s += 1
	i += 1
	
while j<na:
	if(check ==0):
		s += 1
	j = j+1

print(s)
print("\n")
