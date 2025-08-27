import java.util.Scanner;

class Ex10 {
    public static void main(String [] args) {
//         Leia o consumo de energia em kWh e calcule o valor da conta usando:
        // • Até 100 kWh → R$ 0,50/kWh
        // • Até 200 kWh → R$ 0,70/kWh
        // • Acima de 200 kWh → R$ 0,90/kWh
        // • Calcule o valor total.

        Scanner scanner = new Scanner(System.in);
        float consumido, valor;
        System.out.println("Digite quantos KWh você consumiu");
        consumido = scanner.nextFloat();
        if(consumido > 200) {
            valor = consumido * 0.9f;
        } else if(consumido <= 200 && consumido > 100) {
            valor = consumido * 0.7f;
        } else {
            valor = consumido * 0.5f;
        }

        System.out.println("Você consumiu: " + consumido + " KWh, logo você pagará: " + valor + " reais");
    }
}