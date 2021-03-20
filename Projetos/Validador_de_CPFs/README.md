# Projeto Validador de CPFs

### O objetivo deste projeto é exercitar o uso de funções e procedimentos: 

1) No link a seguir você encontra a explicação do algoritmo usado pela Receita Federal para validação de um CPF:    
https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/    
Estude-o e monte uma planilha em Excel ou Calc para implementar a ideia.    

2) Faça um código em C que valide o primeiro e o segundo dígito verificador.    
    
3) Agora crie uma função que verifique um dígito qualquer (perceba a semelhança na verificação de cada um dos dígitos) e altere o código.    

4) Agora vamos melhorar mais ainda o código do validador de CPFs com função acrescentando a checagem de todos dígitos repetidos, pois CPFs como 333.333.333-33 e 444.444.444-44 passam na verificação dos dígitos mas não são considerados válidos. Escreva uma função que descubra se o vetor tem ou não todos os elementos repetidos.    

5) Vamos melhorar mais ainda acrescentando agora um procedimento (uma função que nada retorna) para informar (imprimir na tela) o estado de origem do CPF, com base no seu nono dígito (ou seu ante-penúltimo dígito):    

    * 0 Rio Grande do Sul    
    * 1 Distrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins    
    * 2 Amazonas, Pará, Roraima, Amapá, Acre e Rondônia    
    * 3 Ceará, Maranhão e Piauí    
    * 4 Paraíba, Pernambuco, Alagoas e Rio Grande do Norte    
    * 5 Bahia e Sergipe    
    * 6 Minas Gerais    
    * 7 Rio de Janeiro e Espírito Santo    
    * 8 São Paulo    
    * 9 Paraná e Santa Catarina    
(Essa informação está no site: http://verificador.blogspot.com.br/p/cpf-validacao.html)    
    
6) Vamos trabalhar na nova entrada dos dígitos do CPF. Vamos lê-los com uma string e processá-la adequadamente. Usando o conhecimento de que cada caractere é representado internamente por um número que corresponde ao seu código ASCII ( https://pt.wikipedia.org/wiki/ASCII ), podemos convertê-lo facilmente para o correspondente numérico:    

| Código ASCII | Caractere| Correspondente (número) |
|----------|------|-----|
| 48 | '0' | 0 |
| 49 | '1' | 1 |
| 50 | '2' | 2 |
| 51 | '3' | 3 |
| 52 | '4' | 4 |
| 53 | '5' | 5 |
| 54 | '6' | 6 |
| 55 | '7' | 7 |
| 56 | '8' | 8 |
| 57 | '9' | 9 |
    
Todo outro caractere presente na digitação deve ser ignorado, como '.' (ponto), '-' (hífen) e ' ' (espaço).

7) No último detalhe: Vamor melhorar o método get, utilizando o fgtes, e fazer uma função para converter a entrada dos dígitos, pois o CPF pode ter menos de 11 dígitos e ainda ser válido. Assim, este procedimento deverá deixar zeros à esquerda para completar os 11 dígitos, caso contrário, o algoritmo de validação falhará.    

