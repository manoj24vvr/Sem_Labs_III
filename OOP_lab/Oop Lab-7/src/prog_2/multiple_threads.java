package prog_2;
class NewThread extends Thread{
	@Override 
	public void run() {
		try {
			if(currentThread().getName().equals("Thread 1")){
				System.out.println("Thread 1 begins"); 
				for (int i = 4; i >2; i--) { 
					System.out.println(i);
					Thread.sleep(1000);
				}
				System.out.println("Thread 1 ended");
				}
			if(currentThread().getName().equals("Thread 2")){
				System.out.println("Thread 2 begins");
				for (int i = 1; i <3; i++) {
					System.out.println(i);
					Thread.sleep(1000);
					}
				System.out.println("Thread 2 ended");
				}
		} catch (InterruptedException e) {
			System.out.println("Main thread is intruped");
		}
	}
}

public class multiple_threads{
	public static void main(String[] args) {
		Thread t = Thread.currentThread();
		t.setName("Main Thread");
		System.out.println("Main thread started");
		NewThread t1 = new NewThread();
		NewThread t2 = new NewThread();
		t1.setName("Thread 1");
		t2.setName("Thread 2");
		t1.start();
		t2.start();
		System.out.println("Thread 1 is Alive: "+t1.isAlive());
		System.out.println("Thread 2 is Alive: "+t2.isAlive());
		try {
			t1.join();
			t2.join();
			}
		catch (InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println("Main thread is Alive: "+t.isAlive());
		System.out.println("end of main thread");
	}
}
