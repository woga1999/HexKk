package studyjava;

public class SimpleDotComTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		SimpleDotCom dot = new SimpleDotCom();
		
		// ����ڰ� ������ ���� ������ numOfGuess��� int ������ �����մϴ�.
		// �� ��ġ�� ���������� �� 0 �̻� 4 ������ ������ ����մϴ�.
		// ������ ����ִ� ����[while��] ������� ���� ����ڷκ��� ��ġ�� �޽��ϴ�.
		
		int rand1 = (int) (Math.random() * 4);
		
		
		
		int[] locations = {2, 3, 4};
		
		dot.setLocationCells(locations);
		
		
		
		String userGuess = "2";
		String result = dot.checkYourself(userGuess);

		System.out.println(result);
		
		
		userGuess = "3";
		result = dot.checkYourself(userGuess);

		System.out.println(result);
		
		
		userGuess = "4";
		result = dot.checkYourself(userGuess);
		
		System.out.println(result);
		
		
	}

}
