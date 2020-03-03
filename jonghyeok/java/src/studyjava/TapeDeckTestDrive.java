package studyjava;

public class TapeDeckTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		TapeDeck t = new TapeDeck();
		
		t.canRecord = true;
		t.playTape();
		
		if(t.canRecord == true) {
			t.recordTape();
		}
		

	}

}
