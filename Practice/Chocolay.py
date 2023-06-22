# a chocolate bar - m x n 
# can be divided along horizontal or vertical axis 
# for each individual square cost is x * y
# find min sum(x*y)

def chocolay(m : int , n: int , x: list[int] , y: list[int])->int : 
    # the idea is that a cut will wield one more piece than the usual 
    # cut A was vertical so the next cut could be either horizontal or vertical 
    # so if there is a choice between horizontal and vertical cut then first go with the one with max value so that the min value will go to the pieces with lower value 
    # it always has to be that all the cuts are going to be made atleast once 
    # what really matters is the order in which we do that 
    

