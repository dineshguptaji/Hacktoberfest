package implementation;
import myinterface.SinglyCircularADT;

import java.sql.SQLOutput;

public class MySinglyCircularLinkedList implements SinglyCircularADT{
    private Node tail;
    private int size;
    private Object Node;

    public MySinglyCircularLinkedList(){
        tail = null;
        size = 0;
    }

    @Override
    public void addFirst(int element) {
        Node node = null;
        if(isEmpty()){
            tail = node;

            node.setNext((implementation.Node) Node);
        }
        else{
            node.setNext(tail.getNext());
            tail.setNext(node);
        }
        size++;
    }

    @Override
    public int removeFirst() {
        int response = 0; // considering 0 as invalid data
        if(!isEmpty()){

            //response = tail.getNext().getData();
            //tail.setNext(tail.getNext().getNext());
            Node firstNode = tail.getNext();
            if(tail == firstNode){
                //only a single node
                tail = null;}
            else{
                //multiple nodes
                tail.setNext(firstNode.getNext());
            }
            tail.setNext(firstNode.getNext());
            response = firstNode.getData();
            size--;
        }
        return response;

    }

    @Override
    public void atLast(int element) {
        Node node = new Node();
        if(!isEmpty()){
            node.setNext(tail.getNext());
            tail = node;
        }
        else{
            tail = node;
            node.setNext(node);
            tail = node;
        }

    }

    @Override
    public boolean isEmpty() {
        return tail == null;
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public void traverse() {
        if(!isEmpty()){
        Node temp = tail.getNext();


        while (temp != tail){
            System.out.print(temp.getData() +",");
            temp = temp.getNext();
        }
            System.out.println(tail.getData());
        }

    }

    @Override
    public int sizeByTraversing() {
        int count = 0;
        if(!isEmpty()){
            Node temp = tail.getNext();


            while (temp != tail){
                System.out.print(temp.getData() +",");
                temp = temp.getNext();
            }
            count++
        }
        return count;
    }
}
