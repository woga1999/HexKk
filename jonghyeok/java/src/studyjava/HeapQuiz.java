package studyjava;

public class HeapQuiz {
	
	int id = 0;
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int x = 0;
		HeapQuiz[] hq = new HeapQuiz[5];
		
		while(x<3) {
			hq[x] = new HeapQuiz();
			hq[x].id = x;
			x = x + 1;
		}
		
		hq[3] = hq[1]; // 두번째 객체를 가리킴
		hq[4] = hq[1]; // 두번째 객체를 가리킴
		hq[3] = null; // 객체를 가리키지 않음
		hq[4] = hq[0]; // 첫번째 객체를 가리킴
		hq[0] = hq[3]; // 객체를 가리키지 않음
		hq[3] = hq[2]; // 세번째 객체를 가리킴
		hq[2] = hq[0]; // 객체를 가리키지 않음
		
		//hq[2]는 객체를 가리키지 않음
		// hq[0]는 객체를 가리키지 않음
		// hq[4]는 첫번째 객체를 가리킴 -> id: 0
		// hq[3]는 세번째 객체를 가리킴 -> id: 2
		// hq[1]는 두번째 객체를 가리킴 -> id: 1
		x=0;
		while(x<5) {
			if(hq[x] == null) {
				System.out.println(x+1 + "번째 객체가 " + "객체를 가리키고 있지 않음");
			}
			else {
				System.out.println(x+1 + "번째 객체가 " + "id: " + hq[x].id + "를 가리키고 있음");
			}
			x=x+1;	
		}
		

	}

}
