for O(1) space we can use moore voting algo
intitlaize hero as arr[0] and its power as 1
iertae from 1 to n-1
if elem == hero then power ++
else
power --
also if power==0 then new hero =arr[i]