class TreeNode:
    def __init__(self , data):
        self.data = data 
        self.left = None 
        self.right = None 

def morrisTraversalPreOrder(root):
    curr = root 
    res = []
    while curr:
        if curr.left is None:
            res.append(curr.data)
            curr = curr.right 
        else:
            pre = curr.left 
            while pre.right and pre.right != curr:
                pre = pre.right
            if pre.right is None:
                res.append(curr.data)
                pre.right = curr
                curr = curr.left 
            else:
                pre.right = None 
                curr = curr.right 
    return res

def morrisTraversalInOrder(root):
    curr = root 
    res = []
    while curr:
        if curr.left is None:
            res.append(curr.data)
            curr = curr.right 
        else:
            pre = curr.left 
            while pre.right and pre.right != curr:
                pre = pre.right
            if pre.right is None:
                pre.right = curr
                curr = curr.left 
            else:
                pre.right = None 
                res.append(curr.data)
                curr = curr.right 
    return res

if __name__ == "__main__":
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    root.right.left = TreeNode(6)
    root.right.right = TreeNode(7)
    ls = morrisTraversalPreOrder(root)
    print(ls)