import java.util.Scanner;

class Ex6 {
    public static void main(String[] args) {
        //Leia um número e exiba “Positivo” caso seja maior que zero.
        Scanner scanner = new Scanner(System.in);
        int num;
        System.out.println("Escreva seu número");
        num = scanner.nextInt();
        if(num > 0) {
            System.out.println("Número positivo");
        } else if(num == 0) {
            System.out.println("Valor neutro");
        } else {
            System.out.println("Número negativo");
        }
    }
}