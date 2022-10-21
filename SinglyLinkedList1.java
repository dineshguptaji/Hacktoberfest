import java.util.Scanner;
class Node{
    int data;
    Node next;
}
public class SinglyLinkedList1
{
    Node head;
    SinglyLinkedList1()
    {
        head = null;
    }
    void addNode()
    {
        System.out.println("Enter the integer data");
        Scanner sc1 = new Scanner(System.in);
        int tdata = sc1.nextInt();
        Node newNode = new Node();
        newNode.data = tdata;
        newNode.next = null;

        if(head == null)
        {
            head = newNode;


        }
        else
        {
            Node current = head;
            while(current.next != null){
                current = current.next;
            }
            current.next = newNode;
        }
        System.out.println("Data inserted");


    }
    void deleteNode()
    {
        if(head == null)
        {
            System.out.println("List is empty");
        }
        else{
            System.out.println("enter the element to delete");
            Scanner sc2 = new Scanner(System.in);
            int elementToDelete = sc2.nextInt();
            Node current;
            for(current = head; current != null; current = current.next)
            {
                Node nextNode = current.next;
                if(nextNode.data == elementToDelete)
                {
                    current.next = nextNode.next;
                    nextNode = null;

                }
            }

            }
    }

    }


