// Lexee Gabiola, CSC450-1, 9/10/23, Portfolio Project Part 2

public class PortfolioProject {

    public static void main(String[] args) {
        // Create class instances
        Thread1 thread1 = new Thread1();
        Thread2 thread2 = new Thread2();

        // Create thread objects
        Thread t = new Thread(thread1);
        Thread t2 = new Thread(thread2);

        System.out.println("Concurrency of Two Threads");
        t.start();
        t2.start();
    }
}