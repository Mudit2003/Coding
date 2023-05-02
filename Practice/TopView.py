def topView(root):
    q = [] # queue for level order traversal 
    hd = l = r = 0 
    q.append((root.data , hd))
    left = [] # stack to print left in reverse 
    right = [] # list 
    while(q):
        node , hd = q[0]
        if hd < l :
            left.append((node.data , hd))
            l = hd 
        if hd > r:
            right.append((node.data , hd))
            r = hd
        if(node.left is not None):
            q.append((node.left , hd - 1))
        if(node.right is not None):
            q.append((node.right , hd+1))
        q.pop(0)
    res = []
    while(left):
        res.append(left[-1])
        left.pop()
    res.append(root.data) 
    for i in right:
        res.append(i)       