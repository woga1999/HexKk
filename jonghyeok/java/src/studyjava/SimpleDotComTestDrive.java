package studyjava;

public class SimpleDotComTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		SimpleDotCom dot = new SimpleDotCom();
		
		// 사용자가 추측한 값을 저장할 numOfGuess라는 int 변수를 선언합니다.
		// 셀 위치의 시작점으로 쓸 0 이상 4 이하의 난수를 계산합니다.
		// 닷컴이 살아있는 동안[while문] 명령행을 통해 사용자로부터 위치를 받습니다.
		
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
