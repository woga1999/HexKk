
public class EnemyCharacter extends Character {
    
    public EnemyCharacter(String name, int hp, int atk){
        super(name, hp, atk); //내가 상속받은 녀석의 생성자(부모의 기능을 사용하겠다)
    }

    @Override //없어도 노상관
    public void attack(Character enemy){
        if(hp <= 20){
            System.out.println("Orc is ANGRY...");
            this.atk += 15;
        }

        super.attack(enemy);

        PlayerCharacter player = (PlayerCharacter)enemy;

        if(player.hp <= 30){
            player.heal(); //형변환
        }   
    }
    
}

  