import java.util.Scanner;

class Ex7 {
    public static void main(String[] args) {
        //Leia dois números e exiba o maior deles. Caso sejam iguais, exiba “Números iguais”.
        float num, num2;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Escreva o primeiro número: ");
        num = scanner.nextFloat();
        System.out.println("Escreva o segundo número: ");
        num2 = scanner.nextFloat();
        if(num > num2) {
            System.out.println("O maior número é: "+ num);
        } else if(num == num2) {
            System.out.println("Os números são iguais");
        } else {
            System.out.println("Os maior número é: " + num2);
        }
    }
}