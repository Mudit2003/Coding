def quickLeft(Array , left , right ): 
	print("Start:Left")
	print(Array)
	pivot = left 
	while right!=pivot and Array[right]>=Array[pivot]:
		right -= 1
	if right == pivot : 
		return pivot
	Array[right],Array[pivot] = Array[pivot],Array[right]
	print("End:Left")
	print(Array)
	return quickRight(Array,left,right)
	
def quickRight(Array , left , right) : 
	print("Start:Right")
	print(Array)
	pivot = right
	while left!=pivot and Array[left]<=Array[pivot]:
		left += 1 
	if left == pivot :
		return pivot 
	Array[left],Array[pivot]=Array[pivot],Array[left]
	print("End:Right")
	print(Array)
	return quickLeft(Array,left,right)

def quickSort(Array,beg,end):
	
	if beg>=end:
		return Array 
	pivot = quickLeft(Array , beg , end )
	print("Left Half")
	quickSort(Array , beg , pivot-1)
	print("Right Half")
	quickSort(Array , pivot+1 , end)
	return Array 







Array = [10,9,8,7,5,4,3,2,1]
quickSort(Array,0,len(Array)-1)
print(Array)

