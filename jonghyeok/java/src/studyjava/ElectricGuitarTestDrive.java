package studyjava;

public class ElectricGuitarTestDrive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ElectricGuitar gc = new ElectricGuitar();
		
		gc.setBrand("Hello");
		gc.setNumOfPickups(5);
		gc.setRockStarUsesIt(true);
		System.out.println("Brand: " + gc.getBrand() + " " +
				"NumOfPickups: " + gc.getNumOfPickups() + " " +
				"RockStarUsesIt: " + gc.getRockStarUsesIt());
	}

}
