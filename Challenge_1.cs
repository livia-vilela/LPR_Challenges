using System;

class annabeth_chase
{
    static void Main(string[] args)
    {
        Console.WriteLine("Bem vindo a página de cadastro dos campistas do Acampamento Meio-Sangue para semideuses!\n\nAqui estão as informações da campista: Annabeth Chase");
        Console.Write("Insira o ano em que o acesso está sendo realizado: ");
        int ano_atual = int.Parse(Console.ReadLine());
        int ano_nascimento = 1993;
        int idade = ano_atual - ano_nascimento;
        Console.WriteLine("Idade: {0}", idade);
        string origem = "São Francisco, Califórnia, Estados Unidos";
        Console.WriteLine("Local de onde veio: {0}", origem);
        string habilidades ="Luta, Agilidade sobre-humana, Força sobre-humana, Durabilidade sobre-humana, Código Morse, Primeiros Socorros";
        Console.WriteLine("\n Vida mundana:");
        Console.WriteLine("Rede social favorita: Vsco \n >User : archbeth\n > Seguidores : 65 \n > Posts : 43 \n > Views : 327");//ela é fissurada por arquitetura, por isso o user = architecture + annabeth
        double alcance_vsco = 43 / 327;
        Console.WriteLine("O alcançe máximo da conta foi de aproximandamente {0}", alcance_vsco);
        Console.Write("Se o campista disponibilizou a nota total escoalar mundana, inserí-la: ");
        float nota = float.Parse(Console.ReadLine());
        double media_acampamento = nota*2;//2 é o número de meses que os campistas passam no acampamento
        Console.WriteLine("A nota media do aluno para entrar no acampamento foi: {0}.", media_acampamento);
        Console.WriteLine("Deseja saber curiosidades do aluno? \n1. Sim \n2. Não");
        int opcao = int.Parse(Console.ReadLine());
        bool escolha = opcao == 1;
        if (escolha == true)
        {
           char letra_add1 = 'A';
            char letra_add2 = 'N';
            Console.WriteLine("O nome ANNABETH é um anagrama de Athena (sua mãe), adicionando as letras {0} e {1}", letra_add1, letra_add2);
            Console.WriteLine("Aproxima curiosidade pode fazer o campista em questão querer te eliminar. Tem certeza que deseja continuar?\n 1) Sim \n 2) Não");
            int option = int.Parse(Console.ReadLine());
            bool choice = option == 1;
            if (choice == true)
            {
                Console.WriteLine("Ela tem um crush enorme no Percy Jackson.");

            }
            else
            {
                Console.WriteLine("Ótima escolha.");
            }

        }
        else
        {
            Console.WriteLine("Ok. Volte sempre.");
        }

                                          
         
        









    }
}
