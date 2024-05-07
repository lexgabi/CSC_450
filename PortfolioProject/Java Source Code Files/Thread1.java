// Lexee Gabiola, CSC450-1, 9/10/23, Portfolio Project Part 2

public class Thread1 implements Runnable {

    @Override
    public void run() {
        System.out.println("Thread 1");
        // Count up to 20
        for (int i = 0; i < 21; i++) {
            System.out.println(i);
        }
    }
}
