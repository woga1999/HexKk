package studyjava;
import java.util.Scanner;

public class SimpleDotComGame {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner()
		
		
		SimpleDotCom sp = new SimpleDotCom();
		
		int[] index_a = new int[3];
		int rand1 = (int) (Math.random() * 4);
		int numOfGuesses;
		
		index_a[0] = rand1;
		index_a[1] = rand1+1;
		index_a[2] = rand1+2;
		
		sp.setLocationCells(index_a);
		
		while(sp.numOfHits != 3)
		{
			// �Է�(String)
			// checkYourself�� �Էµ� �� ������
			// ���� ī��Ʈ
			
		}
		
		
		
		// ī��Ʈ Ƚ��
		
		

	}

}
