       #include <iostream>
      // Solicitar informações sobre o novo produto
      escrever("Informe o nome do produto: ")
      ler(estoque[totalProdutos].nome)



      escrever("Informe o código do produto: ")
      ler(estoque[totalProdutos].codigo)

      escrever("Informe o preço do produto: ")
      ler(estoque[totalProdutos].preco)

      escrever("Informe a quantidade do produto: ")
      ler(estoque[totalProdutos].quantidade)

      totalProdutos <- totalProdutos + 1
   fimprocedimento

   procedimento registrarVenda()
      // Solicitar informações sobre o produto vendido
      escrever("Informe o código do produto: ")
      ler(codigoProduto)

      // Procurar o produto no estoque
      inteiro indiceProduto = -1
      para i de 0 até totalProdutos - 1 passo 1 faça
         se estoque[i].codigo = codigoProduto então
            indiceProduto <- i
            interromper
         fimse
      fimpara

      se indiceProduto <> -1 então
         // Verificar a disponibilidade do produto
         se estoque[indiceProduto].quantidade > 0 então
            escrever("Produto disponível! Realize o registro da venda.")
            estoque[indiceProduto].quantidade <- estoque[indiceProduto].quantidade - 1
         senão
            escrever("Produto esgotado!")
         fimse
      senão
         escrever("Produto não encontrado!")
      fimse
   fimprocedimento

   procedimento gerarRelatorio()
      para i de 0 até totalProdutos - 1 passo 1 faça
         escrever("Nome: ", estoque[i].nome)
         escrever("Código: ", estoque[i].codigo)
         escrever("Quantidade: ", estoque[i].quantidade)
         escrever("-----------------------------")
      fimpara
   fimprocedimento

   // Programa principal
   inteiro opcao
   repetir
      escrever("===== MENU =====")
      escrever("1. Registrar entrada de produto")
      escrever("2. Registrar venda de produto")
      escrever("3. Gerar relatório de estoque")
      escrever("4. Sair")
      escrever("Escolha uma opção: ")
      ler(opcao)

      se opcao = 1 então
         registrarEntrada()
      senão se opcao = 2 então
         registrarVenda()
      senão se opcao = 3 então
         gerarRelatorio()
      fimse
   até que opcao = 4
fimalgoritmo
```