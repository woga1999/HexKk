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
		
		hq[3] = hq[1]; // �ι�° ��ü�� ����Ŵ
		hq[4] = hq[1]; // �ι�° ��ü�� ����Ŵ
		hq[3] = null; // ��ü�� ����Ű�� ����
		hq[4] = hq[0]; // ù��° ��ü�� ����Ŵ
		hq[0] = hq[3]; // ��ü�� ����Ű�� ����
		hq[3] = hq[2]; // ����° ��ü�� ����Ŵ
		hq[2] = hq[0]; // ��ü�� ����Ű�� ����
		
		//hq[2]�� ��ü�� ����Ű�� ����
		// hq[0]�� ��ü�� ����Ű�� ����
		// hq[4]�� ù��° ��ü�� ����Ŵ -> id: 0
		// hq[3]�� ����° ��ü�� ����Ŵ -> id: 2
		// hq[1]�� �ι�° ��ü�� ����Ŵ -> id: 1
		x=0;
		while(x<5) {
			if(hq[x] == null) {
				System.out.println(x+1 + "��° ��ü�� " + "��ü�� ����Ű�� ���� ����");
			}
			else {
				System.out.println(x+1 + "��° ��ü�� " + "id: " + hq[x].id + "�� ����Ű�� ����");
			}
			x=x+1;	
		}
		

	}

}
