import java.util.Scanner;

class Ex4 {
    public static void main(String[] args) {
        float nota;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite sua nota: ");
        nota = scanner.nextFloat();
        if(nota >= 6) {
            System.out.println("Aprovado");
        } else {
            System.out.println("Reprovado");
        }
    }
}