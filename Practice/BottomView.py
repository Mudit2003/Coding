
#approach is levelOrder Traversal + hashMap and keep track of the leftmost and using the leftmost retrive from hashMap
def bottomView(self , root):
        hashMap = {}
        hd = 0  
        q = [(root , hd)]
        leftMost = 0 
        while(q):
            node , hd = q[0]
            hashMap[hd] = node.data
            if(node.left is not None):
                q.append((node.left , hd-1))
                leftMost = min(leftMost , hd-1)
            if(node.right is not None):
                q.append((node.right , hd+1))
            q.pop(0)
        ret = list()
        while leftMost in hashMap:
            ret.append(hashMap[leftMost])
            leftMost+=1
        return ret
        