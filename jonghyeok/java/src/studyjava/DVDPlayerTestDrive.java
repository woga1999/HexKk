package studyjava;

public class DVDPlayerTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		DVDPlayer d = new DVDPlayer();
		d.canRecord = true;
		d.playDVD();
		
		if(d.canRecord == true) {
			d.recordDVD();
		}

	}

}
