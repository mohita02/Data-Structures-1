class LinkedList{
    Node head; // head of list

    // LinkedList node. The inner class is made static, so that main() can access it.
    static class Node{
        int data; // Data 
        Node next; // Next

        // Constructor
        Node(int d){
            data = d;
        }
    }

    public void printList(){
        Node n = head;
        while(n!=null){
            System.out.print(n.data + " ");
            n = n.next;
        }
        System.out.println();
    }

    // main() metjod to create simple linked list with 3 nodes
    public static void main(String[] args) {
        // Create an empty linked list
        LinkedList llist = new LinkedList();
        
        llist.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);

        llist.head.next = second; // Link first node to the second node
        second.next = third; // second node to thrid
        third.next = null; // and initialize third node as null

        // Calling the print function
        llist.printList();
    }
}