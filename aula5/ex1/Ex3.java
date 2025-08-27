import java.util.Scanner;

class Ex3 {
    public static void main(String[] args) {
        //Leia o preço de um produto. Caso ele seja maior que R$ 100, aplique 5% de
        //desconto. Mostre o valor final a ser pago.
        Scanner scanner = new Scanner(System.in);
        float precoProduto, precoFinal;
        System.out.println("Digite o preço do produto: ");
        precoProduto = scanner.nextFloat();
        if(precoProduto > 100) {
            precoFinal = precoProduto - (precoProduto * 0.05f);
            System.out.println("Pelo preço ser maior que 100, você receberá um desconto de 5%, valor: " + precoFinal);
        } else {
            precoFinal = precoProduto;
            System.out.println("Pelo preço ser menor que 100, você não receberá o desconto de 5%, valor: " + precoFinal);
        }
    }
}