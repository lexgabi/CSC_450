// Lexee Gabiola, CSC450-1, 9/10/23, Portfolio Project Part 2

public class Thread2 implements Runnable {

    @Override
    public void run() {
        System.out.println("Thread 2");
        // Count down to 0
        for (int i = 20; i > -1; i--) {
            System.out.println(i);
        }

    }
}
