
public class Game{

    public static void main(String []args) {
        PlayerCharacter player = new PlayerCharacter("gamepari", 70, 12);
        EnemyCharacter enemy = new EnemyCharacter("Orc", 80, 5);

        while(player.isLive() && enemy.isLive()){
            player.attack(enemy);
            if(!enemy.isLive()) break;
            enemy.attack(player);
            System.out.println("--------------------------");
        }

        if(player.isLive()){
            System.out.println("Player win");
        }else{
            System.out.println("Enemy win");
        }
    }
}