package studyjava;

public class TestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Test ts = new Test();
		Test ts2 = new Test();
		
		ts.setName("Hello");
		ts.setIndex(10);
		
		ts2.setName("Hello");
		ts2.setIndex(10);
		
		System.out.println(ts.getName() == ts2.getName());
		System.out.println(ts.equals(ts2));
		
		ts2 = ts;
		
		System.out.println(ts.equals(ts2));
		
		
	}

}
