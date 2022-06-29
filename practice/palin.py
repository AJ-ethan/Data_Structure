N = int(input())
st = input()
M = int(input())
l = list(map(int,input().split()))
c = 0
for i in l:
	
	s = 0
	end = i
	while(end<=N):
    		
      		check = st[s:end]
      		if(check == check[::-1]):
        		c = c+1
        		print(check)
      		s+=1
      		end+=1
print(c)
