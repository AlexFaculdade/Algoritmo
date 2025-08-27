import java.util.Scanner;

class Ex11 {
    public static void main(String[] args) {
        //Leia um número e exiba “Múltiplo de 3” se ele for divisível por 3
        Scanner scanner = new Scanner(System.in);
        int num;

        System.out.println("Digite o num: ");
        num = scanner.nextInt();
        if(num % 3 == 0) {
            System.out.println("Múltiplo de 3");
        } else {
            System.out.println("Não é múltiplo de 3");
        }
    }
}