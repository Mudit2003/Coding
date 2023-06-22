class Tree:
    def __init__(self):
        self.root = None
    class Node:
        def __init__(self , key):
            self.key = key 
            self.left = None 
            self.right = None 

    def insert(self , key):
        # now that we have the insertable key 
        x = None 
        y = self.root 
        while y is not None:
            x = y
            if key > y.key:
                y = y.right 
            elif key< y.key:
                y = y.left 
            else:
                print("Not possible to insert duplicate key")
                return 
        if key < x.key:
            x.left = self.Node(key) 
        else:
            x.right = self.Node(key) 

    def insertRec(self , key , root):
        if root is None:
            return self.Node(key)
        if key > root.key :
            root.right = self.insertRec(key , root.right)
        elif key < root.key :
            root.left = self.insertRec(key , root.left)
        else :
            return None

    def minimum(self , x):
        grandpar = x
        par = x.right
        x = par.left 
        while x is not None:
            grandpar = par 
            par = par.left
            x = par.left
        data = par.data
        if grandpar is not x:
            grandpar.left = par.right 
        else:
            grandpar.right = par.right
        return data
    
    def transplant(self , u , v , par):
        if par is None: 
            self.root = v
        elif u == par.left:
            par.left = v 
        else:
            par.right = v 
    
    def delete(self, key):
        x = None 
        y = self.root 
        while y.key is not key and y is not None:
            x = y
            if key > y.key:
                y = y.right 
            elif key< y.key:
                y = y.left 
        # three distinct cases 
        if y.key is key:
            if y.left is None:
                self.transplant(y , y.right , x)
            elif y.right is None:
                self.transplant(y , y.left , x)
            else :
                y.data = self.minimum(y)
            
    def deleteRec(self , key , root ):
        if root is None:
            return None
        if root.key is key:
            if root.left is None:
                return root.right 
            elif root.right is None:
                return root.left 
            else:
                root.data = self.minimum(root)
                return root
        elif key > root.key :
            root.right = self.deleteRec(key , root.right)
        elif key < root.key :
            root.left = self.deleteRec(key , root.left)
        

class RedBlackTree:
    def __init__(self):
        self.root = None 
    class Node:
        def __init__(self , key):
            self.key = key 
            self.left = None 
            self.right = None 
            self.p = None 
            self.color = False # false is red 
    
    def rbInsert(self , key):
        z = self.Node(key)
        y = None 
        x = self.root 
        while x:
            y = x
            if z.key < x.key : 
                x = x.left
            else:
                x = x.right
        z.p = y
        if not y:
            self.root = z 
        elif z.key < y.key:
            y.left = z 
        else:
            y.right = z
        self.rbInsertFixUp(z)
    
    
    def rbInsertFixUp(self , z):
        while not z.p.color:
            if z.p == z.p.p.left:
                y = z.p.p.right 
                # case I 
                if not y.color:
                    z.p.color = True 
                    y.color = True 
                    z.p.p.color = False
                    z = z.p.p 
                # case II 
                elif z == z.p.right:
                    z = z.p 
                    # leftRotate(z)
                z.p.color = True 
                z.p.p.color = False
                # rightRotate(z.p.p)
            else: 
                y = z.p.p.left
                if not y.color:
                    z.p.color = True 
                    y.color = True 
                    z.p.p.color = False  
                    z = z.p.p 
                # case II 
                elif z == z.p.left:
                    z = z.p 
                    # rightRotate(z)
                z.p.color = True 
                z.p.p.color = False 
                # leftRotate(z.p.p)

    def rbDelete(self , z):
        y = z
        y_original_color = y.color 
        if z.left:
            x = z.right 
            self.rbTransplant()

        



if __name__=="main":
    T = RedBlackTree()
    T.rbInsert(5)
    