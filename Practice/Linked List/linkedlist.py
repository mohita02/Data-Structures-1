# Node class
class Node:
    # Function to initialize the node object
    def __init__(self,data):
        self.data = data
        self.next = None

# This class contains a Node object
class LinkedList:
    # Function to initialize head
    def __init__(self):
        self.head = None
    
    # Print function
    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data,end="-"),
            temp = temp.next
        print("x")
        
# Code execution starts here
if __name__ == "__main__":
    # Start with an empty list
    llist = LinkedList()

    # Assigning values
    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    # Linking the nodes together
    llist.head.next = second
    second.next = third
    third.next = None

    # Calling the print function
    llist.printList()



