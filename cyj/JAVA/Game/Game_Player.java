
public PlayerCharacter extends Character() {
    
    public PlayerCharacter(String name, int hp, int atk){
        super(name, hp, atk); //내가 상속받은 녀석의 생성자(부모의 기능을 사용하겠다)
    }

    
    public void heal(){
        hp += 20;
        System.out.println("HEAL!")
    }


}