package studyjava;

public class HobbitsTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Hobbits[] h = new Hobbits[3];
		int z = 0;
		
		while(z < 3) {
			
			h[z] = new Hobbits();
			
			if(z == 0) {
				h[z].name = "bilbo";
			}
			else if(z == 1) {
				h[z].name = "frodo";
			}
			else {
				h[z].name = "sam";
			}
			
			System.out.print(h[z].name + " is a ");
			System.out.println("good Hobbit name");
			
			z = z + 1;
		}
		
	}

}
