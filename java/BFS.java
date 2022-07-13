import java.util.LinkedList;
public class BFS {
    private int vertices;
    private LinkedList<Integer>[] adjList;
    private LinkedList<Integer> queue;
    BFS(int vertices){
        this.vertices = vertices;
        adjList = new LinkedList[vertices];
        for (int i = 0; i< vertices; i++) adjList[i] = new LinkedList<Integer>();
        queue = new LinkedList<Integer>();
    }
    void connectNodes(int initialNode, int targetNode){
        adjList[initialNode].add(targetNode);
    }
    public void traverse(int start) {
        /* boolean array declaration for nodes visited*/
        boolean nodes[] = new boolean[vertices];
        int current = 0;
        nodes[start]=true;
        /* starting node as the first element for the queue */
        queue.add(start);
        while (queue.size() != 0)
        {
            /* remove first node from the queue */
            start = queue.poll();
            System.out.print(start+" ");

            /* Add neighboring nodes to the queue */
            for (int i = 0; i < adjList[start].size(); i++)
            {
                current = adjList[start].get(i);
                /* Insert unvisited nodes*/
                if (!nodes[current])
                {
                    nodes[current] = true;
                    queue.add(current);
                }
            }
        }
    }

    public static void main(String[] args) {
        BFS graph = new BFS(5);
        graph.connectNodes(0, 1);
        graph.connectNodes(0, 2);
        graph.connectNodes(0, 3);
        graph.connectNodes(1, 2);
        graph.connectNodes(2, 4);
        graph.connectNodes(3, 3);
        graph.connectNodes(4, 4);
        System.out.print("Breadth First Traversal from the node [0] for this graph is: ");
        graph.traverse(0);
    }
}
