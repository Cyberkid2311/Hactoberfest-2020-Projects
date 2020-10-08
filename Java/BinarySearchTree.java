import javax.swing.tree.TreeNode;

public class BinarySearchTree<T extends Comparable<T>>{

    private class TreeNode{
        T key;
        TreeNode left, right, parent;
        public TreeNode(T key){
            this.key = key;
        }
    }
    private TreeNode root = null;


    private void print(TreeNode node){
        if(node == null) return;
        print(node.left);
        System.out.println(node.key);
        print(node.right);
    }

    public void print(){
        print(this.root);
    }
    public boolean add(T key){
        if(this.root == null){
            this.root = new TreeNode(key);
            return true;
        }else{
            TreeNode ite = this.root;
            boolean added = false, found = false;
            while(!found){
                int res = key.compareTo(ite.key);
                if(res==0){
                    found = true;
                }else if(res<0){
                    if(ite.left != null){
                        ite = ite.left;
                    }else{
                        ite.left = new TreeNode(key);
                        added = true;
                    }
                }else{
                    if(ite.right != null){
                        ite = ite.right;
                    } else{
                        ite.right = new TreeNode(key);
                        added = true;
                    }
                }
                
            }
            return added;
        }
    }
    private TreeNode search(T key, TreeNode current){
        if(current == null) return null;
        int res = key.compareTo(current.key);
        if(res == 0){   //key = current.key
            return current;
        }else if(res < 0){  //key < current.key
            search(key, current.left);
        }else{  //key > current.key
            search(key,current.right);
        }
        return null;
    }

    public boolean contains(T key ){
        return search(key, this.root) != null;
    }

    private TreeNode minimum(TreeNode current){
        if(current.left == null){
            return current;
        }else{
            return minimum(current.left);
        }
    }
    public T minimum(){
        if(this.root == null) return null;
        return minimum(this.root).key;
    }
    private TreeNode maximum(TreeNode current){
        if(current.right == null){
            return current;
        }else{
            return maximum(current.right);
        }
    }
    public T maximum(){
        if(this.root == null) return null;
        return maximum(this.root).key;
    }
    private TreeNode predecessor(TreeNode current){
        TreeNode pre = maximum(current.left);
        return pre;
    }
    public T predecessor(T key){
        TreeNode ode = search(key,this.root);
        if(node == null) return null;
        // Si node no tiene predecesor? devolver nulo
        TreeNode preNode = predecessor(node);
        return preNode.key;
    }
    public static void main (String[] args){
        BinarySearchTree<Integer> intBST = new BinarySearchTree<>();
        BinarySearchTree<String> stringBST = new BinarySearchTree<>();
        BinarySearchTree<Double> doubleBST = new BinarySearchTree<>();
        intBST.add(8);intBST.add(3);intBST.add(7);intBST.add(9);
        intBST.add(4);intBST.add(1);intBST.add(22);intBST.add(10);
        intBST.print();
        System.out.println(intBST.minimum());
        System.out.println(intBST.maximum());
    }
}