
class TestSolution {
	public static void main(String[] args) {
		BFS graph = new BFS(10);
		graph.connectNodes(0, 1);
		graph.connectNodes(0, 2);
		graph.connectNodes(0, 3);
		graph.connectNodes(1, 3);
		graph.connectNodes(2, 4);
		graph.connectNodes(3, 5);
		graph.connectNodes(3, 6);
		graph.connectNodes(4, 7);
		graph.connectNodes(4, 5);
		graph.connectNodes(5, 2);
		graph.connectNodes(6, 5);
		graph.connectNodes(7, 5);
		graph.connectNodes(7, 8);
		System.out.print("Breadth First Traversal for the starting from node [2] graph is: ");
		graph.traverse(2);
	}

} 