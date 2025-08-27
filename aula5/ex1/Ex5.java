import java.util.Scanner;

class Ex5 {
    public static void main(String[] args) {
        // Leia a nota (0 a 10) e a frequência (em %) de um aluno. Se nota ≥ 6 e frequência
        // ≥ 75 → Aprovado. Se nota ≥ 4 e frequência ≥ 75 → Recuperação. Caso contrário → Reprovado
        float nota;
        int frequencia;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite sua nota: ");
        nota = scanner.nextFloat();
        System.out.println("Digite sua frequência em percentual sem %: ");
        frequencia = scanner.nextInt();
        if(nota >= 6 && frequencia >= 75) {
            System.out.println("Aprovado");
        } else if(nota >= 4 && frequencia >= 75) {
            System.out.println("Recuperação");
        } else {
            System.out.println("Reprovado");
        }
    }
}