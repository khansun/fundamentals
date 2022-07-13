import java.util.*;
class DFS {
    private int vertices;
    private LinkedList<Integer>[] adjList;
    DFS(int vertices)
    {
        this.vertices = vertices;
        adjList = new LinkedList[vertices];
        for (int i = 0; i < vertices; ++i) adjList[i] = new LinkedList();
    }

    void connectNodes(int initialNode, int targetNode)
    {
        adjList[initialNode].add(targetNode);
    }

    void searchVertices(int v, boolean visited[])
    {
        // Mark the current node as visited and print it
        visited[v] = true;
        System.out.print(v + " ");

        // Recur for all the vertices adjacent to this
        // vertex
        Iterator<Integer> i = adjList[v].listIterator();
        while (i.hasNext()) {
            int n = i.next();
            if (!visited[n])
                searchVertices(n, visited);
        }
    }

    // The function to do DFS traversal.
    // It uses recursive
    // DFSUtil()
    void traverse(int v)
    {
        // Mark all the vertices as
        // not visited(set as
        // false by default in java)
        boolean visited[] = new boolean[vertices];

        searchVertices(v, visited);
    }

    public static void main(String args[])
    {
        DFS graph = new DFS(4);
        graph.connectNodes(0, 1);
        graph.connectNodes(0, 2);
        graph.connectNodes(1, 2);
        graph.connectNodes(2, 0);
        graph.connectNodes(2, 3);
        graph.connectNodes(3, 3);
        System.out.print("Depth First Traversal from the node [2] for this graph is: ");
        graph.traverse(2);
    }
}
