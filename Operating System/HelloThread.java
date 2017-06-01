public class HelloThread extends Thread {

    public void run() {
        System.out.println("Hello from a thread! of " + getName());
    }

    public static void main(String args[]) {
        HelloThread t1 = new HelloThread();
        HelloThread t2 = new HelloThread();
        HelloThread t3 = new HelloThread();
        HelloThread t4 = new HelloThread();
        HelloThread t5 = new HelloThread();
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
    }
}
