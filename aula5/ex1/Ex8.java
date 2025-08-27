import java.util.Scanner;

class Ex8 {
    public static void main(String [] args) {
//         Leia as horas trabalhadas e o valor pago por hora. Caso o total de horas seja
//          superior a 40, as horas excedentes devem ter acréscimo de 50% no valor. Mostre o
//          pagamento final

        Scanner scanner = new Scanner(System.in);
        float horaTrabalhada, valorPagoHora, total, extra;
        System.out.println("Digite suas horas trabalhadas: ");
        horaTrabalhada = scanner.nextFloat();
        System.out.println("Digite seu valor recebido por hora: ");
        valorPagoHora = scanner.nextFloat();
        if(horaTrabalhada > 40) {
            extra = horaTrabalhada - 40;
            extra = extra * (valorPagoHora + (valorPagoHora * 0.5f));
            total = (horaTrabalhada * valorPagoHora) + extra;
        }

        total = horaTrabalhada * valorPagoHora;
        System.out.println("Você receberá: " + total);
        

    }
}