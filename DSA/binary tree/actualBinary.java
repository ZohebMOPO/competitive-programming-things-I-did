import java.util.LinkedList;
import java.util.Queue;

public class actualBinary {
    static class Node {
        int key;
        Node left, right;

        Node(int key) {
            this.key = key;
            left = null;
            right = null;
        }
    }

    static Node root;
    static Node temp = root;

    static void inorder(Node temp) {
        if (temp == null) {
            return;
        }
        inorder(temp.left);
        System.out.println(temp.key + " ");
        inorder(temp.right);
    }

    static void insert(Node temp, int key) {
        if (temp == null) {
            root = new Node(key);
            return;
        }
        Queue<Node> q = new LinkedList<Node>();
        q.add(temp);

        while (!q.isEmpty()) {
            temp = q.peek();
            q.remove();

            if (temp.left == null) {
                temp.left = new Node(key);
                break;
            } else {
                q.add(temp.right);
            }
        }
    }
    static void deleteDeepest(Node root, Node delNode){
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);

        Node temp = null;

        while(!q.isEmpty()){
            temp = q.peek();
            q.remove();

            if(temp == delNode){
                temp = null;
                return;
            }
            if(temp.right != null){
                if(temp.right == delNode){
                    temp.right = null;
                }
            }
            
        }
    }
}