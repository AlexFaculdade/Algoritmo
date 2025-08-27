import java.util.Scanner;

class Ex9 {
    public static void main(String[] args) {
        //Leia a idade de uma pessoa e exiba “Jovem” se for até 25 anos; caso contrário, exiba “Adulto”.
        int idade;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite sua idade: ");
        idade = scanner.nextInt();
        if(idade <= 25) {
            System.out.println("Você é jovem");
        } else {
            System.out.println("Você é adulto");
        }
    }
}