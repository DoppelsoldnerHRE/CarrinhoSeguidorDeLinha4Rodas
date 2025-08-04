# Codigo simples para um carrinho seguidor de linha 4 rodas.

# Componentes

- 1 Arduíno Mega  
- 3 Sensores Infravermelho  
- 2 Ponte H  
- 1 Mini-Protoboard  
- 4 Motores DC  
- 4 Rodas para motores  
- 4 Pilhas li-ion  
- 2 Casing para pilha li-ion  
- 2 Placa suporte de acrílico para carrinho  
- 6 Espaçadores  
- 12 Parafusos para os espaçadores  
- 8 Acrílico suporte para os motores  
- 8 Parafusos longos para fixar os motores  
- 8 Porcas para fixar os motores  
- 20 Jumpers macho-fêmea  
- 6 Jumpers macho-macho  

---

# Processo de Montagem

1. **Fixação dos Motores:**
   - Inicie fixando os motores no suporte de acrílico.  
   - Para isso, use os suportes de acrílico apropriados para parafusar os motores.  
   - Cole os 4 apoiadores internos para melhorar a fixação dos motores.  
   - Os motores devem ser posicionados virados um para o outro para funcionarem corretamente.

2. **Fixação das Pontes H:**
   - Após os motores estarem fixados, cole as Pontes H nas extremidades do carrinho com cola quente.  
   - Conecte os motores às saídas das Pontes H.

3. **Conexão das Pilhas:**
   - Utilize quatro pilhas li-ion em dois casings conectados em paralelo, aumentando a capacidade de uso.  
   - A saída positiva dos casings deve passar por um switch, que será conectado às entradas positivas das duas Pontes H.  
   - A parte negativa dos casings vai diretamente para a entrada negativa das Pontes H.  

   > **Nota:** Pode ser necessário expandir um dos furos para encaixar o switch.

4. **Conexão das Pontes H à Protoboard:**
   - Conecte 6 jumpers macho-fêmea em cada Ponte H nas portas: `EnA`, `En1`, `En2`, `En3`, `En4`, `EnB`.  
   - Adicione um jumper macho-macho na parte negativa de cada Ponte H para conexão com a protoboard.  
   - A Ponte H mais próxima da protoboard deve ter um jumper da saída de 5V conectado à protoboard.  
   - Isso servirá como alimentação tanto para o Arduino quanto para os sensores.

5. **Montagem Superior:**
   - Passe os fios de energia para a parte superior do carrinho.  
   - Fixe os espaçadores com parafusos na parte de cima.  
   
   > **Nota:** Os parafusos podem afrouxar com o uso, sendo necessário reapertá-los periodicamente.

6. **Fixação dos Componentes Superiores:**
   - Cole os componentes da parte superior com cola quente.  
   - Conecte os fios conforme descrito:
     - Entradas `EnA` e `EnB` das Pontes H vão nas portas digitais com símbolo PWM do Arduino (pinos 13 a 2).
     - Os fios da entrada negativa da Ponte H vão para o negativo da protoboard.
     - O fio da saída de 5V da Ponte H vai para o positivo da protoboard.

7. **Instalação das Rodas e Sensores:**
   - Coloque as rodas nos motores.  
   - Cole os sensores infravermelho na parte frontal do carrinho.  
   - Conecte:
     - Fios negativos dos sensores ao negativo da protoboard  
     - Fios positivos ao positivo da protoboard  
     - Fios `OUT` nas portas digitais do Arduino para facilitar a programação.

---

# Finalização

Pronto! A montagem física do carrinho seguidor de linha está concluída.  
Agora, basta implementar o código na **Arduino IDE** para dar vida ao projeto.
