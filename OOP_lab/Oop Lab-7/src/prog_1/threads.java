package prog_1;
import java.util.Scanner; 
class NewThread1 extends Thread{
	@Override 
	public void run() {
		try {
			if(currentThread().getName().equals("Child thread")){
				System.out.println("Executing run() in child thread"); 
				for (int i = 1; i <4; i++) { 
					System.out.println(i);
					Thread.sleep(1000);
				}
				System.out.println("Child thread ended");
				}
		} catch (InterruptedException e) {
			System.out.println("Main thread is intruped");
		}
	}
}

public class threads {
	private class RunnableImpl implements Runnable {
		public void run(){
			try {
				for(int i=3;i>0;i--) {
					System.out.println(i);
					Thread.sleep(500);
				}
			}catch(InterruptedException e) {
				System.out.println("Child Thread Interrupted");
			}
			System.out.println("Exiting child thread");
		}
	}
	public static void main(String[] args) {
		System.out.println("Select-1: Create a new thread by inheriting thread class");
		System.out.println("Select-2: Create a new thread using runnable interface ");
		Scanner scan = new Scanner(System.in);
		int option = scan.nextInt();
		switch (option) { 
			case 1: { 
				Thread t = Thread.currentThread();
				t.setName("Main Thread");
				System.out.println("Main thread started");
				NewThread1 ct = new NewThread1();
				ct.setName("Child thread");
				ct.start();
				try {
					ct.join();
					}
				catch (InterruptedException e) {
					System.out.println("Child thread interrupted");;
				}
				System.out.println("Main thread ended");
				break;
			} 
			case 2: {
				System.out.println("Current thread is- "+ Thread.currentThread().getName()); 
				Thread t1 = new Thread(new threads().new RunnableImpl());
				System.out.println("Child thread started");
				t1.start();
				break;
			}
		}scan.close();
	}
} 
