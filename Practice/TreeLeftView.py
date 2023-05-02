def LeftView(root):
    q = Queue()
    res = list()
    q.put(root)
    while(q.empty()==False):
        curr = q.get()
        size = q.qsize()
        if(curr.left!=None):
            q.put(curr.left)
        if(curr.right!=None):
            q.put(curr.right)
        res.append(curr.data)
        for i in range(size):
            curr = q.get()
            if(curr.left!=None):
                q.put(curr.left)
            if(curr.right!=None):
                q.put(curr.right)
    return res
