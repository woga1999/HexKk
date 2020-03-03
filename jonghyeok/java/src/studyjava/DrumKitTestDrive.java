package studyjava;

public class DrumKitTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		DrumKit d = new DrumKit();
		
		if(d.snare == true) {
			d.playSnare();
		}
		
		d.snare = false;
		
		d.playTopHat();

	}

}
