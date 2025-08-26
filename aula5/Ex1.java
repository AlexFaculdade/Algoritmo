import java.util.Scanner;

class Ex1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;
        System.out.println("Digite o seu número: ");
        num = scanner.nextInt();
        if(num % 2 == 0) {
            System.out.println("Número par");
        } else {
            System.out.println("Número impar");
        }
        num = scanner.nextInt();
    }
}